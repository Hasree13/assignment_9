#include<stdio.h>
#define N 2
struct CourseRecord{
    char fname[25];
    char lname[25];
    int roll;
    char dept[20];
    char course[10];
    int marks[3];
};
void input(struct CourseRecord *s,int n);
float avg(struct CourseRecord s[],int n,int test);
void res(struct CourseRecord s[],int n,int r);

int main(){
    struct CourseRecord student[N];
    int n,r;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    input(student,n);
    for (int i=0;i<3;i++){
        printf("\nAverage marks of the class for test %d = %.2f",i+1,avg(student,n,i));
    }
    printf("\n\nEnter the roll number of student: ");
    scanf("%d",&r);
    res(student,n,r);
    return 0;
}

void input(struct CourseRecord *s,int n){
    for (int i=0;i<n;i++){
        printf("\nEnter details of student %d\n",i+1);
        printf("Enter first name: ");
        scanf(" %[^\n]",s->fname);
        printf("Enter last name: ");
        scanf(" %[^\n]",s->lname);
        printf("Enter roll no.: ");
        scanf(" %d",&s->roll);
        printf("Enter department: ");
        scanf(" %[^\n]",s->dept);
        printf("Enter course code: ");
        scanf(" %[^\n]",s->course);
        for (int j=0;j<3;j++){
            printf("Enter marks of test %d: ",j+1);
            scanf(" %d",&s->marks[j]);
        }
        s++;
    }
}

float avg(struct CourseRecord s[],int n,int test){
    float sum=0;
    for (int i=0;i<n;i++){
        sum+=s[i].marks[test];
    }
    return (sum/n);
}

void res(struct CourseRecord s[],int n,int r){
    int p;
    for (p=0;p<n;p++){
        if (s[p].roll==r)
        break;
    }
    if (p==n){
        printf("\nRoll no. of student not found\n");
        return;
    }
    printf("\nResults of student are:");
    for (int i=0;i<3;i++){
        if (s[p].marks[i]>=35)
            printf("\nTest %d: Pass",i+1);
        else
            printf("\nTest %d: Fail",i+1);
    }
}