#include<stdio.h>

int main()
{
    int semester_num;
    printf("Enter semester number:");
    scanf("%d", &semester_num);

    switch (semester_num == 0)
    {
    case 1:
        printf("Invalid Semester");
        break;
    case 0:
        switch (semester_num >= 1 && semester_num <= 3)
        {
        case 1:
            printf("Freshman");
            break;
        case 0:
            switch (semester_num >= 4 && semester_num <= 6)
            {
            case 1:
                printf("Sophomore");
                break;
            case 0:
                switch (semester_num >= 7 && semester_num <= 9)
                {
                case 1:
                    printf("Junior");
                    break;
                case 0:
                    switch (semester_num >= 10 && semester_num <= 12)
                    {
                    case 1:
                        printf("Senior");
                        break;
                    default:
                        printf("You must graduate soon");
                        break;
                    }
                }
            }
        }
    }
}