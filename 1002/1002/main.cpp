//
//  main.cpp
//  1002
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 터랫
/*
 처리과정
 x1^2 + y1^2 = r1^2
 x2^2 + y2^2 = r2^2 
 두 식을 원의 중심의 차이를 구한다.
 결과값이
 1. 같으면 1
 2. 좌변의 식이 더크면 0
 3. 우변의 식이 더큰 경우
    3.1 두개의 식이 같은 경우
        3.1.1 -1을 출력
    3.2 중심사이의 거리가 반지름의 차이보다 크면
        3.2.1 2를 출력
    3.3 중심사이의 거리와 반지름의 차이가 같으면
        3.3.1 1을 출력
    3.4 중심사이의 거리가 반지름의 차이보다 작으면
        3.4.1 0을 출력
 4. 끝낸다
 */

#include <cstdio>
#include <cmath>

int main(int argc, const char * argv[]) {

    int n , d,r;
    int x[3];
    int y[3];
    scanf("%d",&n);
    while(n--){
        for(int i=0;i<3;i++)
            scanf("%d",&x[i]);
        for(int i=0;i<3;i++)
            scanf("%d",&y[i]);
        
        d = pow(x[0]-y[0],2) + pow(x[1]-y[1],2);
        r = pow(x[2]+y[2],2);
        
        if(d == r) printf("1\n");
        else if(d > r) printf("0\n");
        else{
            int t = pow(x[2]-y[2],2);
            if(d==0&&t==0) printf("-1\n");
            else if( d == t) printf("1\n");
            else if( d > t) printf("2\n");
            else
                printf("0\n");
        }
        
        
    }
    return 0;
}
