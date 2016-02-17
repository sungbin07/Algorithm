//
//  main.cpp
//  2225
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 합분해

/*
 처리과정
 dp[n][k] :n번째까지 정수 k개를 더해서 n이 나오는 경우의 수
 dp[n][k] += dp[n-l][k-1]
 
 n번쨰 정수 k개를 더 했다면
 n-k번째에 k-1개를 더 해야하고 ...
 이를 다 더해야하한다.
 */

#include <cstdio>

long long dp[201][201] = {1};
long long mod = 1000000000;
int main(int argc, const char * argv[]) {
    
    int n,k;
    scanf("%d%d",&n,&k);
    
    for(int i=1;i<=k;i++){
        for(int j=0;j<=n;j++){
            for(int l =0;l<=j;l++){
                dp[j][i] += dp[j-l][i-1];
                dp[j][i] %= mod;
            }
        }
    }
    printf("%lld\n",dp[n][k]);

    return 0;
}
