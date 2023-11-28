#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    bool exist = false;
    scanf("%d %d", &a, &b);

    for(int i=a; i<=b; i++){
        // 1920과 2880의 공약수를 찾기 때문에 두 수에 모두 약분이 되어야한다.
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