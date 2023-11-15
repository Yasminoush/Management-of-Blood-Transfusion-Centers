#ifndef NURSE_H_INCLUDED
#define NURSE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int d;
    int m;
    int y;
} date;

typedef struct {
    char id[15];
    char fn[15];
    char pn[15];
    date dob;
    date doa;
    int gender;
    int others[4];
    char btc[15];
} sheet;

int add(char *, sheet);


#endif // NURSE_H_INCLUDED

