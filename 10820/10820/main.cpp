//
//  main.cpp
//  10820
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    string s;
   while(getline(cin,s)){
       int small =0,large=0,num=0,space=0;
       for(int i = 0; i <s.size();i++){
           if(s[i]-32 == 0) space++;
           else if(16<=s[i]-32 && s[i]-32<=25) num++;
           else if(33<=s[i]-32 && s[i]-32 <=58) large++;
           else small++;
       }
       cout << small <<" " << large<<" " <<num<<" "<<space<<endl;
   }
       return 0;
}
