#include <stdio.h>
int main ( )
{   char diamond[][7]= {{' ','*','*',' ','*','*'},{'*',' ',' ','*',' ',' ','*'},{' ','*',' ',' ',' ','*'},{' ',' ','*',' ','*'},{' ',' ',' ','*'}
};
    int i,j;
    printf("1\n");
    for(i=0; i<7; i++)
    {   for(j=0; j<7; j++)
            printf("%c",diamond[i][j]);
        printf("\n");
    }
    printf("1\n");
    return 0;
}