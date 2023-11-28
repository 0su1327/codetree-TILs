#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int num;
    int arr[num];
    scanf("%d", &num);

    
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<num; i++){
        if(arr[i]%2 == 0){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}