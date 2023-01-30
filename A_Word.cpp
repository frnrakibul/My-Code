#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,l=0,count=0,count1=0;
    string s;
    cin>>s;
    l=s.length();
    for(i=0;i<l;i++){
        if(isupper(s[i])){
           count++;
        }else{
            count1++;
        }   
    }
    //cout<<count<<" "<<count1<<endl;
    if(count<count1 || count==count1){
        transform(s.begin(),s.end(),s.begin(),:: tolower);
        cout<<s<<endl;
    }else {
         transform(s.begin(),s.end(),s.begin(),:: toupper);  
        cout<<s<<endl;
    }
}