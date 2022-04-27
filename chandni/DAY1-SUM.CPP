#include <iostream>
using namespace std;
int main()
{
    int i, n, sum=0;
    cout<<"enter a positive no. "<<endl;
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
       sum+=i;
    }
    cout<<"sum is : "<<sum<<endl;
    return 0;
    
}
