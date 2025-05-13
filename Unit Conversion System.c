//Unit Conversion System
#include <stdio.h>
int main()
{
    char category;
    int tempChoice,userF,userC;
    int energyChoice,userJoul,userCalorie;
    int lengthChoice,userInch,userFeet,userMile;
    int currencyChoice,userUSDtoEuro,userUSDtoTAKA,userRUPEEtoTAKA;
    int massChoice,userPounds,userKilogram,userGram;

    float fahrenheitToCelcius,celciusToFahrenheit;
    float joulToCalorie,calorieToJoul;
    float inchToMeter,feetToMeter,mileToKilometer;
    float USDtoEURO,USDtoTAKA,RUPEEtoTAKA;
    float poundsToKilogram,kilogramToGram;

    printf(" \t\t\t\t\t Welcome to Unit Conversion System! \n\n");
    printf("Explore the conversion options provided in this list: \n\n");
    printf("Temperature(T)\n\nEnergy(E)\n\nLength(L)\n\nCurrency(C)\n\nMass(M) \n\n");
    printf("Please enter the category you want to convert: \n\n");
    scanf("%c",&category);

    //Temperature Conversion.
    if(category == 'T'|| category == 't')
    {
        printf("\nWelcome to Temperature Converter! \n\n");
        printf("Here is a list of conversions to choose from: \n");
        printf("Enter 1 : Fahrenheit to Celsius. \n");
        printf("Enter 2 : Celsius to Fahrenheit. \n");
        scanf("%d",&tempChoice);

        if(tempChoice == 1)
        {
            printf("Enter the Fahrenheit degree: \n");
            scanf("%d",&userF);
            fahrenheitToCelcius = ((userF-32) * (5.0/9.0));
            printf("Celsius: %.2f",fahrenheitToCelcius);
        }
        else if(tempChoice == 2)
        {
            printf("Enter the Celsius degree: \n");
            scanf("%d",&userC);
            celciusToFahrenheit = ((9.0/5.0)*userC + 32);
            printf("Fahrenheit: %.2f",celciusToFahrenheit);
        }
       else
        printf("Sorry !!! an error occurred.\nPlease input the correct choice.\n");
    }

       //Energy Conversion.
       else if(category == 'E'|| category == 'e')
    {
        printf("\nWelcome to Energy Conversion! \n\n");
        printf("Here is a list of conversions to choose from: \n");
        printf("Enter 1 : Joul to Calorie. \n");
        printf("Enter 2 : Calorie to Joul.\n");

        scanf("%d",&energyChoice);

        if(energyChoice == 1)
        {
            printf("Enter the Joul amount: \n");
            scanf("%d",&userJoul);

            joulToCalorie = userJoul * 0.2389;
            printf("Calorie: %.2f",joulToCalorie);
        }
        else if(energyChoice == 2)
        {
            printf("Enter the Calorie amount: \n");
            scanf("%d",&userCalorie);

            calorieToJoul = userCalorie * 4.2;
            printf("Joul : %.2f",calorieToJoul);
        }
        else
            printf("Sorry !!! an error occurred.\nPlease input the correct choice.\n");
    }

     //Length Conversion.
    else if(category == 'L'|| category == 'l')
    {
        printf("\nWelcome to Length Converter! \n\n");
        printf("Here is a list of conversions to choose from: \n");
        printf("Enter 1 : Inch to Meter. \n");
        printf("Enter 2 : Feet to Meter.\n");
        printf("Enter 3 : Mile to Kilometer.\n");
        scanf("%d",&lengthChoice);

        if(lengthChoice == 1)
        {
            printf("Enter the inch amount: \n");
            scanf("%d",&userInch);

            inchToMeter = userInch * 0.0254;
            printf("Meter: %.2f",inchToMeter);
        }
        else if(lengthChoice == 2)
        {
            printf("Enter the feet amount: \n");
            scanf("%d",&userFeet);

            feetToMeter = userFeet * 0.305;
            printf("Meter: %.2f",feetToMeter);
        }
        else if(lengthChoice == 3)
        {
            printf("Enter the mile amount: \n");
            scanf("%d",&userMile);

            mileToKilometer = userMile * 1.609;
            printf("Kilometer: %.2f",mileToKilometer);
        }
       else
        printf("Sorry !!! an error occurred.\nPlease input the correct choice.\n");
    }

    //Currency Conversion.
    else if(category == 'C'|| category =='c')
    {
        printf("\nWelcome to Currency Converter! \n\n");
        printf("Here is a list of conversions to choose from: \n");
        printf("Enter 1 : USD to Euro. \n");
        printf("Enter 2 : USD to Taka. \n");
        printf("Enter 3 : Rupee to Taka. \n");
        scanf("%d",&currencyChoice);

        if(currencyChoice == 1)
        {
            printf("Enter the USD amount: \n");
            scanf("%d",&userUSDtoEuro);

            USDtoEURO = userUSDtoEuro * 0.91;
            printf("Euro: %.2f",USDtoEURO);
        }
        else if(currencyChoice == 2)
        {
            printf("Enter the USD amount: \n");
            scanf("%d",&userUSDtoTAKA);

            USDtoTAKA= userUSDtoTAKA * 110.27;
            printf("TAKA: %.2f",USDtoTAKA);
        }
        else if(currencyChoice == 3)
        {
            printf("Please enter the RUPEE amount: \n");
            scanf("%d",&userRUPEEtoTAKA);

            RUPEEtoTAKA = userRUPEEtoTAKA * 1.32;
            printf("TAKA: %.2f",RUPEEtoTAKA);
        }
        else
            printf("Sorry !!! an error occurred.\nPlease input correct choice.\n");
    }

    //Mass Conversion.
    else if(category == 'M'|| category == 'm')
    {
        printf("\nWelcome to Mass Converter! \n\n");
        printf("Here is a list of conversions to choose from: \n");
        printf("Enter 1 : Pounds to Kilogram. \n");
        printf("Enter 2 : Kilogram to Grams. \n");
        scanf("%d",&massChoice);

        if(massChoice == 1)
        {
            printf("Enter the pounds amount: \n");
            scanf("%d",&userPounds);

            poundsToKilogram = userPounds * 0.454;
            printf("Kilogram: %.2f",poundsToKilogram);
        }
        else if(massChoice == 2)
        {
            printf("Enter the kilogram amount: \n");
            scanf("%d",&userKilogram);

            kilogramToGram = userKilogram * 1000;
            printf("Gram: %.2f",kilogramToGram);
        }
        else
        printf("Sorry!!! an error occurred.\nPlease input the correct choice.\n");
    }
    return 0;
}
