//
//  main.cpp
//  Google_b
//
//  Created by 윤성빈 on 2016. 4. 10..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;
bool check(vector<char> t){
    for(int i = 0 ; i < t.size(); i++){
        if( t[i] == '-')
            return false;
    }
    return true;
}
int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        stack<char> st;
        vector<char> v;
        string line;
        cin >> line;
        for(int j = 0; j < line.length();j++)
            st.push(line.at(j));
        
        while(!st.empty()){
            char temp;
            if( st.top() == '+')
                temp = '-';
            else
                temp = '+';
            v.push_back(temp);
            st.pop();
        }
        if( v.size() == 1){
            if(v[0] == '-') cout << "0\n";
            else cout << "1\n";
        }else {
            for(int j = 1;j<v.size();j++){
                if( v[j-1] != v[j]){
                    for(int k = 0; k<j;k++){
                        if(v[k] == '+')
                            v[k] = '-';
                        else
                            v[k] = '+';
                    }
                }
                if(check(v)) {
                    cout << j << "\n";
                    break;
                }
            }
        }
    }
    
    return 0;
}
