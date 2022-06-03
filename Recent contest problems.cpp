#include <iostream>
using namespace std;
int main() {
	int t;	cin>>t;
	while(t--)	{
	    int n;   cin>>n;
	    string str[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>str[i];
	    }
	    int st=0,li=0;
	     for(int i=0;i<n;i++)
	     {
	         if(str[i]=="START38")
	         {
	             st++;
	         }
	         else
	         {
	             li++;
	         }
	     }
	     cout<<st<<" "<<li<<endl;
	    
	}
	return 0;
}
