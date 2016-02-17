//
//  main.cpp
//  10809
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <cstdio>
#include <cstring>
int main(int argc, const char * argv[]) {
    
    char a[101];
    int arr[26] = { -1 };
    scanf("%s",a);
    for(int i = 0;i<26;i++)arr[i] = -1;
    int len = strlen(a);
    for(int i=0;i<len;i++){
        if(arr[a[i]-'a']==-1)arr[a[i]-'a']=i;
    }
    for(int i=0;i<26;i++)
        printf("%d ",arr[i]);
    return 0;
}
