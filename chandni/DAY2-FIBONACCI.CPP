#include <iostream>
using namespace std;
int main()
{
    int number, t1=0, t2=1, nextterm;
    cout<<"enter the no. : "<<endl;
    cin>>number;
    cout<<"fibonacci series : ";

for(int i=1 ; i<=number ; i++)
    {
     if(i==1){
         cout<< t1<<", ";
         continue;
     }
     if(i==2)
     {
         cout<< t2<<", ";
         continue;
     }
    nextterm=t1+t2;
    t1=t2;
    t2=nextterm;
    cout<< nextterm<<", ";
    }
    return 0;
}
