//
//  main.cpp
//  10828
//
//  Created by 윤성빈 on 2016. 2. 18..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
int main(int argc, const char * argv[]) {

    stack<int> ss;
    int n;
    cin >>n;
    while(n--){
        string s;
        int i;
        cin >>s;
        if(!strcmp(s.c_str(),"push")){
            cin>>i;
            ss.push(i);
        }
        else if(!strcmp(s.c_str(),"top")) {
            if(ss.empty()) cout << -1<<endl;
            else cout<<ss.top()<<endl;
        }
        else if(!strcmp(s.c_str(),"size")) cout<<ss.size()<<endl;
        else if(!strcmp(s.c_str(),"empty")) cout<<ss.empty()<<endl;
        else  {
            
            if(ss.empty()) cout<<-1<<endl;
            else {
                cout<<ss.top()<<endl;
                ss.pop();
            }
        }
        
    }
    return 0;
}
