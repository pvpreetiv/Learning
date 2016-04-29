#include <syslog.h>

main()
{
#if 0
	int	error = -1;

		openlog("hello", (LOG_CONS|LOG_PERROR|LOG_PID), LOG_DAEMON);
		syslog(LOG_EMERG, "reboot system : %d", error);
		closelog();
#endif


system("ls -l /root");
}
