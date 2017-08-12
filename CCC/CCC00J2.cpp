#include <bits/stdc++.h>
using namespace std;

bool check (int value){
  string s1 = to_string(value);
  string s2 = to_string(value);
  for(int i = 0;i<s1.size();i++){
    char c  = s1[i];
    if(c== '2' || c == '3' || c== '4'|| c=='5'|| c== '7')
    return false;
    if(c== '6') c = '9';
    else if (c== '9') c= '6';
    s2[s1.size()-i-1] = c;
  }
  if (s2==s1)
  return true;
  return false;
}

int main(){
  int m,n;
  cin>>m>>n;
  int sum = 0;
  for(int i = m;i<n+1;i++){
    if(check(i))
    sum++;
  }
  cout<<sum;
  return 0;
}
