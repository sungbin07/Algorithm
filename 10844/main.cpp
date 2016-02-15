//
//  main.cpp
//  쉬운 계단 수
//
//  Created by 윤성빈 on 2016. 1. 21..
//  Copyright © 2016년 윤성빈. All rights reserved.
//

#include <cstdio>

typedef unsigned long long ull;

ull dp[101][11];

// index : 자리수
// next :  올수 있는 숫자
ull calc(int index,int next){
    
    ull& t = dp[index][next];
    
    if(t!= -1) return t;

    if(index == 0 || next >9 || next < 0 ) return t=0;
    if(index == 1) return t = 1;
    
    return t= (calc(index - 1,next-1) + calc(index - 1,next+1)% 1000000000);

}
int main(int argc, const char * argv[]) {


    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j = 0;j<11;j++)
            dp[i][j] = -1;
    }
    int c = 0;
    for(int i=1;i<10;i++){
        c = (c+ calc(n,i) ) % 1000000000;
    }
    
    printf("%d\n",c);
    return 0;
}
