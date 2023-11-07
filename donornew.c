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


    
    int modifyDonationSheet(char *filename, char id[], struct DonationSheet newSheet)
{
    int found = 0;
    Sheet s;
    FILE *f = fopen(filename, "r");
    FILE *f2 = fopen("new.txt", "w");
    if (f != NULL && f2 != NULL)
    {
        while (fscanf(f, "%s %s %s %d %d %d %d %s\n",
                s.id, s.fn, s.pn, s.dob ,s.doa, s.gender, s.others,s.btc) != EOF)
        {
            if (strcmp(s.id, id)==0)
            {
                fprintf(f2, "%s %s %s %d %d %d %d %s\n",
                s.id, s.fn, s.pn, s.dob ,s.doa, s.gender, s.others,s.btc);
                found = 1;
            }
            else
            {
                fprintf(f2,"%s %s %s %d %d %d %d %s\n",
                s.id, s.fn, s.pn, s.dob ,s.doa, s.gender, s.others,s.btc);
            }
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("new.txt", filename);
    return found;
}

    
int removeDonationSheet(char *filename, int sheet_id)
{
    int found = 0;
    sheet s;
    FILE *f = fopen(filename, "r");
    FILE *f2 = fopen("new.txt", "w");
    if (f != NULL && f2 != NULL)
    {
        while (fscanf(f, "%s %s %s %d %d %d %d %s\n",
                s.id, s.fn, s.pn, s.dob ,s.doa, s.gender, s.others,s.btc) != EOF)
        {
            if strcmp((s.id,id)==0)
            {
                fprintf(f2, "%s %s %s %d %d %d %d %s\n",
                s.id, s.fn, s.pn, s.dob ,s.doa, s.gender, s.others,s.btc);
            }
            else
            {
                found = 1;
            }
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("new.txt", filename);
    return found;
}

    
struct DonationSheet searchDonationSheet(char *filename, char id)
{
    struct DonationSheet sheet;
    int found = 0;
    FILE *f = fopen(filename, "r");
    if (f != NULL)
    {
        while (fscanf("%s %s %s %d %d %d %d %s\n",
                s.id, s.fn, s.pn, s.dob ,s.doa, s.gender, s.others,s.btc) != EOF)
        {
            if strcmp(s.id,id)==0)
            {
                found = 1;
                break;
            }
        }
    }
    fclose(f);
    if (found == 0)
    {
        s.id = -1; // Indicates not found
    }
    return s;
}
}
