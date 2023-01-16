#include <stdio.h>
int main() {
   
   int n, row, col,i;
   scanf("%d", &n);
   for (row = 1; row < 2 * n;row++)
{ 
    for (col = 1; col < 2 * n;col++)
    {
         i = 0;
         while  (i<n)
    {
        if(row==1+i||col==1+i|| row==(2*n-1)-i|| col==(2*n-1-i))
    {
        printf("%d",n - i);
        break;
        
    }
    i++;
    }

        printf(" ");
    }

    printf("\n");
}
return 0;
}