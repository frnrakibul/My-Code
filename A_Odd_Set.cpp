#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,t,j,n;
    cin>>t;

    for(j=0;j<t;j++){
       int count=0;
    cin>>n;
    n*=2;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            count++;
        }
    }
    if(count==(n-count)){
        cout<<"Test case "<< j+1<<": Yes" <<endl;
    }else{
        cout<<"Test case "<< j+1<<": No" <<endl;
    }
}
}
