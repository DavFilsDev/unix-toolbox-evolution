#ifndef STATS_H
#define STATS_H

#include "connection_list.h"

typedef struct {
    int total_connections;
} NetworkStats;

NetworkStats compute_stats(ConnectionList list);
void show_stats(NetworkStats stats);

#endif