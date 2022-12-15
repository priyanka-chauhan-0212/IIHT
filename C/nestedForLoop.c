#include<stdio.h>

int main()
{

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d %d\n",i,j);
        }
    }
/*
i  j     print
0  0      0 0
0  1      0 1
0  2      0 2
1  0      1 0

*
* *
* * *
* * * *

*/
}
