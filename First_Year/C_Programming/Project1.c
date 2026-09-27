#include<stdio.h>

int main(){
    char name[50];
    int rollno,sub1,sub2,sub3,avg,total;
    printf("Enter your first name :");
    scanf("%s",&name);
    printf("Enter your roll no. :");
    scanf("%d",&rollno);
    printf("Enter marks of first subject :");
    scanf("%d",&sub1);
    printf("Enter marks of second subject :");
    scanf("%d",&sub2);
    printf("Enter marks of third subject :");
    scanf("%d",&sub3);
    total=sub1+sub2+sub3;
    avg=(total)/3;
    printf("Name :%s\nRollNo :%d\nAvg :%d\n", name, rollno, avg);
    if (avg >= 90) {
        printf("Grade: A\n");
    } else if (avg >= 80) {
        printf("Grade: B\n"); 
    } else if (avg >= 70) {
        printf("Grade: c\n"); 
    } else {
        printf("Grade: d\n");
    }   

    return 0;
}