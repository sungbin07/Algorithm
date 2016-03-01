//
//  main.cpp
//  1991
//
//  Created by 윤성빈 on 2016. 3. 2..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//  트리 순회

#include <cstdio>
using namespace std;
int tree[30][2];
void freeorder(int x){
    if( x == -1)return;
    printf("%c",x+'A');
    freeorder(tree[x][0]);
    freeorder(tree[x][1]);
}
void inorder(int x){
    if(x == -1) return;
    inorder(tree[x][0]);
    printf("%c",x+'A');
    inorder(tree[x][1]);
}
void postorder(int x){
    if(x == -1) return;
    postorder(tree[x][0]);
    postorder(tree[x][1]);
    printf("%c",x+'A');
}

int main(int argc, const char * argv[]) {

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char x,y,z;
        scanf(" %c %c %c",&x,&y,&z);
        x= x-'A';
        if( y == '.'){
            tree[x][0] = -1;
        } else {
            tree[x][0] = y-'A';
        }
        
        if( z =='.'){
            tree[x][1] = -1;
        }else {
            tree[x][1] = z-'A';
        }
            
    }
   
    freeorder(0);
    printf("\n");
    inorder(0);
    printf("\n");
    postorder(0);
    printf("\n");

    return 0;
}
