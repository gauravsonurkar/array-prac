// THE ARRAY PRACTICE PROGRAM

// #include <stdio.h>
// int main()
// {
//     int marks[2][4] = {{23, 45, 355, 23}, {25, 27, 86, 45}};

//     // int marks[4];
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     printf("Enter the value of thr %d element  ", i);

//     //     scanf("%d", &marks[i]);
//     // }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             //printf("the value of the %d , %d element is %d\n ", i, j, marks[i][j]);

//             printf("%d ",marks[i][j]);
//         }
//         printf("\n");
//     }
// }

// print the marks obtained by a student in five test
/*
#include <stdio.h>
int main()
{
    int marks[] = {95, 88, 90, 67, 89};
    printf("marks obtained by the student in five test \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", marks[i]);
    }

    return 0;
}*/

//************************************************************************

//print the average marks obtained by a student in five test

/*#include <stdio.h>
int main()
{
    double marks[5], avg, sum = 0.0;
    printf("Enter the five test marks .. =");
    for (int i = 0; i < 5; i++)
    {
        scanf("%lf ", &marks[i]);
    }
    for (int j = 0; j < 5; j++)

    {

        printf("%0.1lf ", marks[j]);
        sum += marks[j];
    }

    avg = sum / 5.0;

    printf(" \nThe Average of five test marks is %0.2lf", avg);
}*/

//*****************************************************************************************

// here is the source code of the c program to print a string using an array

/*#include <stdio.h>
#include <string.h>
int main()
{
    char arr[] = "my git hub";
    int i = 0;

    int len = strlen(arr); //calculating the size of the string

    while (i < len)
    {
        printf("%c", arr[i]);
        i++;
    }
}*/

//********************************************************************************

/*#include <stdio.h>

int main()
{
    int size, i = 0;
    printf("Enter the size of the array.");
    scanf("%d", &size);
    char arr[size];
    char temp;
    scanf("%c", &temp);

    printf("Enter the string :");
    scanf("%[^\n]", arr);
    while (arr[i] != '\0')
    {
        printf("%c", arr[i]);
        i++;
    }

    return 0;
}
*/

//find the sum of the negative and positive num in array

/*#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array =");
    scanf("%d", &size);
    double arr[size];
    double sum_neg = 0.0, sum_pos = 0.0;

    printf("Enter the element of the array \n");
    for (int i; i < size; i++)
    {
        scanf("%lf", &arr[i]);
    }
    for (int j; j < size; j++)
    {
        if (arr[j] > 0)
        {
            sum_pos += arr[j];
        }

        else
            sum_neg += arr[j];
    }
    printf("sum of the postive number is %0.2lf\n", sum_pos);
    printf("sum of the postive number is %0.2lf\n", sum_neg);
}
*/

//sum of the N number of the array

/*#include <stdio.h>
int main()
{

    int size;
    int arr[size], sum = 0;
    printf("Enter the size of the array");
    scanf("%d", &size);
    printf("Enter the element of the array\n =");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < size; j++)
    {
        sum += arr[j];
    }
    printf("sum of the %d number = %d", size, sum);
}*/