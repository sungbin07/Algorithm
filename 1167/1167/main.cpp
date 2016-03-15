//
//  main.cpp
//  1167
//
//  Created by 윤성빈 on 2016. 3. 3..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//  트리의 지름

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int,int>> v[100001];
int checked[100001];
int distance[100001];
void dfs(int n){
    checked[n] = true;
    
    int distance = 0;
    for( auto it = v[n].begin();it!=v[n].end();++it){
        dis
    }
}
int main(int argc, const char * argv[]) {

    int n;
    scanf("%d",&n);
    
    for(int i =1;i<=n;i++){
        int x=0;
        scanf("%d",&x);
        while(true){
            int y=0,z=0;
            scanf("%d",&y);
            if(y == -1 ) break;
            scanf("%d",&z);
            v[x].push_back(make_pair(y,z));
            v[y].push_back(make_pair(x,z));
        }
        printf("!\n");
    }
//    dfs(1);
    pair<int,int> c = v[1].front();
    printf("%d",c.first);
    return 0;
}
