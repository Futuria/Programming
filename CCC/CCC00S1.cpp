#include <bits/stdc++.h>
using namespace std;


int main(){
  int q,m1,m2,m3;
  int count = 0;
  cin>>q>>m1>>m2>>m3;
  for(count = 0; q > 0; q--, count++){
    if(count%3 == 0){
      m1++;
      if(m1==35){
        q+=30;
        m1=0;
      }
    }else if(count%3 == 1){
      m2++;
      if(m2==100){
        q+=60;
        m2=0;
      }
  }else{
    m3++;
    if(m3==10){
      q+=9;
      m3=0;
    }
  }
}
  cout<<"Martha plays "<< count<<" times before going broke.";
}
