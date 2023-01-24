#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin>>input;
   int l=input.length();
   int i;
   cout<<char(toupper(input[0]));
   for(i=1;i<l;i++){
       cout<<input[i];
   }
   //cout<<input;
}