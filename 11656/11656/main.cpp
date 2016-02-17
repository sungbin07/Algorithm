//
//  main.cpp
//  11656
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

struct SuffixComparator {
    const string& s;
    SuffixComparator(const string& s) : s(s) {}
    bool operator () (int i , int j) {
        return strcmp(s.c_str()+i,s.c_str()+j) <0;
    }
};

vector<int> getSuffixArrayNaive(const string& s ){
    
    vector<int> perm;
    for(int i=0;i<s.size(); ++i) perm.push_back(i);
    sort(perm.begin(),perm.end(),SuffixComparator(s));
    return perm;
    
}

int main(int argc, const char * argv[]) {

    string s;
    getline(cin,s);

    vector<int> a = getSuffixArrayNaive(s);
  
    for(vector<int>::size_type i =0; i<a.size();++i){

        for(int j = a[i];j<s.size();j++)
            cout<<s[j];
        cout<<endl;
        
    }
    return 0;
}
