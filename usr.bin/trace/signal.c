/* This file is automatically generated by signal.awk */

#include "inc.h"

static const char *const signals[] = {
	[SIGHUP] = "SIGHUP",
	[SIGINT] = "SIGINT",
	[SIGQUIT] = "SIGQUIT",
	[SIGILL] = "SIGILL",
	[SIGTRAP] = "SIGTRAP",
	[SIGABRT] = "SIGABRT",
	[SIGEMT] = "SIGEMT",
	[SIGFPE] = "SIGFPE",
	[SIGKILL] = "SIGKILL",
	[SIGBUS] = "SIGBUS",
	[SIGSEGV] = "SIGSEGV",
	[SIGSYS] = "SIGSYS",
	[SIGPIPE] = "SIGPIPE",
	[SIGALRM] = "SIGALRM",
	[SIGTERM] = "SIGTERM",
	[SIGURG] = "SIGURG",
	[SIGSTOP] = "SIGSTOP",
	[SIGTSTP] = "SIGTSTP",
	[SIGCONT] = "SIGCONT",
	[SIGCHLD] = "SIGCHLD",
	[SIGTTIN] = "SIGTTIN",
	[SIGTTOU] = "SIGTTOU",
	[SIGIO] = "SIGIO",
	[SIGXCPU] = "SIGXCPU",
	[SIGXFSZ] = "SIGXFSZ",
	[SIGVTALRM] = "SIGVTALRM",
	[SIGPROF] = "SIGPROF",
	[SIGWINCH] = "SIGWINCH",
	[SIGINFO] = "SIGINFO",
	[SIGUSR1] = "SIGUSR1",
	[SIGUSR2] = "SIGUSR2",
	[SIGPWR] = "SIGPWR",
};

const char *
get_signal_name(int sig)
{

	if (sig >= 0 && (unsigned int)sig < __arraycount(signals) &&
	    signals[sig] != NULL)
		return signals[sig];
	else
		return NULL;
}