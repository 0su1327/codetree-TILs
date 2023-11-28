#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int check = 0;

    for(int i=2; i<n/2; i++){
        if(n%i==0){
            check = 1;
        }
        else{
            continue;
        }
    }

    if (check==0){
        printf("N");
    }
    else{
        printf("C");
    }
    return 0;
}