#include<stdio.h>
struct date{
    int day;
    int month;
    int year;
};
int compare(struct date x,struct date y);

int main(){
    struct date d1,d2;
    printf("Enter the first date in 'date month year' format: ");
    scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
    printf("Enter the second date in 'date month year' format: ");
    scanf("%d %d %d",&d2.day,&d2.month,&d2.year);
    int c=compare(d1,d2);
    switch (c){
        case 1:
            printf("First date is later");
            break;
        case -1:
            printf("First date is earlier");
            break;
        case 0:
            printf("Both dates are same");
            break;
    }
    return 0;

}

int compare(struct date x,struct date y){
    if (x.year>y.year)
        return 1;
    else if (x.year<y.year)
        return -1;
    else{
        if (x.month>y.month)
            return 1;
        else if (x.month<y.month)
            return -1;
        else{
            if (x.day>y.day)
                return 1;
            else if (x.day<y.day)
                return -1;
            else
                return 0;
        }
    }

}