#include<bits/stdc++.h>
using namespace std;
void printBinary(int n)
{
    for (int i = 7; i >=0; i--)
{
    cout << ((n >> i) & 1);
}

}

int countbit(int n)
{
    int c = 0;
    for (int i = 7; i >=0; i--)
{
    if(((n >> i) & 1)!=0)
    {
        c++;
    }
   
}
return c;

}

int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
// cout << ((1 << 31)-1)<<endl;
// cout << INT_MAX << endl;
// unsigned int a = ((1 << 32) - 1);
// cout << a;

int a = 7;
printBinary(a);
cout << endl;
int i = 2;
if((a & (1<<i))!=0)
{
    cout << "Set Bit" << endl;
}
else{
    cout << "Not Set Bit" << endl;
}


//int b = (a | (1 << i)); // set bit 1; unset bit 0
printBinary((a | (1 << i))); // set bit 1; unset bit 0
cout<< endl;
printBinary((a & ~(1 << i))); // unseet bit 1 to 0
cout<< endl;
printBinary((a ^ (1 << i))); // toggoling bit 1 to 0or 0 to 1;
cout<< endl;
//int c = countbit(a);
cout <<countbit(a) << endl;
}