//
//  main.cpp
//  1260
//
//  Created by 윤성빈 on 2016. 2. 22..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//  DFS , BFS

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int arr[1001][1001];
bool visited[1001];
int n,m,s;
vector<int> v[1001];

// 인접행렬
void dfs(int i){
    visited[i] = true;
    cout<<i<<" ";
    for(int j=1;j<=n;++j){
        if(arr[i][j]==1 && visited[j] == false){
            dfs(j);
        }
        
    }
}
 
void bfs(int i){
    queue<int> q;
    visited[i] = true;
    q.push(i);
    while(!q.empty()){
        int k = q.front();
        q.pop();
        cout << k << " ";
        for(int j = 1; j<=n;++j){
            if(arr[k][j] == 1 && visited[j] == false){
                visited[j] = true;
                q.push(j);
            }
        }
    }
}
 
/*
 인접리스트
void dfs(int i){
    visited[i] = true;
    cout << i << " ";
    for(int j=0;j<v[i].size();j++){
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
        int k = q.front();
        q.pop();
        cout<< k << " ";
        for( int j=0;j<v[k].size();++j){
            int c = v[k][j];
            if(visited[c] == false){
                visited[c] = true;
                q.push(c);
            }
        }
    }
}
 */
int main(int argc, const char * argv[]) {
    
    cin >> n >> m >> s;
    for(int j = 0 ; j < m; j++){
        int a,b;
        cin >> a>> b;
        arr[a][b] = arr[b][a] = 1;
    }

//    for ( int j = 0;j<m;j++){
//        int a,b;
//        cin >> a>>b;
//        v[a].push_back(b);
//        v[b].push_back(a);
//    }
//    for(int i = 1;i<=n;i++)
//        sort(v[i].begin(),v[i].end());
    dfs(s);
    cout << endl;
    for(int i =1;i<=n;++i)
        visited[i] = false;
    bfs(s);

    return 0;
}
