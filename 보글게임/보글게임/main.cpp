//
//  main.cpp
//  보글게임
//
//  Created by 윤성빈 on 2016. 2. 19..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>
#include <cstring>

const int dx[8] = {-1,-1,-1,1,1,1,0,0};
const int dy[8] = {-1,0,1,-1,0,1,-1,1};

using namespace std;

char board[5][5];

bool hasWord(int y, int x, const string& word){
    
    if(x <0 || y< 0 || x > 4 || y > 4) return false;
cout<<word;
    if(board[y][x] != word[0]) return false;

    if(word.size() == 1 ) return true;
    
    for( int direction = 0 ; direction < 8; ++direction){
        int nextY = y + dy[direction],nextX = x + dx[direction];
        
        if(hasWord(nextY,nextX,word.substr(1))) return true;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    
    int n , n_cnt;
    string s;
    cin >> n;

    while(n--){
        for(int i=0;i<5;++i)
            for(int j=0;j<5;++j){
                cin >> board[i][j];
            }
        cin>>n_cnt;
        while(n_cnt--){
            getline(cin,s);
            cout<< s <<endl;
            int i = 0,j = 0;
            for(i=0;i<5;++i){
                for( j=0;j<5;++j){
                    if(hasWord(i,j,s)){
                        cout<< s << " YES"<<endl;
                        break;
                    }
                }
            }
//            if(i ==5 && j ==5)
//                cout<<line << " NO"<<endl;
            
        }
    }
    
   
    return 0;
}
