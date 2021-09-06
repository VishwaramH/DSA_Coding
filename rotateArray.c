// Time complexity = O(n)
#include<stdio.h>
#include<stdlib.h>

int main() {
    int length, rotateBy;
    scanf("%d",&length);
    int *array = (int *)(malloc(length * sizeof(int)));
    int *rotatedArray = (int *)malloc(length * sizeof(int));
    for(int index = 0; index < length; index++) {
        scanf("%d",&array[index]);
    }
    scanf("%d",&rotateBy);
    for(int ind = 0; ind < length; ind++) {
        rotatedArray[ind] = array[(ind+rotateBy)%length];
        printf("%d ",rotatedArray[ind]);
    }
    
}
