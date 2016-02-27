//
//  main.cpp
//  9466
//
//  Created by 윤성빈 on 2016. 2. 24..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//  Term Project
/*
 처리과정
 전체에서 순환 방문 노드를 뺀다.
 */
#include <cstdio>

int arr[100002];
int visited[100002];
int first[100002];
int dfs(int i,int cnt,int& depth){
    while(1){
        if(visited[i] != 0){
            if(depth != first[i]){
                return 0;
            }
            return cnt - visited[i];
        }
        visited[i] = cnt;
        first[i] = depth;
        i = arr[i];
        cnt++;
    }
}

int main(int argc, const char * argv[]) {

    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i =1;i<=n;i++){
            scanf("%d",&arr[i]);
            visited[i] = 0;
            first [i] = 0;
        }
        int ans = 0;
        
        for( int i =1;i<=n;++i){
            if(visited[i] == 0)
                ans+=dfs(i,1,i);
        }
        printf("%d\n",n-ans);
        
        
    }

    return 0;
}
