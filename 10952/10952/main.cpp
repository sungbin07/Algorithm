//
//  main.cpp
//  10952
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// A+B - 5

#include <iostream>

int main(int argc, const char * argv[]) {

    int a,b;
    while(std::cin>>a>>b){
        if(a ==0 && b==0) break;
        else
            std::cout << a+b <<'\n';
    }
    return 0;
}
