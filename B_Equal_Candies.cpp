#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,j;
    cin>>t;
    for(j=0;j<t;j++){
    int n,i,sum1=0,sum=0,count=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr + n, less<int>());
    int l = sizeof(arr) / sizeof(arr[0]);
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
       for(i=0;i<(n-1);i++){

        if(arr[0] > 0 && arr[0]<arr[i+1])
            count++;
        
    }
    if(count>0){
       sum1=arr[0]*n;
    cout<<(sum-sum1)<<endl;
     }else if(n>1 || arr[0]==0||count==0){
    cout<<"0"<<endl;
    }else if (l==1)
    {
       cout<<(sum-1 && arr[0]>0)<<endl; 
    }

    }
      
}
