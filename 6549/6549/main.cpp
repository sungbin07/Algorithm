//
//  main.cpp
//  6549
//
//  Created by 윤성빈 on 2016. 2. 16..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 히스토그램에서 가장 큰 직사각형

/*
 처리과정
 스택을 사용 x, y
 1. y 스택의 최상단의 값보다 높이가 낮으면 
    1.1 y 스택의 높이가 입력의 높이보다 작거나 같은 동안 반복한다
    1.2 히스트그램의 최대 넓이를 구한다.
 2. y 스택의 최상단의 값보다 높이가 크거나 같으면
    2.1 스택에 넣는다.
 3. 끝에 도달했을경우
    3.1 스택에서 하나씩 꺼내면서 나머지 히스트그램의 넓이를 구한다.
 
 */
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main(int argc, const char * argv[]) {

    int n ,  top = 0 , h;
    long long ans = 0;
    stack<long long > x,y;

    x.push(0);
    y.push(0);
    
    while(1){
        cin >> n;
        if(n == 0) return 0;
      
        while( top != n){
            top++;
            cin >> h;
            
            while(y.top() >h){
                x.pop();
                
                ans = max( ans,y.top()*( top - x.top() - 1 ));
                y.pop();
            }
            x.push(top);
            y.push(h);
            
        }
        while(x.top() != 0){
            x.pop();
            ans = max(ans, y.top() * ( top - x.top()));
            y.pop();
        }
        
        cout << ans << endl;
        ans = 0;
        top = 0;
    }
    return 0;
}
