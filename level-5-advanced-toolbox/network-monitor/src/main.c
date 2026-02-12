#include "net_utils.h"
#include "connection_list.h"
#include "stats.h"
#include "alert.h"

int main() {
    print_banner();
    ConnectionList list = get_connections();
    show_connections(list);
    NetworkStats stats = compute_stats(list);
    show_stats(stats);
    check_alerts(list, stats);
    free_connections(list);
    return 0;
}
