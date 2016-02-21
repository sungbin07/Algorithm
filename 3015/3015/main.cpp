//
//  main.cpp
//  3015
//
//  Created by 윤성빈 on 2016. 2. 16..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 오아시스 재결합

#include <cstdio>
#include <stack>

int arr[500000];
using namespace std;

int main(int argc, const char * argv[]) {
    stack<int> people;
    stack<int> look;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
        scanf("%d",&arr[i]);
    
    long long  ans = 0;
    
    for( int i = 0 ; i  < n;++i){
        int cnt = 1;
        while(!people.empty()){
            if(people.top() <= arr[i]){
                ans += (long long)look.top();
                if(people.top() == arr[i]){
                    cnt+=look.top();
                }
                
                people.pop();
                look.pop();
            } else {
                break;
            }
        }
        if(!people.empty())
            ans+=1;
        people.push(arr[i]);
        look.push(cnt);
    }
    
    printf("%lld",ans);
 
    return 0;
}
