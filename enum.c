
#include<stdio.h>
#include<stdlib.h>

enum meses{JAN = 1, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ};

int main()
{
    enum meses m;
     
    char *mes[] = {"","JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL","AGO", "SET", "OUT", "NOV", "DEZ"};
    
    
    for(m = JAN ;  m <= DEZ; m++){
        printf(" %d %s\n",m,mes[m]);
    }
   
}

