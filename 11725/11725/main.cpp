//
//  main.cpp
//  11725
//
//  Created by 윤성빈 on 2016. 3. 3..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

vector<int> a[1000001];
int checked[1000001];
int depth[1000001];
int parent[1000001];
void dfs(int n){
    checked[n] = true;
    for(int i=0;i<a[n].size();i++){
        int next = a[n][i];
        if(!checked[next]){
            parent[next] = n;
            dfs(next);
        }
    }
}
int main(int argc, const char * argv[]) {

    int n;
    scanf("%d",&n);
    
    for(int i = 0;i<n-1;i++){
        int u,v;
        scanf(" %d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    dfs(1);
    
    checked[1] = 1;
    depth[1] = 0;
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int i = q.front();
        q.pop();
        for(int j : a[i]){
            if(!checked[j]){
                depth[j] = depth[i] +1;
                checked[j] = 1;
                parent[j] = i;
                q.push(j);
            }
        }
    }
    for(int i =2;i<=n;i++)
        printf("%d\n",parent[i]);
    
    return 0;
}
