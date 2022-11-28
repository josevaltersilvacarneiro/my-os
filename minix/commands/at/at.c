#include <sys/times.h>
#include <sys/stat.h>
#include <time.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <signal.h>
#include <stdio.h>
#include <errno.h>

#define STARTDAY	0	/* See ctime(3) */
#define LEAPDAY 	(STARTDAY + 59)
#define MAXDAYNR	(STARTDAY + 365)
#define NODAY		(-2)
char CRONPID[] =	"/usr/run/cron.pid";

int main(int argc, char **argv, char **envp);
int getltim(char *t);
int getlday(char *m, char *d);
int digitstring(char *s);

int 
main(int argc, char **argv, char **envp)
{
	/* starting */	
	return 0;
}
