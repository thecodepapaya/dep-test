#include"colour.h"

void colour( void )
{
    #define RESET   "\x1b[0m"

    #define TXT_RED     "\x1b[31m"
    #define TXT_GREEN   "\x1b[32m"
    #define TXT_YELLOW  "\x1b[33m"
    #define TXT_BLUE    "\x1b[34m"
    #define TXT_MAGENTA "\x1b[35m"
    #define TXT_CYAN    "\x1b[36m"
    #define TXT_WHITE   "\x1b[37m"

    #define TXT_B_RED     "\x1b[1;31m"
    #define TXT_B_GREEN   "\x1b[1;32m"
    #define TXT_B_YELLOW  "\x1b[1;33m"
    #define TXT_B_BLUE    "\x1b[1;34m"
    #define TXT_B_MAGENTA "\x1b[1;35m"
    #define TXT_B_CYAN    "\x1b[1;36m"
    #define TXT_B_WHITE   "\x1b[1;37m"

    #define BG_RED     "\x1b[41m"
    #define BG_GREEN   "\x1b[42m"
    #define BG_YELLOW  "\x1b[43m"
    #define BG_BLUE    "\x1b[44m"
    #define BG_MAGENTA "\x1b[45m"
    #define BG_CYAN    "\x1b[46m"
    #define BG_WHITE   "\x1b[47m"

    #define BG_B_RED     "\x1b[1;41m"
    #define BG_B_GREEN   "\x1b[1;42m"
    #define BG_B_YELLOW  "\x1b[1;43m"
    #define BG_B_BLUE    "\x1b[1;44m"
    #define BG_B_MAGENTA "\x1b[1;45m"
    #define BG_B_CYAN    "\x1b[1;46m"
    #define BG_B_WHITE   "\x1b[1;47m"
};