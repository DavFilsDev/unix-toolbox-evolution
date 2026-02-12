#include <stdio.h>
#include "stats.h"

NetworkStats compute_stats(ConnectionList list) {
    NetworkStats stats;
    stats.total_connections = list.count;
    return stats;
}

void show_stats(NetworkStats stats) {
    printf("\n==== NETWORK STATS ====\n");
    printf("Total connections: %d\n", stats.total_connections);
}
