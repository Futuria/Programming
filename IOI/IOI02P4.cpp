#include <bits/stdc++.h>
using namespace std;

int N, dp[10002],sumT[10002],sumF[10002], Q[10002],S;
double fun(int k, int j){ return (double)(dp[j]-dp[k])/(sumT[j]-sumT[k]);}
int main(){
    scanf("%d %d", &N, &S);

    for(int i = 1;i<=N;i++){
        scanf("%d %d", &sumT[i], &sumF[i]);
    }
    for(int i = N;i>=1;i--){
        sumF[i]+=sumF[i+1];
        sumT[i]+=sumT[i+1];
    }
    int f = 0, r = 0;Q[0] = N+1;
    for(int i = N;i>=1;i--){
        while (f<r&& fun(Q[f],Q[f+1])<=sumF[i]) f++;
        dp[i] = dp[Q[f]] + (sumT[i]-sumT[Q[f]]+S)*sumF[i];
        while(f<r&&fun(Q[r-1],Q[r])>=fun(Q[r],i))r--;
        Q[++r] = i;
    }
    
    printf("%d\n", dp[1]);
}
