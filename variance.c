#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    printf("\nenter data size \n");
    int n; //input for data size
    scanf("%d", &n);
    printf("\nenter data\n");
    float sum=0, var=0;
    float arr[n], dev[n], v[n];
    float avg, variance, SD;
    for(int i=0; i<n; i++){
        scanf("%f", &arr[i]);//declaring an array and taking input
        printf("%f ", arr[i]);
    }
for (int i=0; i<n; i++){
    sum = sum + arr[i];// loop for calculating average
    avg = sum/n;
}
 for (int i=0; i<n; i++){
    dev[i] = arr[i] - avg; // loop for variance
    v[i] = dev[i]*dev[i];
    var = var + v[i];
    variance = var/n;
    }
SD = sqrt(variance); //Formula for standard deviation
printf("\nAverage = %f\n", avg);
printf("\nVariance = %f\n", variance);
printf("\nStandard Deviation = %f\n", SD);

}