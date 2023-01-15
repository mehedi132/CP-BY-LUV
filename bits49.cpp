#include<bits/stdc++.h>
using namespace std;
void printbinary(int n)
{
    for (int i = 10; i >= 0;i--)
    {
        cout << ((n >> i) & 1) ;
    }
}


int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
// int a = 50;
// if(a&1)
// {
//         cout << "odd";
// }
// else
// {
//     cout << "even";
// }
// cout << endl;
// printbinary(8);

// for (char c = 'A'; c <= 'E';c++)
// {
//     cout << c << endl;
//     printbinary(int(c)); //print capital
//     cout << endl;
// }

// for (char c = 'a'; c <= 'e';c++)
// {
//     cout << c << endl;
//     printbinary(int(c)); //print small
   
//     cout << endl;
// }

// char a ='R';
// char d = 'R' | (1 << 5); //capittal to small
// cout << d << endl;
// d = 'R' | ' '; //(1<<5)=100000=' ';
// cout << d << endl;




// char b = 'r';
// d = 'r' & (~(1 << 5)); // small to capital;
// cout << d << endl;
// d = 'r' & '_'; //(~(1 << 5))=1011111='_'
// cout << d << endl;

int n = 43;
int i  = 2;
printbinary(n);
cout << endl;
int b = n & (~((1 << i) - 1)); //set lsb clear
printbinary(b);
cout << endl;
 b = n & ((1 << i) - 1); //set msb clear
printbinary(b);
cout << endl;
if(n&(n-1))
{
        cout << "Not power of 2";
}
else{
     cout << "power of 2";
}

}