//
//  main.cpp
//  1929
//
//  Created by 윤성빈 on 2016. 2. 21..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 소수 구하기

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
 
    bool c[1000001]={1,1}; // 지워졌으면 true
    int a, b;

    for(int i =2;i*i<=1000000;i++){
        if(c[i] == false){
            for(int j = i+i;j<=1000000 ; j+=i)
                c[j] = true;
        }
    }
    cin >>  a >> b;
    for(int i=a;i<=b;i++)
        if(c[i] == false)
            cout<<i<<endl;
    

    return 0;
}
