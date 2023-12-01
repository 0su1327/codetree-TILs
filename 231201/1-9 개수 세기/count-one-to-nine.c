#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    scanf("%d", &n);

    int arr[n];
    int arr_count[10]= {0, };

    for(int i=0; i<n; i++){
        // 띄어쓰기랑 줄바꿈은 동일 형식으로 받는다.
        scanf("%d", &arr[i]);
        arr_count[arr[i]] ++;
    }

    for(int i =1; i<sizeof(arr_count)/sizeof(int); i++){
        printf("%d\n", arr_count[i]);
    }


    return 0;
}