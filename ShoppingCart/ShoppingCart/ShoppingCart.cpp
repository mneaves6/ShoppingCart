/*
 * Name: Maximiliano Neaves
 * Section: COSC/ITSE 1307
 * Homework: ShoppingCart
 * This program prompts the user to enter the number of items ordered
 * and the price of each item, then outputs the total billing amount.
 */

/*
 * Pseudocode
 * BEGIN
 * Main function
 *     Perform program
 *         Call option menu function
 *         Input choice
 *             1 = call checkout function
 *             2 = quit the program
 *             Default = error message
 *     Program loops until user quits
 * Option menu function
 *     Display option menu
 * Checkout function
 *     Input item price
 *     Input item quantity
 *     Item price * item quantity = total cost
 *     If total price is greater than or equal to 200
 *         Display total cost
 *     Else
 *         Total cost + shipping and handling
 *     Display new total cost
 * END
 */

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//Function prototypes
int printMenu();
int inputCheckout(); 

//Main function
int main()
{
	//Variable for main function
	int intChoice = 1;

	//Entire program
	do
	{
		//Calling option menu function
		printMenu();

		//User input for choice
		cin >> intChoice;

		//Options
		switch (intChoice)
		{
			//Calling checkout function
			case 1:
				inputCheckout();
				break;

			//Quit
			case 2:
				cout << " " << endl;
				cout << "Come back soon!" << endl;
				cout << " " << endl;
				break;

			//Error output
			default:
				cout << " " << endl;
				cout << "Invalid choice." << endl;
				cout << " " << endl;
				break;
		}
	}

	//Loop until user quits
	while (intChoice != 2);

    return 0;
}

//Option menu function
int printMenu()
{
	//Option menu output
	cout << "Welcome to the ShoppingCart program!" << endl;
	cout << "1 - Checkout" << endl;
	cout << "2 - Quit" << endl;
	cout << "Please enter your choice: ";

	return 0;
}

//Checkout function
int inputCheckout()
{
	//Variables for Checkout function
	const double DBLSHIPPINGHANDLING = 10.00;
	double dblItemPrice = 5.00;
	int intItemQuantity = 1;
	double dblTotalCost = 5.00;
	double dblTotalCost2 = 5.00;

	cout << " " << endl;
	cout << "Welcome to Checkout!" << endl;
	cout << "Shipping & handling is free if total cost is $200 or more." << endl;
	cout << " " << endl;

	cout << "Enter item price: $";
	//User input for item price
	cin >> dblItemPrice;
	cout << " " << endl;

	cout << "Enter item quantity: ";
	//User input for item quantity
	cin >> intItemQuantity;
	cout << " " << endl;

	//Total cost calculation
	dblTotalCost = dblItemPrice * intItemQuantity;

	//Shipping and handling
	if (dblTotalCost >= 200)
	{
		cout << "Your total cost is $" << dblTotalCost << " ";
		cout << "with free shipping & handling." << endl;
		cout << " " << endl;
	}
	else if (dblTotalCost < 200)
	{
		//Shipping & handling calculation
		dblTotalCost2 = dblTotalCost + DBLSHIPPINGHANDLING;

		cout << " " << endl;
		cout << "Your total cost is $" << dblTotalCost2 << " ";
		cout << "plus shipping & handling." << endl;
		cout << " " << endl;
	}

	return 0;
}

