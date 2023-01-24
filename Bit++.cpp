#include<bits/stdc++.h>
using namespace std;

int main(){
   int x,i;
   cin>>x;
   int count=0;
   string imp="--X";
   string imp1="X--";
   string input;

   for(i = 0; i < x ; i++){
      cin>>input;
      if(input==imp || input==imp1)
      {
        count--;
      }else
      {
        count++;
      }
   }
   cout<<count<<endl;
}