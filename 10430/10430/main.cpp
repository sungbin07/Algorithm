//
//  main.cpp
//  10430
//
//  Created by 윤성빈 on 2016. 2. 21..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 나머지

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {

    int a,b,c;
    cin >> a >> b>> c;
    
    cout << (a+b)%c << endl;
    cout << (a%c + b%c)%c << endl;
    cout << (a*b)%c << endl;
    cout << (a%c * b%c)%c << endl;
    return 0;
}
