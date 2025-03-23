#include<stdio.h>
main()
{

    char sex,ms;
    int age;

    printf ("Enter age, sex, marital status:");

    scanf ("%d %c %c", &age, &sex, &ms);

    if (ms=='Married')

        printf ("The driver is insured");
    else
    {
        if (sex=='Male')

        {
            if (age>30)
                printf ("Driver is insured");

            else
                printf ("Driver is not insured");
        }
        else
        {
        if(sex=='Female')
        {

            if (age>25)
                printf ("Driver is insured");
            else
                printf ("Driver is not insured");

        }
        }
    }
}
