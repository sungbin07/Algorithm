//
//  main.cpp
//  1373
//
//  Created by 윤성빈 on 2016. 2. 21..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    
    if(s.size() == 1 && s[0]-'0' == 0) cout << "0";
    
    for( int i = 0 ; i < s.size();i++){
        int t = s[i] -'0';
        int ans[3] = {0};
        for(int j=0;j<3;++j){
            ans[j]= t%2;
            t/=2;
        }
        if( i == 0){
            if(ans[2] == 0&& ans[1] != 0)
                cout <<ans[1] <<ans[0];
            else if(ans[2] == 0 && ans[1] == 0)
                cout <<ans[0];
            else
                cout<< ans[2] <<ans[1] <<ans[0];
        }else
            cout<< ans[2] <<ans[1] <<ans[0];
    }
    return 0;
}
