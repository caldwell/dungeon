/* INIT-- DUNGEON INITIALIZATION SUBROUTINE */

/*COPYRIGHT 1980, INFOCOM COMPUTERS AND COMMUNICATIONS, CAMBRIDGE MA. 02142*/
/* ALL RIGHTS RESERVED, COMMERCIAL USAGE STRICTLY PROHIBITED */
/* WRITTEN BY R. M. SUPNIK */

#include <stdio.h>
#include <stdlib.h>
#ifdef DUMP_DTEXT
extern size_t strlcpy(char *dst, const char *src, size_t siz);
#include <string.h>
#include <stdint.h>
#endif

#ifdef __AMOS__
#include <amos.h>
#endif

#include "funcs.h"
#include "vars.h"

#include "dindx.c"
#include "lengthof.h"

/* This is here to avoid depending on the existence of <stdlib.h> */

extern void srand P((unsigned int));

logical init_()
{
    /* System generated locals */
    integer i__1;
    logical ret_val;

    /* Local variables */
    integer xmax, r2max, dirmax, recno;
    integer i, j, k;
    register integer ch;
    integer mmax, omax, rmax, vmax, amax, cmax, fmax, smax;

    more_init();

/* FIRST CHECK FOR PROTECTION VIOLATION */

    if (protected()) {
	goto L10000;
    }
/* 						!PROTECTION VIOLATION? */
    more_output("There appears before you a threatening figure clad all over");
    more_output("in heavy black armor.  His legs seem like the massive trunk");
    more_output("of the oak tree.  His broad shoulders and helmeted head loom");
    more_output("high over your own puny frame, and you realize that his powerful");
    more_output("arms could easily crush the very life from your body.  There");
    more_output("hangs from his belt a veritable arsenal of deadly weapons:");
    more_output("sword, mace, ball and chain, dagger, lance, and trident.");
    more_output("He speaks with a commanding voice:");
    more_output("");
    more_output("                    \"You shall not pass.\"");
    more_output("");
    more_output("As he grabs you by the neck all grows dim about you.");
    exit_();

/* NOW START INITIALIZATION PROPER */

L10000:
    ret_val = FALSE_;
/* 						!ASSUME INIT FAILS. */
    mmax = 1050;
/* 						!SET UP ARRAY LIMITS. */
    omax = 220;
    rmax = 200;
    vmax = 4;
    amax = 4;
    cmax = 25;
    fmax = 46;
    smax = 22;
    xmax = 900;
    r2max = 20;
    dirmax = 15;

    rmsg_1.mlnt = 0;
/* 						!INIT ARRAY COUNTERS. */
    objcts_1.olnt = 0;
    rooms_1.rlnt = 0;
    vill_1.vlnt = 0;
    advs_1.alnt = 0;
    cevent_1.clnt = 0;
    exits_1.xlnt = 1;
    oroom2_1.r2lnt = 0;

    state_1.ltshft = 10;
/* 						!SET UP STATE VARIABLES. */
    state_1.mxscor = state_1.ltshft;
    state_1.egscor = 0;
    state_1.egmxsc = 0;
    state_1.mxload = 100;
    state_1.rwscor = 0;
    state_1.deaths = 0;
    state_1.moves = 0;
    time_1.pltime = 0;
    state_1.mungrm = 0;
    state_1.hs = 0;
    prsvec_1.prsa = 0;
/* 						!CLEAR PARSE VECTOR. */
    prsvec_1.prsi = 0;
    prsvec_1.prso = 0;
    prsvec_1.prscon = 1;
    orphs_1.oflag = 0;
/* 						!CLEAR ORPHANS. */
    orphs_1.oact = 0;
    orphs_1.oslot = 0;
    orphs_1.oprep = 0;
    orphs_1.oname = 0;
    hack_1.thfflg = FALSE_;
/* 						!THIEF NOT INTRODUCED BUT */
    hack_1.thfact = TRUE_;
/* 						!IS ACTIVE. */
    hack_1.swdact = FALSE_;
/* 						!SWORD IS INACTIVE. */
    hack_1.swdsta = 0;
/* 						!SWORD IS OFF. */

    recno = 1;
/* 						!INIT DB FILE POINTER. */
    star_1.mbase = 0;
/* 						!INIT MELEE BASE. */
/* INIT, PAGE 3 */

/* INIT ALL ARRAYS. */

    i__1 = cmax;
    for (i = 1; i <= i__1; ++i) {
/* 						!CLEAR CLOCK EVENTS */
	cevent_1.cflag[i - 1] = FALSE_;
	cevent_1.ctick[i - 1] = 0;
	cevent_1.cactio[i - 1] = 0;
/* L5: */
    }

    i__1 = fmax;
    for (i = 1; i <= i__1; ++i) {
/* 						!CLEAR FLAGS. */
	flags[i - 1] = FALSE_;
/* L10: */
    }
    findex_1.buoyf = TRUE_;
/* 						!SOME START AS TRUE. */
    findex_1.egyptf = TRUE_;
    findex_1.cagetf = TRUE_;
    findex_1.mr1f = TRUE_;
    findex_1.mr2f = TRUE_;
    findex_1.follwf = TRUE_;
    i__1 = smax;
    for (i = 1; i <= i__1; ++i) {
/* 						!CLEAR SWITCHES. */
	switch_[i - 1] = 0;
/* L12: */
    }
    findex_1.ormtch = 4;
/* 						!NUMBER OF MATCHES. */
    findex_1.lcell = 1;
    findex_1.pnumb = 1;
    findex_1.mdir = 270;
    findex_1.mloc = rindex_1.mrb;
    findex_1.cphere = 10;

    i__1 = r2max;
    for (i = 1; i <= i__1; ++i) {
/* 						!CLEAR ROOM 2 ARRAY. */
	oroom2_1.rroom2[i - 1] = 0;
	oroom2_1.oroom2[i - 1] = 0;
/* L15: */
    }

    i__1 = xmax;
    for (i = 1; i <= i__1; ++i) {
/* 						!CLEAR TRAVEL ARRAY. */
	exits_1.travel[i - 1] = 0;
/* L20: */
    }

    i__1 = vmax;
    for (i = 1; i <= i__1; ++i) {
/* 						!CLEAR VILLAINS ARRAYS. */
	vill_1.vopps[i - 1] = 0;
	vill_1.vprob[i - 1] = 0;
	vill_1.villns[i - 1] = 0;
	vill_1.vbest[i - 1] = 0;
	vill_1.vmelee[i - 1] = 0;
/* L30: */
    }

    i__1 = omax;
    for (i = 1; i <= i__1; ++i) {
/* 						!CLEAR OBJECT ARRAYS. */
	objcts_1.odesc1[i - 1] = 0;
	objcts_1.odesc2[i - 1] = 0;
	objcts_1.odesco[i - 1] = 0;
	objcts_1.oread[i - 1] = 0;
	objcts_1.oactio[i - 1] = 0;
	objcts_1.oflag1[i - 1] = 0;
	objcts_1.oflag2[i - 1] = 0;
	objcts_1.ofval[i - 1] = 0;
	objcts_1.otval[i - 1] = 0;
	objcts_1.osize[i - 1] = 0;
	objcts_1.ocapac[i - 1] = 0;
	objcts_1.ocan[i - 1] = 0;
	objcts_1.oadv[i - 1] = 0;
	objcts_1.oroom[i - 1] = 0;
/* L40: */
    }

    i__1 = rmax;
    for (i = 1; i <= i__1; ++i) {
/* 						!CLEAR ROOM ARRAYS. */
	rooms_1.rdesc1[i - 1] = 0;
	rooms_1.rdesc2[i - 1] = 0;
	rooms_1.ractio[i - 1] = 0;
	rooms_1.rflag[i - 1] = 0;
	rooms_1.rval[i - 1] = 0;
	rooms_1.rexit[i - 1] = 0;
/* L50: */
    }

    i__1 = mmax;
    for (i = 1; i <= i__1; ++i) {
/* 						!CLEAR MESSAGE DIRECTORY. */
	rmsg_1.rtext[i - 1] = 0;
/* L60: */
    }

    i__1 = amax;
    for (i = 1; i <= i__1; ++i) {
/* 						!CLEAR ADVENTURER'S ARRAYS. */
	advs_1.aroom[i - 1] = 0;
	advs_1.ascore[i - 1] = 0;
	advs_1.avehic[i - 1] = 0;
	advs_1.aobj[i - 1] = 0;
	advs_1.aactio[i - 1] = 0;
	advs_1.astren[i - 1] = 0;
	advs_1.aflag[i - 1] = 0;
/* L70: */
    }

    debug_1.dbgflg = 0;
    debug_1.prsflg = 0;
    debug_1.gdtflg = 0;

#ifdef ALLOW_GDT

/* allow setting gdtflg true if user id matches wizard id */
/* this way, the wizard doesn't have to recompile to use gdt */

    if (wizard()) {
	debug_1.gdtflg = 1;
    }

#endif /* ALLOW_GDT */

    screen_1.fromdr = 0;
/* 						!INIT SCOL GOODIES. */
    screen_1.scolrm = 0;
    screen_1.scolac = 0;
/* INIT, PAGE 4 */

/* NOW RESTORE FROM EXISTING INDEX FILE. */


    i = data_vers_maj;
    j = data_vers_min;
    k = data_vers_edit;

/* 						!GET VERSION. */
    if (i != vers_1.vmaj || j != vers_1.vmin) {
	goto L1925;
    }

    state_1.mxscor = data_mxscor;
    star_1.strbit = data_strbit;
    state_1.egmxsc = data_egmxsc;

    rooms_1.rlnt = lengthof(data_rooms);
    for (unsigned i=0; i<lengthof(data_rooms); i++) {
        rooms_1.rdesc1[i] = data_rooms[i].rdesc1;
        rooms_1.rdesc2[i] = data_rooms[i].rdesc2;
        rooms_1.rexit [i] = data_rooms[i].rexit ;
        rooms_1.ractio[i] = data_rooms[i].ractio;
        rooms_1.rval  [i] = data_rooms[i].rval  ;
        rooms_1.rflag [i] = data_rooms[i].rflag ;
    }

    exits_1.xlnt = lengthof(data_exits);
    for (unsigned i=0; i<lengthof(data_exits); i++)
        exits_1.travel[i] = data_exits[i];

    objcts_1.olnt = lengthof(data_objcts);
    for (unsigned i=0; i<lengthof(data_objcts); i++) {
        objcts_1.odesc1[i] = data_objcts[i].odesc1;
        objcts_1.odesc2[i] = data_objcts[i].odesc2;
        objcts_1.odesco[i] = data_objcts[i].odesco;
        objcts_1.oactio[i] = data_objcts[i].oactio;
        objcts_1.oflag1[i] = data_objcts[i].oflag1;
        objcts_1.oflag2[i] = data_objcts[i].oflag2;
        objcts_1.ofval [i] = data_objcts[i].ofval ;
        objcts_1.otval [i] = data_objcts[i].otval ;
        objcts_1.osize [i] = data_objcts[i].osize ;
        objcts_1.ocapac[i] = data_objcts[i].ocapac;
        objcts_1.oroom [i] = data_objcts[i].oroom ;
        objcts_1.oadv  [i] = data_objcts[i].oadv  ;
        objcts_1.ocan  [i] = data_objcts[i].ocan  ;
        objcts_1.oread [i] = data_objcts[i].oread ;
    }

    oroom2_1.r2lnt = lengthof(data_oroom2);
    for (unsigned i=0; i<lengthof(data_oroom2); i++) {
        oroom2_1.oroom2[i] = data_oroom2[i].oroom2;
        oroom2_1.rroom2[i] = data_oroom2[i].rroom2;
    }

    cevent_1.clnt = lengthof(data_cevent);
    for (unsigned i=0; i<lengthof(data_cevent); i++) {
        cevent_1.ctick [i] = data_cevent[i].ctick ;
        cevent_1.cactio[i] = data_cevent[i].cactio;
        cevent_1.cflag [i] = data_cevent[i].cflag ;
    }

    vill_1.vlnt = lengthof(data_vill);
    for (unsigned i=0; i<lengthof(data_vill); i++) {
        vill_1.villns[i] = data_vill[i].villns;
        vill_1.vprob [i] = data_vill[i].vprob ;
        vill_1.vopps [i] = data_vill[i].vopps ;
        vill_1.vbest [i] = data_vill[i].vbest ;
        vill_1.vmelee[i] = data_vill[i].vmelee;
    }

    advs_1.alnt = lengthof(data_advs);
    for (unsigned i=0; i<lengthof(data_advs); i++) {
        advs_1.aroom [i] = data_advs[i].aroom ;
        advs_1.ascore[i] = data_advs[i].ascore;
        advs_1.avehic[i] = data_advs[i].avehic;
        advs_1.aobj  [i] = data_advs[i].aobj  ;
        advs_1.aactio[i] = data_advs[i].aactio;
        advs_1.astren[i] = data_advs[i].astren;
        advs_1.aflag [i] = data_advs[i].aflag ;
    }

    star_1.mbase = data_mbase;
    rmsg_1.mlnt = lengthof(data_rmsg);
    for (unsigned i=0; i<lengthof(data_rmsg); i++)
        rmsg_1.rtext[i] = data_rmsg[i];

    rmsg_1.mrloc = data_mrloc;

#ifdef DUMP_DTEXT
    dtextc_fseek(indxfile, rmsg_1.mrloc, SEEK_SET);
    char *messages[20000] = {};

    const char *zkey = "IanLanceTaylorJr";
    long x = 0;
    int c;
    int end=1;
    char buffer[16000];
    int id;
    char *p;
    while ((c = dtextc_getc(indxfile)) != -1) {
        if (end && !(x & 0x7)) {
            id=-x/8-1;
            p=buffer;
            end = 0;
        }

        c ^= zkey[x & 0xf] ^ (x & 0xff);
        x = x + 1;
        if (end)
            continue;
        *p++ = c;
        if (c == '\0') {
            messages[-id] = strdup(buffer);
            end = 1;
        }
    }





    printf("const int data_vers_maj = %d;\n", i);
    printf("const int data_vers_min = %d;\n", j);
    printf("const int data_vers_edit = '%c';\n", k);

    printf("\n");
    printf("const int data_mxscor = %d;\n", state_1.mxscor);
    printf("const int data_strbit = %d;\n", star_1.strbit);
    printf("const int data_egmxsc = %d;\n", state_1.egmxsc);

    printf("\n");
    printf("const int data_rooms_count = %d;\n", rooms_1.rlnt);
    printf("const struct {\n"
           "    int rdesc1, rdesc2, rexit, ractio, rval, rflag;\n"
           "} data_rooms[] = {\n");
    for (int i=0; i<rooms_1.rlnt; i++)
        printf(" { .rdesc1 = %6d, .rdesc2 = %6d, .rexit = %6d, .ractio = %6d, .rval = %6d, .rflag = %6d }, // %3d %s\n",
               rooms_1.rdesc1[i], rooms_1.rdesc2[i], rooms_1.rexit[i], rooms_1.ractio[i], rooms_1.rval[i], rooms_1.rflag[i], i+1, messages[-rooms_1.rdesc2[i]] ? messages[-rooms_1.rdesc2[i]] : "??");
    printf("};\n");

    printf("\n");
    printf("const int data_exits_count = %d;\n", exits_1.xlnt);
    printf("enum { xtype1 = 0, xtype2 = 1, xtype3 = 2, xtype4 = 3 };\n");
    char *dir_s[] = { "unkn_0", "dir_n","dir_ne","dir_e","dir_se","dir_s","dir_sw","dir_w","dir_nw","dir_u","dir_d","launch","land","enter","d_exit","unkn_f" };
    printf("enum {\n");
    for (unsigned i=0; i<lengthof(dir_s); i++)
        printf("    %-6s= %d,\n", dir_s[i], i);
    printf("};\n");
    printf("enum { last = 0x8000 };\n");
    printf("const int data_exits[] = {\n");
    int room=-1;
    for (int i=0; i<exits_1.xlnt; i++) {
        // O(N^2). Sue me.
        for (int r=0; r<rooms_1.rlnt; r++)
            if (rooms_1.rexit[r] == i+1) {
                room = r;
                //printf("Found room %d exit %d == %d\n", r, rooms_1.rexit[r], i+1);
                break;
            }
        int dir = (exits_1.travel[i] & xpars_1.xdmask) >> 10;
        int type = (exits_1.travel[i]>>8 & xpars_1.xfmask) + 1;
        int exit_to = exits_1.travel[i] & xpars_1.xrmask;
        int last = exits_1.travel[i] & xpars_1.xlflag;
        printf("  (%-6s<<10) | (xtype%d<<8) | %3d %6s, // %3d:%04hx %s %s -> %s\n",
               dir_s[dir], type, exit_to, last ? "| last" : "",
               i+1, (uint16_t)exits_1.travel[i],
               messages[-rooms_1.rdesc2[room]] ? messages[-rooms_1.rdesc2[room]] : "??",
               (exits_1.travel[i] & xpars_1.xdmask) == xsrch_1.xdown  ? "D"  :
               (exits_1.travel[i] & xpars_1.xdmask) == xsrch_1.xup    ? "U"  :
               (exits_1.travel[i] & xpars_1.xdmask) == xsrch_1.xnorth ? "N"  :
               (exits_1.travel[i] & xpars_1.xdmask) == xsrch_1.xsouth ? "S" :
               (exits_1.travel[i] & xpars_1.xdmask) == xsrch_1.xenter ? "enter" :
               (exits_1.travel[i] & xpars_1.xdmask) == xsrch_1.xexit  ? "exit" :
               (exits_1.travel[i] & xpars_1.xdmask) == xsrch_1.xeast  ? "E" :
               (exits_1.travel[i] & xpars_1.xdmask) == xsrch_1.xwest  ? "W" :
               (exits_1.travel[i] & xpars_1.xdmask) == 0x8 << 10      ? "NW" : // not sure why these aren't defined in the code
               (exits_1.travel[i] & xpars_1.xdmask) == 0x2 << 10      ? "NE" :
               (exits_1.travel[i] & xpars_1.xdmask) == 0x6 << 10      ? "SW" :
               (exits_1.travel[i] & xpars_1.xdmask) == 0x4 << 10      ? "SE" :
               (exits_1.travel[i] & xpars_1.xdmask) == 0xc << 10      ? "land" :
               (exits_1.travel[i] & xpars_1.xdmask) == 0xb << 10      ? "launch" :
                                                                        "???",
               messages[-rooms_1.rdesc2[exit_to-1]] ? messages[-rooms_1.rdesc2[exit_to-1]] : exit_to == 0 ? "[deny]" : "??");
        if (type == 2 || type == 3 || type == 4) {
            printf("                                           /* %3d:%04hx*/  %6d,", i+1+1, (uint16_t)exits_1.travel[i+1], exits_1.travel[i+1]);
            if (exits_1.travel[i+1]) printf(" // %s", messages[-exits_1.travel[i+1]]);
            printf("\n");
        }
        if (type == 3 || type == 4)
            printf("                                           /* %3d:%04hx*/  %d << 8 | %d, // [%s]\n",
                   i+2+1, (uint16_t) exits_1.travel[i+2], exits_1.travel[i+2] >> 8 & 0xff, exits_1.travel[i+2] & 0xff,
                   type == 3 ? "action" : type == 4 ? "object/action" : "???");
        i += xpars_1.xelnt[type-1]-1;
    }
    printf("};\n");

    printf("\n");
    printf("const int data_objcts_count = %d;\n", objcts_1.olnt);
    printf("const struct {\n"
           "    int odesc1, odesc2, odesco, oactio, oflag1, oflag2, ofval, otval, osize, ocapac, oroom, oadv, ocan, oread;\n"
           "} data_objcts[] = {\n");
    printf("//  %6s, %6s, %6s, %6s, %6s, %6s, %6s, %6s, %6s, %6s, %6s, %4s, %4s, %6s\n",
           "odesc1", "odesc2", "odesco", "oactio", "oflag1", "oflag2", "ofval", "otval", "osize", "ocapac", "oroom", "oadv", "ocan", "oread");
    for (int i=0; i<objcts_1.olnt; i++)
        printf("  { %6d, %6d, %6d, %6d, %6d, %6d, %6d, %6d, %6d, %6d, %6d, %4d, %4d, %6d }, // %3d %s\n",
               objcts_1.odesc1[i], objcts_1.odesc2[i], objcts_1.odesco[i], objcts_1.oactio[i], objcts_1.oflag1[i],
               objcts_1.oflag2[i], objcts_1.ofval[i], objcts_1.otval[i], objcts_1.osize[i], objcts_1.ocapac[i],
               objcts_1.oroom[i], objcts_1.oadv[i], objcts_1.ocan[i], objcts_1.oread[i], i+1, messages[-objcts_1.odesc2[i]] ? messages[-objcts_1.odesc2[i]] : "??");
    printf("};\n");

    printf("\n");
    printf("const int data_oroom2_count = %d;\n", oroom2_1.r2lnt);
    printf("const struct {\n"
           "    int oroom2, rroom2;\n"
           "} data_oroom2[] = {\n");
    for (int i=0; i<oroom2_1.r2lnt; i++)
        printf("  { .oroom2 = %3d, .rroom2 = %3d }, // %3d\n",
               oroom2_1.oroom2[i], oroom2_1.rroom2[i], i+1);
    printf("};\n");


    printf("\n");
    printf("const int data_cevent_count = %d;\n", cevent_1.clnt);
    printf("const struct {\n"
           "    int ctick, cactio, cflag;\n"
           "} data_cevent[] = {\n");
    for (int i=0; i<cevent_1.clnt; i++)
        printf("  { .ctick = %3d, .cactio = %3d, .cflag = %3d }, // %3d\n",
               cevent_1.ctick[i], cevent_1.cactio[i], cevent_1.cflag[i],i+1);
    printf("};\n");

    printf("\n");
    printf("const int data_vill_count = %d;\n", vill_1.vlnt);
    printf("const struct {\n"
           "    int villns, vprob, vopps, vbest, vmelee;\n"
           "} data_vill[] = {\n");
    for (int i=0; i<vill_1.vlnt; i++)
        printf("  { .villns = %6d, .vprob = %6d, .vopps = %6d, .vbest = %6d, .vmelee = %6d }, // %3d %s\n",
               vill_1.villns[i], vill_1.vprob[i], vill_1.vopps[i], vill_1.vbest[i], vill_1.vmelee[i], i+1, messages[-objcts_1.odesc2[vill_1.villns[i]-1]]);
    printf("};\n");

    printf("\n");
    printf("const int data_advs_count = %d;\n", advs_1.alnt);
    printf("const struct {\n"
           "    int aroom, ascore, avehic, aobj, aactio, astren, aflag;\n"
           "} data_advs[] = {\n");
    for (int i=0; i<advs_1.alnt; i++)
        printf(" { .aroom = %3d, .ascore = %d, .avehic = %d, .aobj = %3d, .aactio = %d, .astren = %d, .aflag = %d }, // %3d %s in %s\n",
               advs_1.aroom[i], advs_1.ascore[i], advs_1.avehic[i], advs_1.aobj[i], advs_1.aactio[i],
               advs_1.astren[i], advs_1.aflag[i], i+1,
               messages[-objcts_1.odesc2[advs_1.aobj[i]-1]],
               messages[-rooms_1.rdesc2[advs_1.aroom[i]-1]]);
    printf("};\n");


    printf("\n");
    printf("const int data_mbase = %d;\n", star_1.mbase);

    printf("\n");
    printf("const int data_rmsg_count = %d;\n", rmsg_1.mlnt);
    printf("const int data_rmsg[] = {\n");
    for (int i=0; i<rmsg_1.mlnt; i++) {
        char buffer[30], *n;
        strlcpy(buffer, messages[-rmsg_1.rtext[i]], sizeof(buffer));
        while ((n = strchr(buffer, '\n')))
            *n = ' ';
        printf("  %6d, // %4d %.30s\n",
               rmsg_1.rtext[i], i+1, buffer);
    }
    printf("};\n");

    printf("\n");
    printf("const int data_mrloc = %d;\n", rmsg_1.mrloc);
    printf("\n");

    printf("\n");
    printf("\n");
    printf("---- DTEXT ----\n");
    for (int i=0; i<sizeof(messages)/sizeof(*messages); i++)
        if (messages[i])
            printf("\n## %d\n"
                   "%s\n", -i, messages[i]);

    exit(0);
#endif

/* 						!INIT DONE. */

/* INIT, PAGE 5 */

/* THE INTERNAL DATA BASE IS NOW ESTABLISHED. */
/* SET UP TO PLAY THE GAME. */

    itime_(&time_1.shour, &time_1.smin, &time_1.ssec);
    srand(time_1.shour ^ (time_1.smin ^ time_1.ssec));

    play_1.winner = aindex_1.player;
    last_1.lastit = advs_1.aobj[aindex_1.player - 1];
    play_1.here = advs_1.aroom[play_1.winner - 1];
    hack_1.thfpos = objcts_1.oroom[oindex_1.thief - 1];
    state_1.bloc = objcts_1.oroom[oindex_1.ballo - 1];
    ret_val = TRUE_;

    return ret_val;
/* INIT, PAGE 6 */

/* ERRORS-- INIT FAILS. */

L1925:
    more_output(NULL);
    printf("%s is version %1d.%1d%c.\n", "Dungeon Data", i, j, k);
    more_output(NULL);
    printf("I require version %1d.%1d%c.\n", vers_1.vmaj, vers_1.vmin,
	   vers_1.vedit);
    goto L1975;
L1950:
    more_output(NULL);
    printf("I can't open %s.\n", "Dungeon Data");
L1975:
    more_output("Suddenly a sinister, wraithlike figure appears before you,");
    more_output("seeming to float in the air.  In a low, sorrowful voice he says,");
    more_output("\"Alas, the very nature of the world has changed, and the dungeon");
    more_output("cannot be found.  All must now pass away.\"  Raising his oaken staff");
    more_output("in farewell, he fades into the spreading darkness.  In his place");
    more_output("appears a tastefully lettered sign reading:");
    more_output("");
    more_output("                       INITIALIZATION FAILURE");
    more_output("");
    more_output("The darkness becomes all encompassing, and your vision fails.");
    return ret_val;

} /* init_ */
