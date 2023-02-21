#include<bits/stdc++.h>
using namespace std;


int main(){
int t;   cin>>t;
while (t--)
{
int l;  cin>>l;
int a[l];  int sum=0,ans=0,equal=0;
for(int i=0 ; i < l ; i++ ){
    cin>>a[i];
    sum=sum+a[i];
}
int k=sum/l;
if(sum%l!=0){
    ans=-1;
}else if(sum%l==0){
    for(int j=0;j<l;j++){
        if(k<a[j]){
            ans++;
        }
    }
}

cout<<ans<<endl;

}

}