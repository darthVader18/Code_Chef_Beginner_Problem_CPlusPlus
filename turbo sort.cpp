#include <bits/stdc++.h>
/*
Search Results
Featured snippet from the web
<bits/stdc++. h> in C++ It is basically a header file that includes every standard library.
In programming contests, using this file is a good idea, when you want to reduce the time wasted in doing chores;
especially when your rank is time sensitive.
*/
using namespace std;

int main() {
	int t, i;
	cin>>t;
	    int n[t];
	    for(i = 0; i<t; i++)
	    {
	        cin>>n[i];
	    }
	    sort(n, n+t);
	    /*
	    The prototype for sort is :
	    sort(startaddress, endaddress)
        startaddress: the address of the first element of the array
        endaddress: the address of the next contiguous location of the last element of the array.
        So actually sort() sorts in the range of [startaddress,endaddress)
	    */
	    for(i = 0; i<t; i++)
	    {
	        cout<<n[i]<<endl;
	    }
	return 0;
}
