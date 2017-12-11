// Copyright © 2017 David Caldwell <david@porkrind.org>
#ifndef __DTEXTC_H__
#define __DTEXTC_H__

/* This hack implements the minimal stdio for reading directly from the dtextc array. */

extern unsigned char dtextc[];
extern size_t dtextc_length;

typedef size_t DTEXTC_FILE;

static DTEXTC_FILE *dtextc_fopen(char *name, char *perm)
{
    return calloc(sizeof(DTEXTC_FILE), 1);
}

static int dtextc_fclose(DTEXTC_FILE *f)
{
    free(f);
    return 0;
}

static int dtextc_getc(DTEXTC_FILE *stream)
{
    if (*stream >= dtextc_length)
        return -1;
    return dtextc[(*stream)++];
}

static int dtextc_ftell(DTEXTC_FILE *stream)
{
    return *stream;
}

static int dtextc_fseek(DTEXTC_FILE *stream, long offset, int whence)
{
    if (whence != SEEK_SET)
        return -1;
    if (offset >= dtextc_length)
        offset = dtextc_length;
    *stream = offset;
    return 0;
}


#endif /* __DTEXTC_H__ */

