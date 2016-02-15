//
//  main.cpp
//  9012
//
//  Created by 윤성빈 on 2016. 2. 15..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 괄호
// 스택을 이용한 문제

/*
 처리과정
 1. 여는 괄호는 스택에 넣는다
 2. 닫는 괄호는 스택에서 빼낸다
 3. 스택이 비어있으면 YES
 4. 스택이 비어있지 않으면 NO
 
 다른방법
 변수하나를 설정해서 여는괄호면 + 1 닫는 괄호면 -1
 결과값이 0 이면 YES
 그 외의 값이면 NO
 */

#include <iostream>
#include <stack>
#include <string>
using namespace std;

string calc(string s){
    
    stack<int> ss;

    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == '('){
            ss.push(i);
        }
        else{
            if(!ss.empty())
                ss.pop();
            else
                return "NO";
        }
    }
    if(ss.empty())
        return "YES";
    else
        return "NO";
}

int main(int argc, const char * argv[]) {
    
    int n;
    
    cin >> n;
    
    while (n--) {
        string line;
        cin >> line;
        cout << calc(line) << endl;
    }
    return 0;
}
