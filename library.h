#define _GNU_SOURCE
#include <errno.h>
#include <fcntl.h>
#include <netdb.h>
#include <netinet/in.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/un.h>
#include <unistd.h>
#ifndef LIB_LIBRARY_H
#define LIB_LIBRARY_H

int connect_socket(char *name, char *port);
struct sockaddr_in make_address(char *address, char *port);
ssize_t bulk_write(int fd, char *buf, size_t count);
ssize_t bulk_read(int fd, char *buf, size_t count);
int add_new_client(int sfd);
int bind_tcp_socket(uint16_t port);
int bind_local_socket(char *name);
int make_socket(int domain, int type);
int sethandler(void (*f)(int), int sigNo);
#endif //LIB_LIBRARY_H
