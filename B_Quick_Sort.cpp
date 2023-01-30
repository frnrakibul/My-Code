#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,j;
    cin>>t;
    for(j=0;j<t;j++){
        int i,k,n,ord=0,count=0,unord=0;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
       if (std::is_sorted(a, a + n)) {
           cout<<"0"<<endl;
           continue;
        }
        for(i=0;i<n;i++){
        if(a[i]==ord+1){
          ord++;
        } 
        }
        unord=n-ord;
        //cout<<count<<endl;
         if(unord%k==0){
            cout<<(unord/k)<<endl;
         }else{
             cout<<((unord/k)+1)<<endl;
         }
    }

}