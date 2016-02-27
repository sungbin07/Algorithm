//
//  main.cpp
//  1707
//
//  Created by 윤성빈 on 2016. 2. 22..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v[20001];
int visited[20001];
void dfs(int i, int c){
    if( visited[i] == 0 ){
        visited[i] = c;
    }
    for(int k =0;k<v[i].size();++k){
        int t = v[i][k];
        if(visited[t] == 0){
            dfs(t,3-c);
        }
    }
}

int main(int argc, const char * argv[]) {

    int n;
    cin >> n;
    while(n--){
        int a,b;
        cin >>a >> b;
        for(int i =0;i<b;i++){
            int q,w;
            cin >> q >> w;
            v[q].push_back(w);
            v[w].push_back(q);
        }
        for(int i = 1;i<=a;++i)
            sort(v[i].begin(),v[i].end());
        
        for(int i = 1;i<=a;i++){
            if( visited[i] == 0)
                dfs(i,1);
        }
        
        bool ok = true;
        for(int i = 1; i<=a;++i){
            for(int j = 0;j<v[i].size();++j){
                if(visited[i] == visited[v[i][j]]){
                    ok = false;
                    break;
                }
            }
        }
        if(ok)
            cout << "YES"<<endl;
        else
            cout<<"NO"<<endl;
        for(int i=0;i<=20000;i++){
            v[i].clear();
            visited[i] = 0;
            
        }
    }

    return 0;
}
