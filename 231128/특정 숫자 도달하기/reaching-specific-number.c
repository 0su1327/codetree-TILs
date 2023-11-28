#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int num[10];
    for(int i=0; i<10; i++){
        scanf("%d", &num[i]);
    }

    int sum = 0;
    int cnt = 0;

    for(int j=0; j<10; j++){
        if(num[j]<250){
            sum += num[j];
    
        }
        else{
            
            break;
        }
        cnt++;
    }

    printf("%d ", sum);
    printf("%.1lf", (double)sum/cnt);


    return 0;
}