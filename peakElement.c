#include<stdio.h>
int peakElement(int arr[],int n){
	int i;
	if(n==1)
			return arr[n-1];
	for (i = 0; i < n; i++) {
		if(i==0 && arr[i]>=arr[i+1])
			return arr[i];
		else if(i!=n-1 && arr[i]>=arr[i+1] && arr[i]>=arr[i-1])
			return arr[i];
		else if(i==n-1 && arr[i]>=arr[i-1])
			return arr[i];
	}
	return -1;
}
int main(){
	int n,i;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter %d elements:\n", n);
	for (i = 0; i < n; i++) 
	scanf("%d", &arr[i]);
	int peak = peakElement(arr,n);
	if(peak==-1)
		printf("No Peak Element");
	else
		printf("Peak Element is %d",peak);
	return 0;
}
