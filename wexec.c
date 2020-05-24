#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

static char *const *g_argv;

static void sigusr1_handler(int sig)
{
    if (execvp(g_argv[1], g_argv + 1) == -1)
    {
        perror("execvp");
        exit(1);
    }
}

void main(int argc, char *const *argv)
{
    g_argv = argv;
    if (signal(SIGUSR1, sigusr1_handler) == SIG_ERR)
    {
        perror("signal");
        exit(1);
    }

    while (1)
        ;
}