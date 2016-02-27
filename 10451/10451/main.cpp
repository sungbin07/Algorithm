//
//  main.cpp
//  10451
//
//  Created by 윤성빈 on 2016. 2. 24..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 순열사이클

#include <iostream>
using namespace std;
int arr[1002];
bool visited[1002];

void dfs( int i ){
    if(visited[i])return;
    visited[i] = true;
    dfs(arr[i]);
}
int main(int argc, const char * argv[]) {

    int n;
    cin>>n;
    while(n--){
        int a;
        cin >>a;
        for(int i = 1; i<=a;++i){
            cin>>arr[i];
        }
        int ans = 0;
        for(int i =1;i<=a;++i){
            if(!visited[i]){
                ans++;
                dfs(i);
            }
        }
        for(int i= 1; i<=a ; ++i){
            arr[i] = 0;
            visited[i] = 0;
        }
        cout<< ans << endl;
    }
    return 0;
}
