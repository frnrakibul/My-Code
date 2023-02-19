#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y){

    while(y!=0){
        int t = y;
        y = x % y;
        x = t ;
    }
    return abs(x);
}

int main(){

    int t;  cin>>t;

    while (t--)
    {
        int l,count=0;  cin>>l;

        int a[l];

        vector<int>odd;
        vector<int>even;

        
        for(int i = 0; i < l ; i++ ){

          cin>>a[i];
        }

        for(int i = 0; i < l ; i++ ){

            if( a[i] % 2 == 0 )

                even.push_back(a[i]);

            else

            odd.push_back(a[i]);
        }
        int ll=even.size();
         int ll2=odd.size();

        while(ll--){
            count=count+(l-1);
            l--;
        }
       for(int i=0;i<ll2;i++){
        for(int j=i+1;j<ll2;j++){
            int o=odd[i];
            int p=2*odd[j];
            //cout<<odd[i]<<endl;
            int z=gcd(o,p);
          //  cout<<z<<endl;
            if(z>1){
                count++;
            }
        }
       }
        
        cout<<count<<endl;

}
}