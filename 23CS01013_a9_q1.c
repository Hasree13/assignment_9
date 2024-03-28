#include<stdio.h>
int main(){
    struct company{
        char name[50];
        char addr[200];
        char phone[11];
        int noe;
    } c;

    printf("Enter the name of company: ");
    gets(c.name);
    printf("Enter address: ");
    gets(c.addr);
    printf("Enter phone number: ");
    gets(c.phone);
    printf("Enter the number of employees: ");
    scanf(" %d",&c.noe);

    printf("\nDetails of the company are");
    printf("\nName: %s",c.name);
    printf("\nAddress: %s",c.addr);
    printf("\nPhone: %s",c.phone);
    printf("\nNo. of employees: %d",c.noe);
    return 0;
}