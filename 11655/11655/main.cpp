//
//  main.cpp
//  11655
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//


#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    
    while(getline(cin,s)){
        for(int i = 0; i <s.size();i++){
            if(65<=s[i]-0 && s[i]-0 <=90) {
                if(s[i]+13>90){
                    int t = s[i]+13-90+64;
                    s[i] = char(t);
                }else {
                    s[i] = char(s[i]+13);
                }
             
            }
            else if(97<=s[i]-0 && s[i]-0 <=122 ){
                if(s[i]+13>122){
                    int t = s[i]+13 -122 +96;
                    s[i] = char(t);
                }else{
                    s[i] = char(s[i]+13);
                }

                
            }
        }
        cout <<s;
    }
    return 0;
}
