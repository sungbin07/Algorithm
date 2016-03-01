//
//  main.cpp
//  7576
//
//  Created by 윤성빈 on 2016. 2. 28..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//  토마토
/*
 처리과정
 1. 토마토 상태를 입력받는다.
    1.1 토마토가 익은 경우
        1.1.1 큐에 상태를 넣는다
 2. bfs로 탐색을 한다.
    2.1 큐에서 꺼낸다
        2.1.1 주변에 안익은 토마토가 있으면 익은 토마토로 바꾼다.
 3. 박스의 값에 0이 남아 있다면
    3.1 -1을 출력한다.
 4. 없다면
    4.1 bfs실행 횟수를 출력한다.
 5. 끝낸다.
 
 */

#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int a[1002][1002];
int visited[1002][1002];
int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};
int main(int argc, const char * argv[]) {
    int n,m;
    scanf("%d %d",&m,&n);
    queue<pair<int,int>> q;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
            visited[i][j] = -1;
            if(a[i][j] == 1){
                q.push(make_pair(i,j));
                visited[i][j] = 0;
            }
        }
    }
    
    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for(int i = 0 ; i < 4;i++){
            int ty = y + dy[i];
            int tx = x + dx[i];
            if(1<=ty && ty<= n && 1<= tx && tx<= m){
                if(a[ty][tx] == 0 && visited[ty][tx] == -1){
                    visited[ty][tx] = visited[y][x] + 1;
                    q.push(make_pair(ty,tx));
                }
                    
            }
        }
    }
    
    int ans = 0;
    for(int i =1 ; i<=n;i++){
        for(int j =1;j<=m;j++){
            ans = max(ans,visited[i][j]);
        }
    }

    for(int i =1 ; i<=n;i++){
        for(int j =1;j<=m;j++){
            if(visited[i][j] == -1 && a[i][j] ==0)
                ans = -1;
        }
    }
    printf("%d\n",ans);
    return 0;
}
