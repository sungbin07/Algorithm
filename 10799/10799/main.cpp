//
//  main.cpp
//  10799
//
//  Created by 윤성빈 on 2016. 2. 15..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 쇠막대기

/*
 처리과정
 1.여는 괄호가 나오면 스택에 넣는다
 2.닫는 괄호가 나오면 스택에서 뺀다
    2.1 pair가 차이가 1일때 레이져이다.
        2.1.1 이때 남아 있는 스택의 크기만큼 더한다
    2.2 pair가 차이가 1이 아닐때
        2.2.1 종료되는 파이프 개수이 1개를 더한다
 
 */

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {

    stack<int> s;
    string line;
    int cnt = 0;
    cin >> line;
    
    for(int i= 0; i < line.size();i++){
        if(line[i] == '('){
            s.push(i);
        } else{
            if(i - s.top() == 1){
                s.pop();
                cnt+=s.size();
            } else{
                s.pop();
                cnt+=1;
            }
        }

    }
    cout << cnt << endl;

    return 0;
}
