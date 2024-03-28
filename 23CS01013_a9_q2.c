#include<stdio.h>
struct student{
    int roll;
    char name[50];
    char addr[200];
    int age;
    int marks;
};
void input(struct student s[],int n);
void print(struct student s[],int n);

int main(){
    struct student s[2];
    input(s,2);
    printf("\nDetails of students entered are:\n");
    print(s,2);
    return 0;
}

void input(struct student s[],int n){
    struct student *t=s;
    for (int i=0;i<n;i++){
        printf("\nDetails of student %d",i+1);
        printf("\nRoll no.: ");
        scanf("%d",&t->roll);
        printf("Name: ");
        scanf(" %[^\n]",t->name);
        printf("Address: ");
        scanf(" %[^\n]",t->addr);
        printf("Age: ");
        scanf("%d",&t->age);
        printf("Marks: ");
        scanf("%d",&t->marks);
        t++;
    }
}

void print(struct student s[],int n){
    for (int i=0;i<n;i++){
        printf("\n\nStudent %d",i+1);
        printf("\nRoll no.: %d",s[i].roll);
        printf("\nName: %s",s[i].name);
        printf("\nAddress: %s",s[i].addr);
        printf("\nAge: %d",s[i].age);
        printf("\nMarks: %d",s[i].marks);
    }
}