#ifndef __LIBRECAST_DAEMON_H__
#define __LIBRECAST_DAEMON_H__ 1

#define PROGRAM_NAME "librecast"

/* return full path of program lockfile. free() after use. */
char *getlockfilename();

/* get a lock and write pid */
int obtain_lockfile();

/* program entrypoint */
int main();

#endif /* __LIBRECAST_DAEMON_H__ */
