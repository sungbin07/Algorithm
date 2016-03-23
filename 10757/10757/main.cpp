//
//  main.cpp
//  10757
//
//  Created by 윤성빈 on 2016. 3. 22..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <cstdio>
#define max(a,b) a>b? a:b
int main(int argc, const char * argv[]) {
    
    char a[100000];
    char b[100000];
    int c[1000000];
    
    scanf("%s %s",&a,&b);
    
    int i =0;
    while(1){
        if(a[i] == '\0')
            break;
        i++;
    }

    int j =0;
    while(1){
        if(b[j] == '\0')
            break;
        j++;
    }
    i--;
    j--;
    int ma = max(i,j);
    int index;
    index =ma;

    int carry =0;
    while( i >=0 && j>=0){
        int temp = (a[i]-'0') + (b[j] -'0');
        
        int x = (temp + carry) / 10;
        int y = (temp + carry) % 10;
        
        carry = x;
        c[index] = y;
        index--;
        i--;
        j--;
        
    }
    
    if(i>j){
        while(i>=0){
            int temp = a[i]-'0';
            c[index] = (temp+carry) % 10;
            if((temp+carry) >= 10)
                carry = 1;
            else
                carry = 0;
            index--;
            i--;
        }
    } else if ( i < j ) {
        while(j>=0){
            int temp = b[j]-'0';
            c[index] = (temp+carry) % 10;
            if((temp+carry) >= 10)
                carry = 1;
            else
                carry = 0;
            index--;
            j--;
        }
    }
    
    if(carry){
        printf("1");
    }
    
    for(int i = 0;i<=ma;i++)
        printf("%d",c[i]);
    
    
    
    return 0;
}
