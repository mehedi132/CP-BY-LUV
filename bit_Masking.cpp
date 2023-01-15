#include<bits/stdc++.h>
using namespace std;
void printbinary(int n)
{
    for (int i = 31; i >= 0;i--)
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
int n,i,j,x;
cin >> n;
vector<int> working_days(n, 0);

int num_of_days;

for (i = 0; i < n; i++)
   {
        cin >> num_of_days;
        int m = 0;
        for (j = 0; j < num_of_days;j++)
        {
            cin >> x;

            working_days[i] = (working_days[i] | (1 << x));
            //m = (m | (1 << x));
        }
       // working_days[i] = m;
        cout << working_days[i] <<" " <<i<<endl;
        printbinary(working_days[i]);
        cout  << endl;
    }
    // for (i = 0; i < n; i++)
    // {
    //     cout << working_days[i] <<" " <<i<<endl;
    //     printbinary(working_days[i]);
    //     cout  << endl;
    // }
    int max_commonDay = 0, intersection,common_day,p1=-1,p2=-2;
    for (i = 0; i < n ;i++)
    {
        for (j = i+1; j < n;j++)
        {
            intersection = working_days[i] & working_days[j];
            common_day= __builtin_popcount(intersection);
            if(common_day>max_commonDay)
            {
                p1 = i;
                p2 = j;
                max_commonDay = common_day;
            }
            //max_commonDay = max(max_commonDay, common_day);
        }
    }
    cout << "max:" << max_commonDay<<" between "<<p1+1<<" and "<<p2+1;
}