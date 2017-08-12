#include <bits/stdc++.h>
using namespace std;

int N, H, dp[1001],arr[1001];
int main(){
  memset(dp, 0, sizeof dp);
  scanf(" %d %d", &N, &H);
  for(int i = 0; i<N; i++){
    scanf("%d",&arr[i]);
  }

  int temp = 1;

  for(int i = 0; i< N;i++){
    for(int j = 0; j<i;j++){
      if(dp[i] >= dp[j] + H + (arr[i]-arr[j+1])*(arr[i] - arr[j +1])){
        temp = j;
        dp[i] = dp[j]+H+(arr[i]-arr[j+1])*(arr[i]-arr[j+1]);
      }
    }
  }
  printf("%d", dp[4]);
  return 0;
}
