// c structers
#include <stdio.h>
#include <string.h>

struct student {
	int phone;
	;float marks;
	char regNo[20]
	;char email[25]
	;char name[25]
	;int id[9] 
	
;} student1, student2

;int main ()
{
	//struct student1
	strcpy(student1.name, "paulosamo");
	strcpy(student1.email, "paulosamo1902@gmail.com");
	strcpy(student1.regNo, "CT102/G/21877/24");
	student1.phone = 0110612124;
	student1.marks = 97.5;
	
	printf("name %s \n", student1.name);
	printf("email %s \n", student1.email);
	printf("regNo %s \n", student1.regNo);
	printf("marks %f \n", student1.marks);
	printf("phone %d \n", student1.phone);
	return 0;
}