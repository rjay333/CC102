#include <iostream>

using namespace std;

int main() 
{
    float pricesUSD[3], pricesPound[2], conversionRates[2], totalPHP = 0;
    int quantities[5];

    cout << "Enter the price of sugar (in USD): ";
    cin >> pricesUSD[0];

    cout << "Enter the price of coffee (in USD): ";
    cin >> pricesUSD[1];

    cout << "Enter the price of milk (in USD): ";
    cin >> pricesUSD[2];

    cout << "Enter the price of rice (per pound): ";
    cin >> pricesPound[0];

    cout << "Enter the price of sardines (per pound): ";
    cin >> pricesPound[1];

    cout << "Enter the quantity of sugar: ";
    cin >> quantities[0];

    cout << "Enter the quantity of rice: ";
    cin >> quantities[1];

    cout << "Enter the quantity of sardines: ";
    cin >> quantities[2];

    cout << "Enter the quantity of coffee: ";
    cin >> quantities[3];

    cout << "Enter the quantity of milk: ";
    cin >> quantities[4];

    cout << "Enter USD to PHP conversion rate: ";
    cin >> conversionRates[0];

    cout << "Enter Pounds to PHP conversion rate: ";
    cin >> conversionRates[1];

    totalPHP += pricesUSD[0] * conversionRates[0] * quantities[0];  // Sugar
    totalPHP += pricesPound[0] * conversionRates[1] * quantities[1];  // Rice
    totalPHP += pricesPound[1] * conversionRates[1] * quantities[2];  // Sardines
    totalPHP += pricesUSD[1] * conversionRates[0] * quantities[3];  // Coffee
    totalPHP += pricesUSD[2] * conversionRates[0] * quantities[4];  // Milk
    cout << "Total price in PHP: " << totalPHP << endl;

    return 0;
}