/* DUNGEON-- MAIN PROGRAM */

/*COPYRIGHT 1980, INFOCOM COMPUTERS AND COMMUNICATIONS, CAMBRIDGE MA. 02142*/
/* ALL RIGHTS RESERVED, COMMERCIAL USAGE STRICTLY PROHIBITED */
/* WRITTEN BY R. M. SUPNIK */

#define EXTERN
#define INIT

#include "funcs.h"
#include "vars.h"

void main(argc, argv)
int argc;
char **argv;
{
    char line[sizeof(input_1.inbuf)]="";
    while (1) {
        char *prompt = game_move(line);
        rdline_(line, prompt);
    }
} /* MAIN__ */
