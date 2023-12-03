#include <stdio.h>
#include <stdbool.h>

bool Contain369(int n){
    while(n>0){
        if(n%10 == 3 || n%10 == 6 || n%10 == 9){
            return true;
        }
        n /=10;
    }
    return false;
}


bool Is369Number(int n){
    return Contain369(n) || (n%3 == 0) ;
    // 둘 중에 하나라도 만족하면 true반환
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d", &a, &b);


    int cnt = 0;

    for(int i=a; i<=b; i++){
        if(Is369Number(i)){
            cnt++;
        }

    }

    printf("%d", cnt);

    return 0;
}