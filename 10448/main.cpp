//
//  main.cpp
//  10448
//
//  Created by 윤성빈 on 2016. 2. 13..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

/*
 처리과정
 1. 모든 삼각수를 구한다.
 2. 삼각수로 만들수 있는 값을 해당 배열에 저장한다.
 3. 숫자를 입력받는다.
 4. 해당 숫자 인덱스에 값을 출력한다.
 5. 끝낸다.
 */
#include <cstdio>

int T[46] = {0,1,3,6,10,15,21};
int isTrue[1000];
int main(int argc, const char * argv[]) {

    int n, input;
    
    for(int i = 7;i<46;i++)
        T[i] = (i*(i+1)) / 2;
    
    for(int i = 1; i < 46;i++){
        for(int j = 1; j < 46 ; j++){
            for(int k =1;k<46 ; k++){
                n = T[i]+T[j]+T[k];
                if(n<=1000)
                    isTrue[n] = 1;
            }
        }
    }
    scanf("%d",&n);
    while(n--){
        scanf("%d",&input);
        printf("%d\n",isTrue[input]);
    }

    return 0;
}
