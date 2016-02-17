//
//  main.cpp
//  10824
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//
/*
 처리과정
 printf / sprintf
 
 printf : 모니터에 출력하는 출력함수
 sprintf : buffer에 지정형식을 출력하는 출력함수
 */
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    char s1[13],s2[13];
    sprintf(s1,"%d%d",a,b);
    sprintf(s2,"%d%d",c,d);

    cout << atoll(s1)+atoll(s2)<<endl;

    return 0;
}
