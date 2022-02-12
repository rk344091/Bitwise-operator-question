#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;
 cout<<"a&b"<<(a&b)<<endl;
  cout<<"a|b"<<(a|b)<<endl;
   cout<<"~b"<<(~b)<<endl;
    cout<<"a^b"<<(a^b)<<endl;
    cout<<(17<<1)<<endl;
    cout<<(17<<2)<<endl;
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;


    int i=15;
    cout<<(i++)<<endl;
    //15,i=16
    cout<<(++i)<<endl;
    //17,i=17
    cout<<(i--)<<endl;
    // 17,i=16
    cout<<(--i)<<endl;
    //15,i=15

}