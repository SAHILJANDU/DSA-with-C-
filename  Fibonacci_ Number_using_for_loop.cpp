#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n ;

        cin>>n;
        int ans =0;
        int p =1;int pp =0;
        if(n<=1){
                cout<<n ;
        }else{
                for(int i =2;i<n;i++){
                        int temp = p;
                        p = p+ pp;
                        pp= temp;
                }
                cout<<pp+p;
        }

}