#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi;
	
	printf("Sayi Giriniz: ");
	scanf("%d",&sayi);
	
	if (sayi%2==0)
	{
		printf("Sayi Cifttir");
	}
	else 
	{
		printf("Sayi Tektir");
	}
	
	return 0;
}
