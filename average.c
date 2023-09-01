#include <stdio.h>
#include <conio.h>
int main(){
    printf("\nenter data size \n");
    int n; //input for data size
    scanf("%d", &n);
    printf("\nenter data\n");
    float sum=0;
    float arr[n];
    float average;
    for(int i=0; i<n; i++){
        scanf("%f", &arr[i]);//declaring an array and taking input
        printf("%f ", arr[i]);
    }
for (int i=0; i<n; i++){
    sum = sum + arr[i];// loop for calculating average
}
average = sum/n;
printf("\nAverage = %f\n", average);

}