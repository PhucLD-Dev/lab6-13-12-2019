#include<stdio.h>
int main()
{ int n;
scanf("%d",&n);
int lol[n];
    int i;
    float tb;
    for(i=0; i<n; i++)
    {
	 scanf("%d",&lol[i]);
    }
    /* Displays highest of the entered values */
    tb = 0;
    for(i=0; i<n; i++)
    {
        tb=tb+(float)lol[i]/n;
    }
    printf("\nHighest value entered was %f", tb);
}

