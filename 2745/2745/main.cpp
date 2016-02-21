//
//  main.cpp
//  2745
//
//  Created by 윤성빈 on 2016. 2. 21..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string s;
    int b;
    int ans =0;
    cin >> s >> b;
    for(int i=0;i<s.size();i++){
        if('0'<= s[i] && s[i] <= '9') {
            ans = ans * b +(s[i] -'0');
        }else {
            ans = ans * b +(s[i] -'A'+10);
        }
    }
    cout<< ans << endl;
    return 0;
}