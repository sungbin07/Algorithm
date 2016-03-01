//
//  main.cpp
//  2146
//
//  Created by 윤성빈 on 2016. 2. 29..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//  다리 만들기
/*
 처리과정
 1. 섬과 바다를 입력받는다.
 2. 각 섬마다 bfs 탐색을 한다.
    2.1 연결되어 있는 섬끼리 같은 섬이 되도록 번호로 표시한다.
 3. 처음부터 끝까지 반복한다.
    3.1 섬이면
        3.1.1 d == 0
    3.2 바다면
        3.2.1 d == -1
 4.섬에서 인접한 영역으로 영역을 확대하면서
    4.1 g배열에 섬의 영역을 확대한다.
    4.2 방문배열인 d배열에 몇번째 턴인지 저장한다.
 5. g배열의 값이 서로 다른지점에서
    5.1 방문노드의 값의 합을 구한다.
    5.2 최소값을 구한다.
 6. 출력한다.
 7. 끝낸다.
 */

#include <cstdio>
#include <queue>
using namespace std;
int a[101][101];
int d[101][101];
int g[101][101] = {0};
int dy[4] = {0,1,0,-1};
int dx[4] = {-1,0,1,0};

int main(int argc, const char * argv[]) {

    int n;
    scanf("%d",&n);

    for(int i =1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    int count = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            queue<pair<int,int>> q;
            if(a[i][j] == 1 && g[i][j] == 0){
                g[i][j] = ++count;
                q.push(make_pair(i, j));
                while(!q.empty()){
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    for(int t=0;t<4;++t){
                        int tx = x + dx[t];
                        int ty = y + dy[t];
                        if(1<=tx && tx<=n && 1<=ty && ty<=n){
                            if(a[tx][ty] == 1 && g[tx][ty] == 0){
                                g[tx][ty] = count;
                                q.push(make_pair(tx,ty));
                            }
                        }
                    }
                }
            }
        }
    }

    queue<pair<int,int>> q;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            d[i][j] = -1;
            if(a[i][j] == 1){
                q.push(make_pair(i, j));
                d[i][j] = 0;
            }
        }
    }

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i =0;i<4;i++){
            int tx = x + dx[i];
            int ty = y + dy[i];
            if(1<=tx && tx<=n && 1<=ty && ty<=n){
                if(g[tx][ty] == 0 && d[tx][ty] == -1){
                    d[tx][ty] = d[x][y] + 1;
                    g[tx][ty] = g[x][y];
                    q.push(make_pair(tx,ty));
                }
            }
        }
    }
    int ans = -1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            for (int k=0; k<4; k++) {
                int x = i+dx[k];
                int y = j+dy[k];
                if (1 <= x && x <= n && 1 <= y && y <= n) {
                    if (g[i][j] != g[x][y]) {
                        if (ans == -1 || ans > d[i][j] + d[x][y]) {
                            ans = d[i][j] + d[x][y];
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
