#include<bits/stdc++.h>
using namespace std;

int main(){
    int j;
    int count=0;
    string input;
    cin>>input;
    sort(input.begin(),input.end());
    int l=input.length();
    for(int i=0;i<l;i++){
        if(input[i]=='+'){
            count++;
        }
    }
    for(j=count ;j<l;j++){
        cout<<input[j];
        if(j<l-1){
            cout<<"+";
        }
    }

}