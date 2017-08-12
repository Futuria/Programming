#include <bits/stdc++.h>
using namespace std;

int main(){
  int day, number;
  scanf("%d %d", &day, &number);
  cout<< "Sun Mon Tue Wed Thr Fri Sat"<< endl;
  for(int i = 1; i<=number;i++){
    if((i+day-1)%7==1) cout << endl;
    cout << i<< " ";
  }
  return 0;

}
