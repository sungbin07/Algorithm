//
//  main.cpp
//  1,2,3 더하기
//
//  Created by 윤성빈 on 2016. 2. 13..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 9095번

/*
 처리과정
 1. 숫자를 입력받는다.
 2. n-3, n-2, n-1번째 항을 구한다.
 3. 세개의 항을더해서 n번째 값을 구한다.
 4. 출력한다.
 5. 끝낸다.
 
 */

#include <cstdio>

int dp[12] = {0,1,2,4};

int main(int argc, const char * argv[]) {

    int n, num;
    
    scanf("%d",&n);
    
    for(int i = 4;i<12;i++){
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }
    
    while(n--){
        scanf("%d",&num);
        printf("%d\n",dp[num]);
        
    }

    return 0;
}
