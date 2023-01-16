#include<bits/stdc++.h>
using namespace std;



int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n, row, col,i;
cin >> n;
for (row = 1; row < 2 * n;row++)
{ 
    for (col = 1; col < 2 * n;col++)
    {
         i = 0;
         while  (i<n)
    {
        if(row==1+i||col==1+i|| row==(2*n-1)-i|| col==(2*n-1-i))
    {
        cout<<n-i;
        break;
        
    }
    i++;
    }
   

    // if(row==col)
    // {
    //     i++;
    // }
    //     if( row==1||col==1|| row==(2*n-1)|| col==(2*n-1))
    //     {
    //         cout << n;
    //     }
    //     else if(row==1+i||col==1+i|| row==(2*n-1)-i|| col==(2*n-1-i))
    // {
    //     cout<<n-i;
        
    // }

        
        // else if(row==1+1||col==1+1|| row==(2*n-1)-1|| col==(2*n-1-1))
        //         {
        //             cout << n-1;
        //         }
        // else if(row==1+2||col==1+2|| row==(2*n-1)-2|| col==(2*n-1-2))
        //         {
        //             cout << n-2;
        //         }
        // else if(row==1+3||col==1+3|| row==(2*n-1)-3|| col==(2*n-1-3))
        //         {
        //             cout << n-3;
        //         }    

        // else{
        //     cout << '1';
        // }
        cout << " ";
    }
   
    cout << endl;


}
}