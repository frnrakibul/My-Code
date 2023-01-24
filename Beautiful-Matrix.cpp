#include<bits/stdc++.h>
using namespace std;

void display(int x,int y)
{
unsigned int out=(3-x)+(3-y);
cout<<out<<endl;
}

int main(){
    int i,j;
    int mattrix[5][5];
    for( i = 1 ; i <= 5 ; i++ ){
         cin>>mattrix[i-1][j-1];
        for(j = 1 ; j <= 5 ; i++){
            cin>>mattrix[i-1][j-1];
             //if(mattrix[i][j]==1){
               // display(i,j);
             //}
            //cin>>mattrix[i][j];   
        }
    }
     for( i = 1 ; i <= 5 ; i++ ){
         cout<<mattrix[i-1][j-1]<<" ";
        for(j = 1 ; j <= 5 ; i++){
           
            cout<<mattrix[i-1][j-1]<<" ";
            // if(mattrix[i][j]==1){
               // display(i,j);
           //  }
            //cin>>mattrix[i][j];
        }
        cout<<endl;
    }
}