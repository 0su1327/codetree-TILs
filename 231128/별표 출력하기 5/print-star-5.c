#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int num;

    scanf("%d", &num);

    for(int i=num; i>=1; i--){

        for(int j=i; j>=1; j--){

            for(int k= i; k>=1; k--){

                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}