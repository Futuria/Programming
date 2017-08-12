#include <bits/stdc++.h>
using namespace std;

int arr[1000][1000];
int s,e;
int size;

int main(){
  cin>>s>>e;
  size = (int)ceil(sqrt(s-e));
  
  cout<<size<<endl;

  return 0;
}
