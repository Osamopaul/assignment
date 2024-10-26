#include<stdio.h>
#include<string.h>


struct Book{
	char title[30];
	char author[30];
	int publicationyear;
	char ISBN[13];
	float Price;
	
}book1;

int main()
{
/*	strcpy(book1.title,"introduction to c programming");
	strcpy(book1.author,"John Smith");
	book1.publicationyear = 2022;
	strcpy(book1.ISBN,"9880131103627");
	book1.Price = 49.99;
	
	printf("Title: %s\n",book1.title);
	printf("Author: %s\n",book1.author);
	printf("Publicationyear: %d\n",book1.publicationyear);
	printf("ISBN: %s\n",book1.ISBN);
	printf("Price: %.2f\n",book1.Price);*/

	//propmt the user to enter
	printf("\nEnter the title:");
	scanf("%[^\n]", book1.title);
	printf("\nEnter the Author:");
	scanf("%s", book1.author);
	printf("\nEnter the Publicationyear:");
	scanf("%d", &book1.publicationyear);
	printf("\nEnter ISBN:");
	scanf(" %[^\n]", book1.ISBN);
	//scanf(" %[^\n]", book1.ISBN); 
	printf("\nEnter the Price:");
	scanf("%f", &book1.Price);
	
	return 0;
}