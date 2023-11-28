#include <stdio.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int num;
    
    scanf("%d", &num);

    int *arr = (int *)malloc(num * sizeof(int));
    
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