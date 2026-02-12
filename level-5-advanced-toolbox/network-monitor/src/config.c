#include "config.h"

Config load_config() {
    Config c;
    c.max_connections = 100;
    return c;
}
