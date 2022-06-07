#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,cnt=0;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]>k)
	        {
	            cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	    
	}
	return 0;
}
