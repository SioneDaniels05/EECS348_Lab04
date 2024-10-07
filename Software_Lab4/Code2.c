/* Sione Daniels
 * EECS348 - Friday - 6pm
 * 10/04/2024
 * KUID: 3133752
 * Purpose: To read a value representing temperature and generate a report */

#include <stdio.h>
float fahrenheit;
float celsius;
float kelvin;

void categorize_celsius(float celsius)	
	{
	if (celsius <= 0)
		printf("\nTemperature category: Freezing\nWeather Advisory: Wear Cold clothes and stay warm");
	if (celsius > 0 && celsius <= 10)
                printf("\nTemperature category: Cold\nWeahter Advisory: Wear a thick jacket");
	if (celsius > 10 && celsius <= 25)
                printf("\nTemperature category: Comfortable\nWeahter Advisory: Comfertable Weather");
	if (celsius > 25 && celsius <= 35)
                printf("\nTemperature category: Hot\nWeather Advisory: Wear light clothes and wear sun protection");
	if (celsius > 35)
                printf("\nTemperature category: Extreme Heat\nWeather Advisory: Wear Exteme sun protection when outside and avoid the sun");
	}

void categorize_fahrenheit(float fahrenheit)
	{
	if (fahrenheit <= 32)
                printf("\nTemperature category: Freezing\nWeather advisory: Wear Cold clothes and stay warm");
        if (fahrenheit > 32 && fahrenheit <= 50)
                printf("\nTemperature category: Cold\nWeahter advisory: Wear a thick jacket");
        if (fahrenheit > 50 && fahrenheit <= 77)
                printf("\nTemperature category: Comfortable\nWeahter advisory: Comfertable Weather");
        if (fahrenheit > 77 && fahrenheit <= 95)
                printf("\nTemperature category: Hot\nWear light clothes and wear sun protection");
        if (fahrenheit > 95)
                printf("\nTemperature category: Extreme Heat\nWeather Advisory: Wear Exteme sun protection when outside and avoid the sun");
	}

void categorize_kelvin(float kelvin)
	{
	if (kelvin <= 273.15)
                printf("\nTemperature category: Freezing\nWeather advisory: Wear Cold clothes and stay warm");
        if (kelvin > 273.15 && kelvin <= 283.15)
                printf("\nTemperature category: Cold\nWeahter advisory: Wear a thick jacket");
        if (kelvin > 283.15 && kelvin <= 298.15)
                printf("\nTemperature category: Comfortable\nWeahter advisory: Comfertable Weather");
        if (kelvin > 298.15 && kelvin <= 308.15)
                printf("\nTemperature category: Hot\nWear light clothes and wear sun protection");
        if (kelvin > 308.15)
                printf("\nTemperature category: Extreme Heat\nWeather Advisory: Wear Exteme sun protection when outside and avoid the sun");
	}

float c_to_f (float celsius)
	{
	return (((9.0 / 5.0) * celsius) + 32);	
	}

float f_to_c (float fahrenheit)
	{
	return ((5.0 / 9.0) * (fahrenheit - 32));
	}

float c_to_k (float celsius)
	{
	return (celsius + 273.15);
	}

float k_to_c (float kelvin)
	{
	return (kelvin - 273.15);
	}

float f_to_k (float fahrenheit)
	{
	return c_to_k(f_to_c(fahrenheit));
	}

float k_to_f (float kelvin)
	{
	return c_to_f(k_to_c(kelvin));
	}

int main()
{	
	float temp;
	float tempB;
	int choice1;
	int choice2;
	printf("\nEnter the temperature: ");
	while (scanf("%f", &tempB) != 1)
		{
		printf("\nThat is not a number\n");
		printf("\nEnter the temperature: ");
		while (getchar() != '\n');
		}
	printf("\nWhich tempearture is this\n1) Fahrenheit\n2) Celsius\n3) Kelvin\nChoice: ");
	scanf("%d", &choice1);
	while (choice1 == 3 && tempB < 0)
		{
		printf("\nCan't have negative kelvin\n");
		printf("\nWhich tempearture is this\n1) Fahrenheit\n2) Celsius\n3) Kelvin\nChoice: ");
		scanf("%d", &choice1);
		while (getchar() != '\n');
		}
	while (choice1 < 1 || choice1 > 3)
                {
                printf("\nThat is not a number or in range\n");
		printf("\nWhich tempearture is this\n1) Fahrenheit\n2) Celsius\n3) Kelvin\nChoice: ");
		scanf("%d", &choice1);
		while (getchar() != '\n');
                }
	printf("\nWhich temperature do you want to convert to\n1) Fahrenheit\n2) Celsius\n3) Kelvin\nChoice: ");
	scanf("%d", &choice2);
	while (choice1 == choice2)
		{
		printf("\nCan't convert a temp to itself\n");
		printf("\nWhich temperature do you want to convert to\n1) Fahrenheit\n2) Celsius\n3) Kelvin\nChoice: ");
		scanf("%d", &choice2);
		while(getchar() != '\n');
		}
	while (choice2 < 1 || choice2 > 3)
		{
		printf("\nThat is not a number or in range\n");
		printf("\nWhich temperature do you want to convert to\n1) Fahrenheit\n2) Celsius\n3) Kelvin\nChoice: ");
		scanf("%d", &choice2);
		while (getchar() != '\n');
		}
	printf("\n");
	if ((choice1 == 1) && (choice2 == 2))
		{
		printf("Converted Temperature: %fC", f_to_c(tempB));
		temp = f_to_c(tempB);
		categorize_celsius(temp);
		}

	if ((choice1 == 1) && (choice2 == 3))
		{
		 printf("Converted Temperature: %fK", f_to_k(tempB));
		temp = f_to_k(tempB);
		categorize_kelvin(temp);
		}

	if ((choice1 == 2) && (choice2 == 1))
		{
		 printf("Converted Temperature: %fF", c_to_f(tempB));
		temp = c_to_f(tempB);
		categorize_fahrenheit(temp);
		}

	if ((choice1 == 2) && (choice2 == 3))
		{
		 printf("Converted Temperature: %fK", c_to_k(tempB));
		temp = c_to_k(tempB);
		categorize_kelvin(temp);
		}

	if ((choice1 == 3) && (choice2 == 1))
		{
		 printf("Converted Temperature: %fF", k_to_f(tempB));
		temp = k_to_f(tempB);
		categorize_fahrenheit(temp);
		}

	if ((choice1 == 3) && (choice2 == 2))
		{
		 printf("Converted Temperature: %fC", k_to_c(tempB));
		temp = k_to_c(tempB);
		categorize_celsius(temp);
		}
	printf("\n");
	return 0;
}


