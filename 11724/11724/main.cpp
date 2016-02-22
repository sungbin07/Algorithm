//
//  main.cpp
//  11724
//
//  Created by 윤성빈 on 2016. 2. 22..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
vector<int> v[1001];
bool visited[1001];
int n,m;

void dfs(int i){
    visited[i] = true;
    for(int j =0;j<v[i].size();++j){
        int c = v[i][j];
        if(visited[c] == false){
            dfs(c);
        }
    }
}
void bfs(int i){
    queue<int> q;
    visited[i] = true;
    q.push(i);
    while(!q.empty()){
        int t = q.front();
        q.pop();
        for(int j = 0; j<v[t].size();++j){
            int c = v[t][j];
            if(visited[c] == false){
                visited[c] = true;
                q.push(c);
                
            }
            
        }
    }
}
int main(int argc, const char * argv[]) {

    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int a,b;
        cin >>a >>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int ans = 0;
    for(int i = 1 ; i <= n; i++){
        if(visited[i] == false){
            bfs(i);
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
