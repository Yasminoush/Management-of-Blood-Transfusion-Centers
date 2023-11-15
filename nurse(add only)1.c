#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"nurse1.h"


int add(char * filename, sheet s )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f, "%s %s %s %d %d %d %d %d %d %d %d %d %d %d %s\n",s.id, s.fn, s.pn, s.dob.d,s.dob.m,s.dob.y,s.doa.d,s.doa.m,s.doa.y, s.gender, s.others[0],s.others[1],s.others[2],s.others[3],s.btc
);
        fclose(f);
        return 1;
    }
    else return 0;
}
