//  Author Amoriello Hutti - 2015

#include <token/log/logger.h>


//#define TLOG(...) g_log.println(__VA_ARGS__)

//#define TLOG_(...) g_log.print(__VA_ARGS__)

#define TLOG2(...)  g_log.println(__VA_ARGS__)

#define TLOG(...)
#define TLOG_(...)

#define TLOG_INIT() g_log.Intialize()