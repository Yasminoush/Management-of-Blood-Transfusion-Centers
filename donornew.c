#include <stdio.h>
#include <string.h>
#include "donation.h"

int addDonationsheet(char *filename, Sheet s)
{
    FILE *f = fopen(filename, "a");
    if (f != NULL)
    {
        fprintf(f, "%s %s %s %d %d %d %d %s\n",
                s.id, s.fn, s.pn, s.dob ,s.doa, s.gender, s.others,s.btc);
        fclose(f);
        return 1;
    }
    else
        return 0;
}
