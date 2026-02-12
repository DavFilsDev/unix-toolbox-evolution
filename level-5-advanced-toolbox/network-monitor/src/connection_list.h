#ifndef CONNECTION_LIST_H
#define CONNECTION_LIST_H

typedef struct {
    char local_ip[64];
    char remote_ip[64];
    int local_port;
    int remote_port;
} Connection;

typedef struct {
    Connection *items;
    int count;
} ConnectionList;

ConnectionList get_connections();
void show_connections(ConnectionList list);
void free_connections(ConnectionList list);

#endif