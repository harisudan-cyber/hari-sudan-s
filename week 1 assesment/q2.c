#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d", &n);

    int arr[n]; 
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    int sum=0;
    for(j=0;j<n;j++){
    	sum=sum+arr[j];
	}
    int avg= sum/n;
    printf("Sum = %d\n", sum);
    printf("Average = %d", avg);
    return 0;
}

