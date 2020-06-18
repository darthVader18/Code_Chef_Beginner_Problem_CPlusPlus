/*

*/
#include <iostream>
using namespace std;

int main()
{
    int T, A, B, i, x;

    cin>>T;
    for(i = 1; i <= T; i++)
    {
        cin>>A>>B;
          x = A%B;
        cout<<x<<endl;
    }
return 0;
}
