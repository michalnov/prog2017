#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//void reverse(int arr[D]);

#define D 30

int main(){
	srand(time(NULL));
	int fi[D], suma=0, even=0, one=0, max = 0, min = 0, nulove = 0, var1=0, var2=0;
	int brr[D], crr[D], drr[D], err[D], frr[D];
	//fi[0] = 1;
	//fi[1] =1;
	for(int i = 0; i < D; i++){
		fi[i] = rand()%100;
		brr[i] = fi[i];
		crr[D -1 - i] = fi[i];
		drr[i] = rand()%100;
		err[i] = fi[i] + drr[i];
		frr[i] = rand()%2;
		suma = suma + fi[i];
		//printf("%d ", fi[i]);
		if(fi[i] % 2 == 0){
			even++;
		}
		if(fi[i] <= 9){
			one++;
		}
		else{
			var1=fi[i]/10;
			var2=fi[i]%10;
			if(var2 > var1){
				printf("%d \n", fi[i]);
			}
		}
		if(fi[i] >= 10 && fi[i] % 10 == 0 || fi[i] == 0){nulove++;}
		if(fi[i] > max || fi[i] < min || i ==0){
			if(i == 0){min = fi[i]; max = fi[i];}
			else if(fi[i] < min){min = fi[i];}
			else if(fi[i] > max){max = fi[i];}
		}
	}
//	for(int i = 0; i < D; i++){
//		printf("\n%d \n", fi[i]);
//	}
	printf("\n %f", ((float)suma/D));
	printf("\n %d numbers are even. %d are odd", even, D - even);
	printf("\n %d numbers are one digit numbers", one);
	printf("\n %d numbers are two digit numbers", D - one);
	printf("\n %d numbers ending by null", nulove);
	printf("\n %d is Max. %d is min.", max, min);
	//reverse(fi[0]);
	printf("\n");
	for(var1 = D-1; var1 >= 0; var1--)
	{printf("%d ", fi[var1]);}
	printf("\n");
	for(var1 = 0; var1 < D; var1+=2)
	{printf("%d ", fi[var1]);}
	printf("\n");
	for(var1 = 0; var1 < D; var1++)
	{	if(var1%5 == 4){fi[var1] = (fi[var1]*(-1));}
		printf("%d ", fi[var1]);}
	printf("\n\n\n");
	for(var1 = 0; var1 < D; var1++)
	{printf("%d ", brr[var1]);}
	printf("\n\n\n");
	for(var1 = 0; var1 < D; var1++)
	{printf("%d ", crr[var1]);}
	printf("\n\n\n");
	for(var1 = 0; var1 < D; var1++)
	{printf("%d ", drr[var1]);}
	printf("\n\n\n");
	for(var1 = 0; var1 < D; var1++)
	{printf("%d ", err[var1]);}
	printf("\n\n\n");
	for(var1 = 0; var1 < D; var1++)
	{printf("%d ", frr[var1]);}
	
}

/*
void reverse(int arr[D]){
	for(int i = D-1; i >= 0; i--)
	{printf("%d", arr[i]);}
}*/
