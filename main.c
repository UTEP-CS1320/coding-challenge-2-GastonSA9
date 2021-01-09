/*

    Blood Pressure Analysis Program

    The Program intakes two inputs form user -

    the SYSTOLIC and DIASTOLIC Blood Pressures.

    Program will then display the Blood Pressure status

    based on the INPUT data

*/

/* include header file */

#include<stdio.h>

/* main function */

int main()

{

    /* declaring variables */

    float systolicBP, /* variable to hold SYSTOLIC Blood Pressure */

          diastolicBP; /* variable to hold DIASTOLIC Blood Pressure */

    char repeat; /* variable to hold repeat the task */

    do

    {

        /* display program information to the user */

        printf("-------------------------------------------------------------\n");

        printf("Welcome to Blood Pressure Analysis Program\n");

        printf("You need to input your SYSTOLIC and DIASTOLIC Blood Pressures\n");

        printf("-------------------------------------------------------------\n");

        /* read systolic blood pressure */

        printf("Please Enter Your SYSTOLIC Blood Pressures: ");

        scanf("%f", &systolicBP);

        /* read diastolic blood pressure */

        printf("Please Enter Your DIASTOLIC Blood Pressures: ");

        scanf("%f", &diastolicBP);

        /* analyze input to display blood pressure status */

        /* if systolicBP< diastolicBP*/

        if(systolicBP<diastolicBP)

            printf("Error: SYSTOLIC Blood Pressure cannot be less than DIASTOLIC Blood Pressure\n");

        /* if systolicBP>180 and/or diastolicBP>120*/

        else if (systolicBP>180 || diastolicBP>120)

            printf("Your Blood Pressure Status: HYPERTENSIVE CRYSIS\n");

        /* if systolicBP>140 or diastolicBP>90*/

        else if (systolicBP>140 || diastolicBP>90)

            printf("Your Blood Pressure Status: STAGE 2: HYPERTENSION\n");

        /* if systolicBP is within 130-139 or diastolicBP is within 80-89*/

        else if (systolicBP>129 || diastolicBP>79)

            printf("Your Blood Pressure Status: STAGE 1: HYPERTENSION\n");

        /* if systolicBP is within 120-129 and diastolicBP < 80 */

        else if (systolicBP>119 && diastolicBP<80)

            printf("Your Blood Pressure Status: ELEVATED\n");

        /* if systolicBP < 120 and diastolicBP < 80 */

        else

            printf("Your Blood Pressure Status: NORMAL\n");

        /* ask the user whether to repeat the check */

        printf("-------------------------------------------------------------\n");

        printf("Do you want check with another Data (y/n)? ");

        scanf(" %c",&repeat);

    }

    while(repeat=='y' || repeat=='Y');

    printf("THANK YOU FOR USING THE SYSTEM");

    return 0;

}
