#include<stdio.h>

int main(){
    int semester_num;
    printf("Enter semester number:");
    scanf("%d",&semester_num);

    if(semester_num == 0)
        printf("Invalid Semester");
    else if (semester_num>=1&&semester_num<=3)
        printf("Freshman");
    else if (semester_num>=4&&semester_num<=6)
        printf("Sophomore");
    else if (semester_num>=7&&semester_num<=9)
        printf("Junior");
    else if (semester_num>=10&&semester_num<=12)
        printf("Senior");
    else
        printf("You must graduate soon");

}