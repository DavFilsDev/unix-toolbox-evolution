#include <stdio.h>
#include <sys/utsname.h>
#include "cmd_sysinfo.h"

void custom_sysinfo() {
    struct utsname u;
    uname(&u);

    printf("System: %s\n", u.sysname);
    printf("Node: %s\n", u.nodename);
    printf("Release: %s\n", u.release);
    printf("Machine: %s\n", u.machine);
}
