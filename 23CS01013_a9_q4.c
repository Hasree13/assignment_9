#include<stdio.h>
struct address{
    char street[50];
    char city[50];
    int zc;
};
struct person{
    char name[50];
    struct address addr;
};
int main(){
    struct person p;
    printf("Enter name: ");
    scanf(" %[^\n]",p.name);
    printf("Enter Address:\n");
    printf("Street: ");
    scanf(" %[^\n]",p.addr.street);
    printf("City: ");
    scanf(" %[^\n]",p.addr.city);
    printf("Zip code: ");
    scanf("%d",&p.addr.zc);

    printf("\nDetails of person:\n");
    printf("Name: %s",p.name);
    printf("\nAddress:\n");
    printf("Street: %s, City: %s, Zip code: %d",p.addr.street,p.addr.city,p.addr.zc);
    return 0;
}