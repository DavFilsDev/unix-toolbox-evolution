#include <stdio.h>
#include "report.h"

void generate_report(const char *message) {
    FILE *report = fopen("security_report.log", "a");
    fprintf(report, "%s\n", message);
    fclose(report);
}
