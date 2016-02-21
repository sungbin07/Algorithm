//
//  main.cpp
//  Synchronizing Clocks
//
//  Created by 윤성빈 on 2016. 2. 21..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>

using namespace std;

void gg(const string& s){
    cout<<s[0]<<endl;
    gg(s.substr(1));
}

int main(int argc, const char * argv[]) {

    char b[2][2];
    string s;
    getline(cin,s);
    gg(s);
    return 0;
}
