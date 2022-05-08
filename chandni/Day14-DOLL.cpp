#include <iostream>
using namespace std;

// int height(int a[],int n,int k){
//     int i=0;int count=0;
//     while(i<n){
//         if(a[i]>k){
//             count++;
//             i++;
//         }
//     }
//     return count;
// }

int main() {
	int t;
    int n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n];int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>k){
                count++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
