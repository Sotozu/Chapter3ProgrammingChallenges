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

	//1. Miles per Gallon
	/*
	int maxDistance, tankSizeGallons;
	cout << "Enter the distance that this vehicle travels on a full tank of gas (miles): ";
	cin >> maxDistance;
	cout << "Enter the amount of gallons of gas the vehicle can hold in a full tank of gas: ";
	cin >> tankSizeGallons;
	cout << "This vehicle travels at " << maxDistance / tankSizeGallons << "mpg.";
	*/

	//2. Stadium Seating
	/*
	float ticketA = 15.00, ticketB = 12.00 , ticketC = 9.00;
	int numA, numB, numC;
	float total;
	cout << "How many Class A tickets were sold ($15.00): ";
	cin >> numA;
	cout << "How many Class B tickets were sold ($12.00): ";
	cin >> numB;
	cout << "How many Class C tickets were sold ($9.00): ";
	cin >> numC;

	cout << "Please press \"Enter\" to calculate the total sales:";
	cin.ignore();
	cin.get();

	total = (ticketA * numA) + (ticketB * numB) + (ticketC * numC);
	cout << "Total sales sum to: $" <<fixed<<showpoint<<setprecision(2)<< total;
	*/

	//3. Test Average
	/*
	float score1, score2, score3, score4, score5;
	float average;
	cout << "Please enter 5 test scores:\n";

	cout << "Test Score 1: ";
	cin >> score1;
	cout << "Test Score 2: ";
	cin >> score2;
	cout << "Test Score 3: ";
	cin >> score3;
	cout << "Test Score 5: ";
	cin >> score4;
	cout << "Test Score 5: ";
	cin >> score5;

	cout << "The average of these scores is: ";
	average = (score1 + score2 + score3 + score4 + score5) / 5;
	cout << fixed << setprecision(1) << showpoint << average;
	*/

	//4. Average Rainfall
	/*
	string month1, month2, month3;
	float rain1, rain2, rain3;
	float averagerainfall;

	cout << "This program calculates the average rainfall in a period of 3 months.\n";
	cout << "Please enter the name of the first month: ";
	cin >> month1;
	cout << "How much rain fell during this month (inches): ";
	cin >> rain1;
	cout << endl;
	cout << "Please enter the name of the second month: ";
	cin >> month2;
	cout << "How much rain fell during this month (inches): ";
	cin >> rain2;
	cout << endl;
	cout << "Please enter the name of the third month: ";
	cin >> month3;
	cout << "How much rain fell during this month (inches): ";
	cin >> rain3;
	cout << endl;

	averagerainfall = (rain1 + rain2 + rain3) / 3;
	cout<< "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is "
		<< setprecision(2) << fixed << showpoint << averagerainfall << " inches.";
	*/

	//5. Male and Female Percentages
	/*
	int males, females;
	float percMale, percFemale;
	cout << "This program computes the percentage of females and males in a class.\n";
	cout << "Enter the number of males in the classroom: ";
	cin >> males;
	cout << "Enter the number of females in the classroom: ";
	cin >> females;

	percMale = (males / (static_cast<float>(males) + static_cast<float>(females)))*100;
	percFemale = (females / (static_cast<float>(males) + static_cast<float>(females)))*100;

	cout << setprecision(2) << fixed << showpoint;
	cout << "The percent of females in the class room is %" << percFemale << " and the percent of males is %" << percMale << ".\n";
	*/

	//6. Ingredient Adjuster
	/*
	int numberOfCookies;
	int cookieBatch48 = 48;


	float sugarAmount1Cookie, butterAmount1Cookie, flourAmount1Cookie; //this will store how much of each ingredient is required for each cookie
	float sugar = 1.5, butter = 1.00, flour = 2.75; //current required amount of ingredients to bake 48 cookies

	sugarAmount1Cookie = sugar / cookieBatch48;
	butterAmount1Cookie = butter / cookieBatch48;
	flourAmount1Cookie = flour / cookieBatch48;

	cout << setprecision(2) << fixed;

	cout << "This program determines the amount of ingredients needed if a certian amount if cookies are to be baked!\n";
	cout << "In order to make 48 cookies the recipe calls for:\n"
		<< "\t"<<sugar<<" cup(s) of sugar\n"
		<< "\t"<<butter<<" cup(s) of butter\n"
		<< "\t"<<flour<<" cup(s) of flour\n\n";
	cout << "Please enter the amount of cookies you would like to make: ";

	cin >> numberOfCookies;

	cout << "The amount of ingredents required to make " << numberOfCookies << " cookies is:\n"
		<<"\t"<<sugarAmount1Cookie * numberOfCookies << " cup(s) of suger\n"
		<<"\t"<< butterAmount1Cookie * numberOfCookies << " cup(s) of butter\n"
		<<"\t"<< flourAmount1Cookie * numberOfCookies << " cup(s) of flour\n\n";

	cout << "Happy Baking!" << endl;
	*/

	//7. Box Office
	/*
	string movieName;
	int cTickets, aTickets;
	float cPrice = 6.00, aPrice = 10.00;
	float grossProfit, netProfit, distributorPayment;
	float distributorPercentage = 0.2;

	cout << "This program calculates the gross and net box office profit for a night.\n";
	cout << "Enter the name of the movie: ";
	getline(cin,movieName);
	cout << "Enter the number of children tickets sold: ";
	cin >> cTickets;
	cout << "Enter the number of adult tickets sold: ";
	cin >> aTickets;

	grossProfit = (cPrice * cTickets) + (aPrice + aTickets);
	distributorPayment = grossProfit * distributorPercentage;
	netProfit = grossProfit - distributorPayment;

	cout <<setprecision(2)<<fixed<<endl;

	cout<<setw(30)<<left<<"Movie Name: "
		<<"\""<<movieName<<"\""<<endl;

	cout<<setw(30)<<left<<"Adult Tickets Sold: "
		<<setw(7)<<right<<aTickets<<endl;

	cout<<setw(30)<<left<<"Child Tickets Sold: "
		<<setw(7)<<right<<cTickets<<endl;

	cout<<setw(30)<<left<<"Gross Box Office Profit: "
		<<"$"<<setw(9)<<right<<grossProfit<<endl;

	cout<<setw(30)<<left<<"Net Box Office Profit: "
		<<"$"<<setw(9)<<right<<netProfit<<endl;

	cout<<setw(30)<<left<<"Amount Paid to Distributor: "
		<<"$"<<setw(9)<<right<<distributorPayment<<endl;
	*/

	//8. How Many Widgets
	/*
	float widgetWeight= 12.5;
	float paletWeight;
	float numberOfWidgets;

	cout <<"This program determines how many widgets are in a pallet given the pallets weight.\nEach widget weighs 12.5 pounds.\n\n";
	cout <<"Please enter the weight of the pallet (pounds): ";
	cin >> paletWeight;

	numberOfWidgets = paletWeight / widgetWeight;

	cout << "The amount of widgets in the pallet is roughly " << numberOfWidgets << ".";
	*/

	//9.How Many Calories?
	/*
	float cookiesEaten, cookiePerBag = 30 ,servingsperBag = 10, caloriesPerServing = 300;
	float caloriePerCookie, totalCalories;
	caloriePerCookie = (servingsperBag / cookiePerBag) * caloriesPerServing;
	cout << "This program calcuates how the total calories intaken if \"x\" cookies are eaten.\n\n";
	cout << "Please enter the amount of cookies you ate: ";
	cin >> cookiesEaten;
	totalCalories = caloriePerCookie * cookiesEaten;
	cout << "\nThe amount of calories consumed given that you ate " << cookiesEaten << " cookies is " << totalCalories<<".\n";
	*/

	//10.How Much Insurance?
	/*
	float replacementCost, insuranceCost;
	float insurancePercent = 0.80;

	cout << "This program will determine the insurance coverage you should purchase on your property given its replacement cost.\n\n";
	cout << "Please enter the cost of replacing the property: $";
	cin >> replacementCost;
	insuranceCost = replacementCost * insurancePercent;
	cout <<setprecision(2)<<fixed<<"\nThe insurance coverage you should purchase should cover $" << insuranceCost << " in damages.\n";
	*/

	//11.Automobile Costs
	/*
	float loanPayment, insurance, gas, oil, tires, maintenance, MonthlyCost, yearlyCost;
	int width = 35;

	cout << "This program determines the monthly and yearly expenses of you car given the following factors:\n\n";
	cout << right << setw(width) << "Monthly loan payment: $";
	cin >> loanPayment;
	cout << setw(width) << "Monthly insurance payment: $";
	cin >> insurance; 
	cout << setw(width) << "Monthly gas costs: $";
	cin >> gas;
	cout << setw(width) << "Monthly oil costs: $";
	cin >> oil;
	cout << setw(width) << "Monthly tire costs: $";
	cin >> tires;
	cout << setw(width) << "Monthly maintenance costs: $";
	cin >> maintenance;

	MonthlyCost = loanPayment + insurance + gas + oil + tires + maintenance;
	yearlyCost = MonthlyCost * 12;

	cout << "\n\nThe total monthly costs of owning the car comes out to $" << MonthlyCost << ".\n";
	cout << "The yearly cost of owning this car comes out to be $" << yearlyCost << ".\n";
	*/
	
	//12.Celsius to Farenheit
	/*
	float farenheit, celsius;
	cout << "This program converts celsius into farenheit.\n\n";
	cout << "Please enter the celsius value: ";
	cin >> celsius;
	farenheit = ((9 / 5) * celsius) + 32;
	cout <<setprecision(2)<<fixed<<"\nThe celsius value of " << celsius << " in farenheit is " << farenheit << ".\n";
	*/
	
	//13.Currency
	/*
	const float YEN_PER_DOLLAR = 98.93;
	const float EUROS_PER_DOLLAR = 0.74;

	float usdollar;
	float yen, euro;

	cout << "This program converts US dollars into Yen and Euros.\n\n";
	cout << "Please enter the number of US dollars you would like converted: ";

	cin >> usdollar;

	yen = usdollar * YEN_PER_DOLLAR;
	euro = usdollar * EUROS_PER_DOLLAR;

	cout <<setprecision(2)<<fixed<<showpoint<< "\n$" << usdollar << " US dollars is " << yen << " Yen OR " << euro << " Euros.\n\n";
	*/

//14.Monthly Sales Tax
	/*
	string month, year;
	float totalCollected, totalSales, totalCountyTax, totalStateTax, totalSalesTax;

	float countyTaxRate = 0.02, stateTaxRate = 0.04;

	int width1 = 25, width2 = 15;

	cout << "This program will display formated information detailing the sales and taxes of a retail company for the end of the month.\n\n";
	cout << "Please enter the month: ";
	getline(cin, month);
	cout << "Please enter the year: ";
	getline(cin, year);
	cout << "Please enter the total collected at the cash register this month (USD): $";
	cin >> totalCollected;

	totalCountyTax = totalCollected * countyTaxRate;
	totalStateTax = totalCollected * stateTaxRate;
	totalSalesTax = totalStateTax + totalCountyTax;
	totalSales = totalCollected - totalSalesTax;

	cout << setprecision(2) << fixed << showpoint;

	cout << "\nYear: " << year << endl;
	cout << "Month: " << month <<endl;
	cout << "-----------------\n";
	cout << left << setw(width1) << "Total Collected:" << "$" << right << setw(width2) << totalCollected << endl;
	cout << left << setw(width1) << "Sales:" << "$" << right << setw(width2) << totalSales << endl;
	cout << left << setw(width1) << "County Sales Tax:" << "$" << right << setw(width2) << totalCountyTax << endl;
	cout << left << setw(width1) << "State Sales Tax:" << "$" << right << setw(width2) << totalStateTax << endl;
	cout << left << setw(width1) << "Total Sales Tax:" << "$" << right << setw(width2) << totalSalesTax << endl;
	*/

	//15. Property Tax
	/*
	float value, tax, assesment;
	float assesmentPercent = 0.6;


	cout << "This program takes in the actual value of an acre and then computes its assesment value and property tax.\n\n";
	cout << "Please enter the actual value of the property: $";
	cin >> value;

	assesment = value * assesmentPercent;
	tax = (assesment / 100) * .75;

	cout << setprecision(2) << fixed << showpoint;

	cout << left << setw(20)<<"Actual Value:" << "$" << right << setw(8) << value << endl;
	cout << left << setw(20)<<"Assesment Value:" << "$" << right << setw(8) << assesment << endl; 
	cout << left << setw(20)<<"Tax:" << "$" << right << setw(8) << tax << endl<< endl;
	*/

	//16.Senior Citizen Property Tax
	/*
	float value, tax, assesment, quarter, discount = 5000;
	float assesmentPercent = 0.6;

	cout << "This program will calculated the assesment value, tax rate and\nquartly payments of a property for an eligible senior citizen.\n\n";
	cout << "Please enter the value of the property: $";
	cin >> value;

	assesment = value * assesmentPercent;
	assesment -= discount;
	tax = (assesment / 100) * 2.64;
	quarter = tax / 4;

	cout << setprecision(2) << fixed << showpoint << endl;

	cout << left << setw(20) << "Actual Value:" << "$" << right << setw(10) << value << endl;
	cout << left << setw(20) << "Assesment Value:" << "$" << right << setw(10) << assesment << endl;
	cout << left << setw(20) << "Annual Tax:" << "$" << right << setw(10) << tax << endl;
	cout << left << setw(20) << "Quarterly Payments:" << "$" << right << setw(10) << quarter << endl;
	*/

	//17. Math Tutor
	/*
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 100;
	int num1, num2;
	srand(time(0));
	num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	int sum = num1 + num2;

	cout << "This program displays two random numbers to be added and then before\n"
	<< "outputting the result requests for the \"Enter\" button to be pressed.\n\n";

	cout << right << setw(5) << num1<<endl;
	cout <<"+"<<setw(4) << num2<<endl;
	cout << "_____" <<endl;

	cin.get();
	cout << right << setw(5) << sum << endl;
	*/

	//18.Interest Earned
	/*
	float principle, interestRate, timesCompounded, interestEarned, totalInSavings;

	cout << "This program computes the amount earned on investmen given the interest rate, times compounded\n"
	<< "and principle.\n\n";
	cout << "Please enter the principle investment: $";
	cin >> principle;
	cout << "Please enter the interest rate: %";
	cin >> interestRate;
	cout << "Please enter the times compounded per year: ";
	cin >> timesCompounded;

	interestRate /= 100;
	totalInSavings = principle * pow((1 + (interestRate / timesCompounded)), timesCompounded);
	interestEarned = totalInSavings - principle;
	interestRate *= 100;

	cout << setprecision(2) << fixed << showpoint<<endl;
	cout << left << setw(20) << "Interest Rate:" << right << setw(11) << interestRate <<"%"<< endl;
	cout << noshowpoint << setprecision(0) << fixed;
	cout << left << setw(20) << "Times Compounded:" << right << setw(11) << timesCompounded << endl;
	cout << setprecision(2) << fixed << showpoint;
	cout << left << setw(20) << "Principle:" << "$" << right << setw(10) << principle << endl;
	cout << left << setw(20) << "Interest:" << "$" << right << setw(10) << interestEarned<< endl;
	cout << left << setw(20) << "Amount in Savings:" << "$" << right << setw(10) << totalInSavings<< endl;
	*/

	//19. Monthly Payments
	/*
	cout << "This program calcuates the monthly payments on a loan given input of factors about the loan.\n\n";

	float iRateMonth, loanAmount, numberOfPayments;
	float monthlyPayment, amountPaidBack, interestPaid, totalPayments;

	cout << "Please enter the loan amount: $";
	cin >> loanAmount;
	cout << "Please enter the monthly interest rate on the loan: %";
	cin >> iRateMonth;
	cout << "Please enter the number of payments: ";
	cin >> numberOfPayments;


	iRateMonth /= 100;

	monthlyPayment = ((iRateMonth * pow((1 + iRateMonth), numberOfPayments)) / (pow((1 + iRateMonth), numberOfPayments) - 1)) * loanAmount;
	iRateMonth *= 100;

	totalPayments = numberOfPayments * monthlyPayment;

	interestPaid = totalPayments - loanAmount;

	cout << setprecision(2) << fixed << showpoint;
	cout << left << setw(25) << "Loan Amount:" <<"$"<< right << setw(10) << loanAmount << endl;
	cout << setprecision(0) << noshowpoint;
	cout << left << setw(25) << "Monthly Interest Rate:" << right << setw(11) << iRateMonth <<"%"<< endl;
	cout << left << setw(25) << "Number of Payments:" << right << setw(11) << numberOfPayments << endl;
	cout << setprecision(2)  << showpoint;
	cout << left << setw(25) << "Monthly Payment:" << "$" << right << setw(10) << monthlyPayment << endl;
	cout << left << setw(25) << "Amount Paid Back:" << "$" << right << setw(10) << totalPayments << endl;
	cout << left << setw(25) << "Interest Paid:" << "$" << right << setw(10) << interestPaid << endl;
	*/
	
	//20.Pizza Pi
	/*
	const float PI = 3.14159;
	const float sliceSize = 14.125;
	float diameter, radius, pizzaArea;
	int numberOfSlices;

	cout << "This program determines the amount of slices you can get given the diameter of the pizza.\n\n";
	cout << "Please enter the diameter of the pizza: ";
	cin >> diameter;

	radius = diameter / 2;

	pizzaArea = PI*pow(radius, 2);

	numberOfSlices = pizzaArea / sliceSize;

	cout << "\nThe amount of whole pizza slices you can get is: " << numberOfSlices << endl;
	*/

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