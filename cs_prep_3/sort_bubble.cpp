#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	srand(time(NULL));
	int batas;
	printf("Batas array = ");
	scanf("%d", &batas);
	
	int arr[batas+1];
	
	printf("isi array sebelum sort:\n");
	for(int a=1; a<=batas; a++){
		arr[a] = rand()%10 + 1;
		printf("%d ", arr[a]);
	}
	
	printf("\n");
	for(int a=1; a<=batas; a++){
		for(int j=1; j<=batas-1; j++)
			if( arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
	}
	printf("\narray setelah di sort:\n");
	for(int a=1; a<=batas; a++)
		printf("%d ", arr[a]);
	
}
