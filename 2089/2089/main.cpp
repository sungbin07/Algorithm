//
//  main.cpp
//  2089
//
//  Created by 윤성빈 on 2016. 2. 21..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//  -2진수
/*
 처리과정
 1.숫자를 입력받는다
 2.나머지가 0이 될 때까지 나누는 것을 반복한다.
    2.1 2로 나누어 떨어진다면
        2.1.1 0을 출력한다.
    2.2 2로 나누어 떨어지지 않는다면
        2.2.1 나눌수가 양수이면
            2.2.1.1 부호를 바꾼다.
        2.2.2 나눌수가 음수이면
            2.2.2.1 1증가후 부호르 바꾼다.
        2.2.3 1을 출력한다.
 3. 끝낸다.

 */
#include <cstdio>

void div(int n){
    
    if(n==0) return;
    else{
        if(n%2 == 0){
            div(-(n/2));
            printf("0");
        } else {
            if( n >0 )
                div(-(n/2));
            else
                div((-n+1)/2);
            printf("1");
        }
    }
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    if( n==0) printf("0");
    else{
        div(n);
    }

    return 0;
}
