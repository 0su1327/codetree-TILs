#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    bool exist = false;
    scanf("%d %d", &a, &b);

    for(int i=a; i<=b; i++){
        if(1920%i==0 && 2880%i==0){
            exist = true;
            break;
        }
    }

    if(exist){
        printf("%d", 1);
    }
    else{
        printf("%d", 0);
    }
    return 0;
}