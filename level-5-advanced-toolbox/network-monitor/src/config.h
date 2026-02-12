#ifndef CONFIG_H
#define CONFIG_H

typedef struct {
    int max_connections;
} Config;

Config load_config();

#endif