/* DUNGEON-- MAIN PROGRAM */

/*COPYRIGHT 1980, INFOCOM COMPUTERS AND COMMUNICATIONS, CAMBRIDGE MA. 02142*/
/* ALL RIGHTS RESERVED, COMMERCIAL USAGE STRICTLY PROHIBITED */
/* WRITTEN BY R. M. SUPNIK */

#define EXTERN
#define INIT

#include "funcs.h"
#include "vars.h"

int main(argc, argv)
int argc;
char **argv;
{
    char line[sizeof(input_1.inbuf)]="";
    while (1) {
        char *prompt = game_move(line);
        rdline_(line, prompt);
    }
    return 0;
} /* MAIN__ */
