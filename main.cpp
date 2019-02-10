#include <iostream>

int main()
{
	int wait = 0;
	char choice1;
	char choice2;
	char choice3 = 'n';
	char toppings1;
	char toppings2;
	char toppings3;
	double choice1Price = 0;
	double toppings1Price = 0;
	double choice2Price = 0;
	double toppings2Price = 0;
	double choice3Price = 0;
	double toppings3Price = 0;
	double order1Quantity = 0;
	double order2Quantity = 0;
	double order3Quantity = 0;
	double order1total = 0;
	double order2total = 0;
	double order3total = 0;
	double subtotal = 0;
	double tax = 0;

	std::cout << "Welcome to the taco stand!\n \nPlace Order: \n============\n(c/C) Chicken Taco $3.50\n(s/S) Salad $5.0\n(w/W) Water $1.0\nchoice: ";
	std::cin >> choice1;		//Entree choice1 input

	if ((choice1 == 'C') || (choice1 == 'c') || (choice1 == 's') || (choice1 == 'S') || (choice1 == 'w') || (choice1 == 'W')) {

		if ((choice1 == 'C') || (choice1 == 'c')) {
			choice1Price = 3.5;
			std::cout << "\nToppings:\n============\n(t/T) Tomatoes $0.75\n(c/C) Cheese $1.5\n(h/H) Hot Sauce $0.3\n(n/N) None $0.0\nchoice: ";
			std::cin >> toppings1;		//Toppings choice1 input

			if ((toppings1 == 't') || (toppings1 == 'T') || (toppings1 == 'c') || (toppings1 == 'C') || (toppings1 == 'h') || (toppings1 == 'H') || (toppings1 == 'n') || (toppings1 == 'N')) {
				if ((toppings1 == 't') || (toppings1 == 'T')) {
					toppings1Price = .75;
				}
				else if ((toppings1 == 'c') || (toppings1 == 'C')) {
					toppings1Price = 1.5;
				}
				else if ((toppings1 == 'h') || (toppings1 == 'H')) {
					toppings1Price = .3;
				}
				else if ((toppings1 == 'n') || (toppings1 == 'N')) {
					toppings1Price = 0;
				}
			}
			else {
					std::cout << "Error: that is not a valid input.";	//Error in case of improper input
			}
			
		}
		else if ((choice1 == 'S') || (choice1 == 's')) {
			choice1Price = 5;
		}
		else if ((choice1 == 'W') || (choice1 == 'w')) {
			choice1Price = 1;
		}
	
		std::cout << "\nQuantity:\n============\nHow many?: ";		//Quantity input
		std::cin >> order1Quantity;
	
		order1total = order1Quantity * (choice1Price + toppings1Price);
	
		std::cout << "\n(c/C) Chicken Taco $3.50\n(s/S) Salad $5.0\n(w/W) Water $1.0\n(n/N) No\nAnything else? ";
		std::cin >> choice2;		//Entree choice2 input
	
		if ((choice2 == 'C') || (choice2 == 'c') || (choice2 == 's') || (choice2 == 'S') || (choice2 == 'w') || (choice2 == 'W')) {
	
			if ((choice2 == 'C') || (choice2 == 'c')) {
				choice2Price = 3.5;
				std::cout << "\nToppings:\n============\n(t/T) Tomatoes $0.75\n(c/C) Cheese $1.5\n(h/H) Hot Sauce $0.3\n(n/N) None $0.0\nchoice: ";
				std::cin >> toppings2;		//Toppings choice2 input
	
				if ((toppings2 == 't') || (toppings2 == 'T') || (toppings2 == 'c') || (toppings2 == 'C') || (toppings2 == 'h') || (toppings2 == 'H') || (toppings2 == 'n') || (toppings2 == 'N')) {
					if ((toppings2 == 't') || (toppings2 == 'T')) {
						toppings2Price = .75;
					}
					else if ((toppings2 == 'c') || (toppings2 == 'C')) {
						toppings2Price = 1.5;
					}
					else if ((toppings2 == 'h') || (toppings2 == 'H')) {
						toppings2Price = .3;
					}
					else if ((toppings2 == 'n') || (toppings2 == 'N')) {
						toppings2Price = 0;
					}
				}
				else {
						std::cout << "Error: that is not a valid input.";	//Error in case of improper input
				}
			}
			else if ((choice2 == 'S') || (choice2 == 's')) {
				choice2Price = 5;
			}
			else if ((choice2 == 'W') || (choice2 == 'w')) {
				choice2Price = 1;
			}
	
			std::cout << "\nQuantity:\n============\nHow many?: ";		//Quantity input
			std::cin >> order2Quantity;
	
			order2total = order2Quantity * (choice2Price + toppings2Price);
	
			std::cout << "\n(c/C) Chicken Taco $3.50\n(s/S) Salad $5.0\n(w/W) Water $1.0\n(n/N) No\nAnything else? ";
			std::cin >> choice3;		//Entree choice3 input
	
			if ((choice3 == 'C') || (choice3 == 'c') || (choice3 == 's') || (choice3 == 'S') || (choice3 == 'w') || (choice3 == 'W')) {
	
				if ((choice3 == 'C') || (choice3 == 'c')) {
					choice3Price = 3.5;
					std::cout << "\nToppings:\n============\n(t/T) Tomatoes $0.75\n(c/C) Cheese $1.5\n(h/H) Hot Sauce $0.3\n(n/N) None $0.0\nchoice: ";
					std::cin >> toppings3;		//Toppings choice3 input
	
					if ((toppings3 == 't') || (toppings3 == 'T') || (toppings3 == 'c') || (toppings3 == 'C') || (toppings3 == 'h') || (toppings3 == 'H') || (toppings3 == 'n') || (toppings3 == 'N')) {
						if ((toppings3 == 't') || (toppings3 == 'T')) {
							toppings3Price = .75;
						}
						else if ((toppings3 == 'c') || (toppings3 == 'C')) {
							toppings3Price = 1.5;
						}
						else if ((toppings3 == 'h') || (toppings3 == 'H')) {
							toppings3Price = .3;
						}
						else if ((toppings3 == 'n') || (toppings3 == 'N')) {
							toppings3Price = 0;
						}
					}
					else {
						std::cout << "Error: that is not a valid input.";	//Error in case of improper input
					}
				}
				else if ((choice3 == 'S') || (choice3 == 's')) {
					choice3Price = 5;
				}
				else if ((choice3 == 'W') || (choice3 == 'w')) {
					choice3Price = 1;
				}
	
				std::cout << "\nQuantity:\n============\nHow many?: ";		//Quantity input
				std::cin >> order3Quantity;
	
				order3total = order3Quantity * (choice3Price + toppings3Price);
			}
			else if ((choice3 == 'n') || (choice3 == 'N')) {
			}
			else {
				std::cout << "Error: that is not a valid input.";
			}
	
		}
		else if ((choice2 == 'n') || (choice2 == 'N')) {
		}
		else {
			std::cout << "Error: that is not a valid input.";
		}
//receipt ---------------------------------------------------------

		std::cout << "\nReceipt:\n============\nSub total\n";
		if (order1total != 0) {
			std::cout << "\t"; std::cout << order1Quantity;

			if ((choice1 == 'c') || (choice1 == 'C')) {
				std::cout << " Chicken Taco @ $3.5: $"; std::cout << order1Quantity * choice1Price;

				if ((toppings1 == 't') || (toppings1 == 'T')) {
					std::cout << "\n\t"; std::cout << order1Quantity;
					std::cout << " Tomatoes @ $0.75: $"; std::cout << order1Quantity * toppings1Price;
				}
				else if ((toppings1 == 'h') || (toppings1 == 'H')) {
					std::cout << "\n\t"; std::cout << order1Quantity;
					std::cout << " Hot Sauce @ $0.3: $"; std::cout << order1Quantity * toppings1Price;
				}
				else if ((toppings1 == 'c') || (toppings1 == 'C')) {
					std::cout << "\n\t"; std::cout << order1Quantity;
					std::cout << " Cheese @ $1.5: $"; std::cout << order1Quantity * toppings1Price;
				}
			}
			else if ((choice1 == 's') || choice1 == 'S') {
				std::cout << " Salad @ $5.0: $"; std::cout << order1Quantity * choice1Price;
			}
			else if ((choice1 == 'w') || choice1 == 'W') {
				std::cout << " Water @ $1.0: $"; std::cout << order1Quantity * choice1Price;
			}
		}

		if (order2total != 0) {
			std::cout << "\n\t"; std::cout << order2Quantity;

			if ((choice2 == 'c') || (choice2 == 'C')) {
				std::cout << " Chicken Taco @ $3.5: $"; std::cout << order2Quantity * choice2Price;

				if ((toppings2 == 't') || (toppings2 == 'T')) {
					std::cout << "\n\t"; std::cout << order2Quantity;
					std::cout << " Tomatoes @ $0.75: $"; std::cout << order2Quantity * toppings2Price;
				}
				else if ((toppings2 == 'h') || (toppings2 == 'H')) {
					std::cout << "\n\t"; std::cout << order2Quantity;
					std::cout << " Hot Sauce @ $0.3: $"; std::cout << order2Quantity * toppings2Price;
				}
				else if ((toppings2 == 'c') || (toppings2 == 'C')) {
					std::cout << "\n\t"; std::cout << order2Quantity;
					std::cout << " Cheese @ $1.5: $"; std::cout << order2Quantity * toppings2Price;
				}
			}
			else if ((choice2 == 's') || choice2 == 'S') {
				std::cout << " Salad @ $5.0: $"; std::cout << order2Quantity * choice2Price;
			}
			else if ((choice2 == 'w') || choice2 == 'W') {
				std::cout << " Water @ $1.0: $"; std::cout << order2Quantity * choice2Price;
			}
		}
		
		if (order3total != 0) {
			std::cout << "\n\t"; std::cout << order3Quantity;

			if ((choice3 == 'c') || (choice3 == 'C')) {
				std::cout << " Chicken Taco @ $3.5: $"; std::cout << order3Quantity * choice3Price;

				if ((toppings3 == 't') || (toppings3 == 'T')) {
					std::cout << "\n\t"; std::cout << order3Quantity;
					std::cout << " Tomatoes @ $0.75: $"; std::cout << order3Quantity * toppings3Price;
				}
				else if ((toppings3 == 'h') || (toppings3 == 'H')) {
					std::cout << "\n\t"; std::cout << order3Quantity;
					std::cout << " Hot Sauce @ $0.3: $"; std::cout << order3Quantity * toppings3Price;
				}
				else if ((toppings3 == 'c') || (toppings3 == 'C')) {
					std::cout << "\n\t"; std::cout << order3Quantity;
					std::cout << " Cheese @ $1.5: $"; std::cout << order3Quantity * toppings3Price;
				}
			}
			else if ((choice3 == 's') || choice3 == 'S') {
				std::cout << " Salad @ $5.0: $"; std::cout << order3Quantity * choice3Price;
			}
			else if ((choice3 == 'w') || choice3 == 'W') {
				std::cout << " Water @ $1.0: $"; std::cout << order3Quantity * choice3Price;
			}
		}
	}
else {
	std::cout << "Error: that is not a valid input.";	//Error in case of improper first input
}	 

subtotal = order1Quantity + order2total + order3total;
tax = .08 * subtotal;
std::cout << "\nTax\n";		//Tax
std::cout << "\t8% of $"; std::cout << subtotal; std::cout << ": $"; std::cout << tax;

std::cout << "\nTotal\n";	//Total
std::cout << "\t$"; std::cout << tax + subtotal;
std::cout << "\n\nThank you!";

std::cin >> wait;
}

