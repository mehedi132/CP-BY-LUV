#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int a = 4, b = 60;
a = a ^ b; // swaping;
b = b ^ a; // b=b^(a^b)=b^a^b=a;
a = a ^ b; // a=(a^b)^a=a^b^a=b;
cout << a << " " << b << endl;
// find a odd count number from an array in 0(1); Ex:2 4 5 4 2 9 5;ans is 9
int n,x;
cin >> n;
int ans = 0;
for (int i = 0; i < n;i++)
{
    cin >> x;
    ans ^= x;
}
cout << ans;
}