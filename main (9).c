/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char input;
    float first, second;
    float kmstoMiles = 0.621371;
    float inchesToFootr = 0.0833333;
    float cmstoInches = 0.393701;
    float poundtokgs = 0.453592; // Corrected conversion factor
    float inchestoMeter = 0.0254;

    while (1)
    {
            printf("Enter the input character q to quit\n  1. kmstoMile\n  2. inchestoFootr\n  3. cmstoInches\n  4. poundtokgs\n  5. inchestoMeters\n");
        scanf(" %c", &input); // Added space before %c to consume any trailing newline character

        if (input == 'q')
        {
            printf("Quitting the program\n");
            break;
        }

        switch (input)
        {
            case '1':
                printf("Enter value in kilometers: ");
                scanf("%f", &first);
                second = first * kmstoMiles;
                printf("%f kms is equal to %f miles\n", first, second);
                break;

            case '2':
                printf("Enter value in inches: ");
                scanf("%f", &first);
                second = first * inchesToFootr;
                printf("%f inches is equal to %f feet\n", first, second);
                break;

            case '3':
                printf("Enter value in centimeters: ");
                scanf("%f", &first);
                second = first * cmstoInches;
                printf("%f cms is equal to %f inches\n", first, second);
                break;

            case '4':
                printf("Enter value in pounds: ");
                scanf("%f", &first);
                second = first * poundtokgs;
                printf("%f pounds is equal to %f kgs\n", first, second);
                break;

            case '5':
                printf("Enter value in inches: ");
                scanf("%f", &first);
                second = first * inchestoMeter;
                printf("%f inches is equal to %f meters\n", first, second);
                break;

            default:
                printf("Invalid input\n");
                break;
        }
    }

    return 0;
}
