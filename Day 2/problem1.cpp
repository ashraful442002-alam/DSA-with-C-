#include<bits/stdc++.h>
using namespace std;

int main() {

   int a,b,c;


   cin>>a>>b>>c;

   int side1 = a+b;
   int side2 = b+c;
   int side3 = c+a;

   if(side1>c && side2>a && side3>b){
       cout<<"Valid"<<endl;
    }else{
        cout<<"Invalid"<<endl;
    }


   

   return 0;
}