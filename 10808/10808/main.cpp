//
//  main.cpp
//  10808
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <cstdio>
#include <cstring>
int main(int argc, const char * argv[]) {

    char a[101];
    int arr[26] = { 0 };
    scanf("%s",a);
    int len = strlen(a);
    for(int i=0;i<len;i++){
        arr[a[i]-'a']++;
    }
    for(int i=0;i<26;i++)
        printf("%d ",arr[i]);
    return 0;
}
