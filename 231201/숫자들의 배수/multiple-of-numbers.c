#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int cnt = 0;

    scanf("%d", &arr[0]);

    for(int i = 1; i < 10; i++){
        arr[i] = arr[i-1] + arr[0];
    }

    for(int i =0; i < 10; i++){
        printf("%d ", arr[i]);

        if(arr[i] % 5 == 0){
            cnt ++;
        }
        if(cnt == 2)
            break;
    }

    return 0;
}