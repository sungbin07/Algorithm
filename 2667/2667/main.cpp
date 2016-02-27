//
//  main.cpp
//  2667
//
//  Created by 윤성빈 on 2016. 2. 25..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//  단지번호붙이기
/*
 처리과정
 1. 단지를 입력받는다.
 2. dfs로 모든 점을 탐색한다.
    2.1 방문한 노드면 건너간다.
    2.2 아직 방문하지 않은 노드면
        2.2.1 그 노드를 시작으로 dfs를 시작
        2.2.2 방문할때r 카운트를 증가시킨다.
 3. 단지갯수를 출력한다.
 4. 끝낸다.
 */

#include <cstdio>
#include <algorithm>
using namespace std;

int arr[26][26];
int visited[26][26];
int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

void dfs(int i,int k,int& ans ){
    if(visited[i][k] == 1) return;
    
    visited[i][k] = ans;
    
    for(int j = 0; j<4;++j){
        int ty = i + dy[j];
        int tx = k + dx[j];
        if( 1 <= ty && ty <= 26 && 1 <= tx && tx <= 26 ){
            if(visited[ty][tx] == 0 && arr[ty][tx] != 0)
                dfs(ty,tx,ans);
        }
    }

}

int main(int argc, const char * argv[]) {

    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        for(int j=1;j<=t;j++){
            scanf("%1d",&arr[i][j]);
        }
    }
    
    int ans =1;
    for(int i=1;i<=t;i++){
        for(int j=1;j<=t;j++){
            if(arr[i][j] != 0 && visited[i][j] == 0){
                dfs(i,j,++ans);
            }
        }
    }
    printf("%d\n",ans-1);
    int c[27*27]={0};
    for(int i =1 ; i<=t ;++i){
        for(int j =1 ;j<=t;++j){
            c[visited[i][j]] +=1;
        }
    }
    sort(c+1,c+ans);
    for(int i=1;i<ans;i++)
        printf("%d ",c[i]);
    return 0;
}
