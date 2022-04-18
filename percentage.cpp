#include <stdio.h>

int main(){
    
    int mark[5];
    int sum = 0;

    printf("Enter marks in 5 subjects: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", mark[i]);
        sum = mark[i];
    }

    int percent = (sum / 5) * 100;
    printf("The percentage is: %d", percent);
}