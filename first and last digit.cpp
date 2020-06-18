#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, sum, N, last,first;
    cin>>T;
    while(T--)
    {
        cin>>N;
        last = N%10;

        while(N>=10)
        {
            N = N/10;
        }
        first = N;

        sum = first + last;
        cout<<sum<<endl;
    }

return 0;
}



