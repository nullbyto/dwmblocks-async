#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
	{"~/.scripts/dwm-internet",                                         10,             1},
        {"~/.scripts/dwm-memory",                                           10,             2},
        {"~/.scripts/dwm-redshift",                                         0,              3},
        {"~/.scripts/dwm-volume",                                           0,              4},
        {"~/.scripts/dwm-clock",                                            10,             5},
};


const unsigned short blockCount = LEN(blocks);
