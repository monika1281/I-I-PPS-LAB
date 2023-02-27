#include<stdio.h>
int main(){
	struct student {
		int rollnum;
		char name[50];
		char branch[20];
		int marks;
	}s[5];
	int i;
	printf("Enter the information of students:");
	for(i=0;i<5;i++)
	{
		printf("\nEnter the information of roll number %d\n",i+1);
		s[i].rollnum=i+1;
		printf("Enter name of the student:");
		scanf("%s",s[i].name);
		printf("Enter Branch:");
		scanf("%s",s[i].branch);
		printf("Enter PPS marks:");
		scanf("%d",&s[i].marks);
	}
	printf("Displaying Student Details:\n");
	for(i=0;i<5;i++)
	{
	 printf("Roll Number:%d\nStudent Name: %s\nBranch:%s\nMarks:%d\n",s[i].rollnum,s[i].name,s[i].branch,s[i].marks);
	}
	return 0;
}
------------------------------------------------------------------------
output:
Enter the information of students:
Enter the information of roll number 1
Enter name of the student:Monika
Enter Branch:IT
Enter PPS marks:70

Enter the information of roll number 2
Enter name of the student:Anamitra
Enter Branch:CSE
Enter PPS marks:84

Enter the information of roll number 3
Enter name of the student:Chakrika
Enter Branch:EEE
Enter PPS marks:69

Enter the information of roll number 4
Enter name of the student:Vishruthi
Enter Branch:AIML
Enter PPS marks:73

Enter the information of roll number 5
Enter name of the student:Keerthana
Enter Branch:IT
Enter PPS marks:76  
Displaying Student Details:
Roll Number:1
Student Name: Monika
Branch:IT
Marks:70
Roll Number:2
Student Name: Anamitra
Branch:CSE
Marks:84
Roll Number:3
Student Name: Chakrika
Branch:EEE
Marks:69
Roll Number:4
Student Name: Vishruthi
Branch:AIML
Marks:73
Roll Number:5
Student Name: Keerthana
Branch:IT
Marks:76

--------------------------------
