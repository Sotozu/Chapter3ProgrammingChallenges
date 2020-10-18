/*
These programs are solutions to the "Programming Challnage" section at the end of 
each chapter from the book "C++ From Control Structures through Objects".

Book: C++ From Control Structures through Objects
Chapter: Chapter 3 Expressions and Interactivity 
Name: Alexander Soto
*/

#include <iostream> 
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main() {

	//21. How Many Pizzas?
	/*
	const float PI = 3.14159;
	const float sliceSize = 14.125;
	float diameter, radius, pizzaArea, numberOfPizzas;
	float slicesPerPizza, numberOfPeople, slicesRequired;
	cout << "This program determines the number of pizzas required if each person eats 4 slices.\n\n";
	cout << "Please enter the number of people attending the party: ";
	cin >> numberOfPeople;
	cout << "What's the diameter of the pizza that you are purchasing (inches): ";
	cin >> diameter;

	radius = diameter / 2;

	pizzaArea = PI * pow(radius, 2);

	slicesPerPizza = pizzaArea / sliceSize;

	slicesRequired = numberOfPeople * 4;

	numberOfPizzas = slicesRequired / slicesPerPizza;

	cout << setprecision(1)<<fixed;
	cout << "It will take " << numberOfPizzas << " pizzas to feed " <<setprecision(0)<< numberOfPeople << " people at the party"
	<< "\nif each pizzas is " <<setprecision(1)<< diameter << " inches in diameter." << endl << endl;
	*/
	
	//22.Angle Calculator
	/*
	double angle;
	cout << "This program will display the sine, cosine, and tangent of an angle.\n\n";
	cout << "Please enter an angle in radians: ";
	cin >> angle;
	cout << setprecision(4) << fixed << endl;
	cout << "The cosine of the angle is: " << cos(angle) << endl;
	cout << "The sine of the angle is: " << sin(angle) << endl;
	cout << "The tangent of the angle is: " << tan(angle) << endl;
	*/

	//23.Stock Transaction Program
	/*
	float stockAmount, stockPrice = 45.50, salePrice = 56.90, stockbrokerPercent = 0.02;
	float stockTotalPurchaseCost, totalSalesGain, brokerPurchaseCommission, brokerSalesCommission, profit;

	int w1 = 30, w2 = 9;

	cout << "This program calculates and displays the cost/gain of buying and selling stock.\n\n";
	cout << "Enter the amount of stock to purchase ($"<<stockPrice<<" per share): ";
	cin >> stockAmount;
	cout << "The stockbroker charges "<<stockbrokerPercent*100<<"% commission in the purchase of your stock.\n\n";
	cout << "Two weeks have passed since you purchased the stock.\n"
	<< "You decide to sell your stock at ($"<<salePrice<<" per share).\n";
	cout << "The stockbroker charges "<<stockbrokerPercent*100<<"% commission in the sale of your stock.\n\n";
	cout << "Please press \"Enter\" to continue:";
	cin.ignore();
	cin.get();

	stockTotalPurchaseCost = stockPrice * stockAmount;
	totalSalesGain = salePrice * stockAmount;
	brokerPurchaseCommission = stockTotalPurchaseCost * stockbrokerPercent;
	brokerSalesCommission = totalSalesGain * stockbrokerPercent;
	profit = (totalSalesGain + brokerSalesCommission) + (stockTotalPurchaseCost + brokerPurchaseCommission) * -1;

	cout << setprecision(2) << fixed << showpoint;
	cout << setw(w1) << left << "Amount paid for the stock(s):"<< "$" << right << setw(w2) << stockTotalPurchaseCost<<endl;
	cout << setw(w1) << left << "Stockbroker purchaseo fee:" << "$" << right << setw(w2) << brokerPurchaseCommission<<endl;
	cout << setw(w1) << left << "Total sale of stock(s):" << "$" << right << setw(w2) << totalSalesGain<<endl;
	cout << setw(w1) << left << "Stockbroker sales fee:" << "$" << right << setw(w2) << brokerSalesCommission<<endl;

	cout << setw(w1) << left << "Net gain from stock(s):" << "$" << right << setw(w2) << profit << endl<<endl;
	*/
	//Word Game
	/*
	cout << "This program plays a word game with the user.\n\n";

	string name, age, cityTown, college, profession, animal, pet;

	cout << "Please enter your name: ";
	getline(cin, name);
	cout << "Please enter your age: ";
	getline(cin, age);
	cout << "Please enter your current city/town: ";
	getline(cin, cityTown);
	cout << "Please enter the name of a college: ";
	getline(cin, college);
	cout << "Please enter a profession: ";
	getline(cin, profession);
	cout << "Please enter a type of animal: ";
	getline(cin, animal);
	cout << "Please enter a pet's name: ";
	getline(cin, pet);

	cout << "\nPlease press \"Enter\" to continue.";
	cin.get();

	cout << "\nThere once was a person named " <<
	name <<
	" who lived in " <<
	cityTown <<
	".\nAt the age of " <<
	age <<
	", " <<
	name <<
	" went to college at " <<
	college <<
	".\n" <<
	name <<
	" graduated and went to work as a " <<
	profession <<
	".\nThen, " <<
	name <<
	" adopted a(n) " <<
	animal <<
	" named " <<
	pet <<
	".\nThey both lived happily ever after!\n\n";
	*/
return 0;
}