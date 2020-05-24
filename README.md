# wexec

`wexec` (short for *wait-exec*) is a very simple command that installs a signal
handler for `SIGUSR1` which executes the command line passed as command-line
arguments to `wexec`.

This program is intended for use on Unix-like systems (I suppose that it is
POSIX-compliant).
