#include <iostream>
using namespace std;


int main() {
  int t;

  cin>>t;
  for(int i=0;i<t;i++)
  {
      int n,ans=0;
      cin>>n;

      while(n!=0)
      {
          if(n%10 == 4)
          {
              ans=ans+1;
          }
          n = n/10;
      }
      cout<<ans<<endl;
  }

	return 0;
}
