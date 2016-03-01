//
//  main.cpp
//  4963
//
//  Created by 윤성빈 on 2016. 2. 28..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//  섬의 개수

/*
 처리과정
 1. 너비와 높이를 입력받는다.
 2. dfs로 탐색한다.
    2.1 탐색이 되는 지점이 생기면o
        2.1.1 섬의 개수를 증가시킨다.
 3. 섬의 개수를 출력한다.
 4. 끝낸다.
 */

#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int a[51][51];
int visited[51][51];
int dx[9] = {0,1,1,1,0,-1,-1,-1};
int dy[9] = {-1,-1,0,1,1,1,0,-1};
int w,h;
void dfs(int y,int x,int& ans){
    visited[y][x] = ans;
    
    for(int i = 0;i<8;i++){
        int tx = x +dx[i];
        int ty = y +dy[i];
        if( 1<= tx && tx<=w && 1<= ty && ty<= h){
            if(a[ty][tx] == 1 && visited[ty][tx] == 0)
                dfs(ty,tx,ans);
        }
    }
}
void bfs(int y,int x, int& ans){
    visited[y][x] = ans;
    queue<pair<int,int>> q ;
    q.push(make_pair(y,x));
    
    while(!q.empty()){
        y = q.front().first;
        x = q.front().second;
        q.pop();
        for(int i = 0 ; i < 8;i++){
            int ty = y + dy[i];
            int tx = x + dx[i];
            if( 1<= ty && ty <= h && 1<= tx && tx<= w){
                if(a[ty][tx] == 1 && visited[ty][tx] == 0){
                    q.push(make_pair(ty,tx));
                    visited[ty][tx] = ans;
                }
            }
        }
    }
}
int main(int argc, const char * argv[]) {


    while(1){
        scanf("%d %d",&w,&h);
        if(w == 0 && h == 0) break;
        
        for(int i = 1;i<=h;++i){
            for(int j = 1; j<=w;++j){
                scanf("%1d",&a[i][j]);
                visited[i][j] = 0;
            }
        }
        int ans = 0;
        for(int i = 1; i<=h;i++){
            for(int j =1;j<=w;j++){
                if(visited[i][j] == 0 && a[i][j] == 1){
                    dfs(i,j,++ans);
                }
            }
        }
        printf("%d\n",ans);
    };
    return 0;
}
