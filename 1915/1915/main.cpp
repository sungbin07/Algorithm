//
//  main.cpp
//  1915
//
//  Created by 윤성빈 on 2016. 2. 19..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 가장 큰 정사각형

#include <cstdio>
#include <algorithm>
int arr[1001][1001]={0};
int dp[1001][1001] = {0};
using namespace std;
int main(int argc, const char * argv[]) {
    int n,m, ans= 0;
    scanf("%d%d",&n,&m);

    for(int i =1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%1d",&arr[i][j]);
            if( arr[1][j] == 1 ){
                dp[1][j] = 1;
                ans =1;
            }
            if( arr[i][1] == 1 ){
                dp[i][1] = 1;
                ans =1;
            }
            
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j =1;j<=m;j++){
            if(arr[i][j] == 1){
                dp[i][j] = min( min(dp[i-1][j],dp[i-1][j-1]),dp[i][j-1]) + 1;
                ans=max(ans,dp[i][j]);
            }
        }
    }
    

    printf("%d\n",ans * ans);

    return 0;
}
