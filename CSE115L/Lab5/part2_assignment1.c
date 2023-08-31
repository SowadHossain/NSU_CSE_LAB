#include <stdio.h>

int main()
{
    float salary, tax;

    printf("Enter amount of Salary");
    scanf("%f", &salary);

    switch (salary >= 0 && salary < 15000){
    case 1:
        tax = 0 + (15.0/100 * (salary - 0));break;
    case 0:
        switch (salary >= 15000 && salary < 30000){
        case 1:
            tax = 2250 + (18.0/100 * (salary - 15000));break;
        case 0:
            switch (salary >= 30000 && salary < 50000){
            case 1:
                tax = 5400 + (22.0/100 * (salary - 30000));break;
            case 0:
                switch (salary >= 50000 && salary < 80000){
                case 1:
                    tax = 11000 + (27.0/100 * (salary - 50000));break;
                case 0:
                    switch (salary >= 80000 && salary < 150000){
                    case 1:
                        tax = 21600 + (33.0/100 * (salary - 80000));break;
                    }}}}
    }
    printf("Tax = %f",tax);    
}