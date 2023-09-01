#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
    printf("enter data size\n");
    int n; //input and declaration for the whole program.
    scanf("%d", &n);
    printf("\nenter data\n");
    float sum=0, var=0, mom1=0, mom3=0;
    float avg, variance, sd, moment1, moment3;
    float arr[n], dev[n], v[n], d1[n], d2[n], m3[n], d[n];
    for(int i=0; i<n; i++){
      //taking the data as an array to accomodate multiple inputs 
        printf("%f ", arr[i]);
         scanf("%f", &arr[i]); 
        sum = sum + arr[i];
        avg=sum/n;  //for average 
    }
    for (int i=0; i<n; i++){
d[i] = arr[i] - avg;
mom1 = mom1 + d[i]; // loop to calculate the first moment about mean
moment1 = mom1/n;
    }
    for (int i=0; i<n; i++){
        dev[i] = arr[i] - avg; // loop for variance
        v[i] = dev[i]*dev[i];
        var = var + v[i];
        variance = var/n;
    }
    for (int i=0; i<n; i++){
        d2[i] = arr[i] - avg;
        m3[i] = d2[i]*d2[i]*d2[i];
        mom3 = mom3 + m3[i]; //loop to calculate third moment about mean
        moment3 = mom3/n;
    }

    printf("\nAverage = %f\n", avg); //output of the whole program
    printf("\nVariance = %f\n", variance);
    sd = sqrt(variance);
    printf("\nStandard Deviation = %f\n", sd);
    printf("\nFirst moment about mean = %f\n", moment1);
    printf("\nSecond moment about mean = %f \n", variance);
    printf("\nThird moment about mean = %f\n", moment3);

}