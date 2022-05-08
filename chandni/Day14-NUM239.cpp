#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    int a,b;
	    cin>>a>>b;
	    for(int i=a;i<=b;i++)
	    {
	        int res=i%10;
	        if(res==2 || res==3 ||res==9)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
