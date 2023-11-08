 
/* 
 
Deep Patel
 
Programming Fundamentals
 
CS 1436
 
008
 
09/21/2023
 
09/15/2023
 
09/15/2023
 
The program will display the following information:
 
 
The amount of money Jacob paid for the stock.
 
The amount of commission Jacob paid his broker when he bought the stock.
 
The amount that Jacob sold the stock for.
 
The amount of commission Jacob paid his broker when he sold the stock.
 
Display the amount of profit that Jacob made after selling his stock and paying the two commissions to his broker.
 
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 
 
// declare and intialize the variable for the number of stocks the user purhcased
 
int numberOfSharesPurchased = 1000;
 
 
// declare and intialize the variable for for the amount of money to buy per share
 
double costPerStock = 32.87;
 
 
// declare and intialize the variable for the percent on commmission per share
 
double commissionWhenBought = 1.99;
 
 
// declare and intialize the variables for the number of shares sold by the user
 
int numberOfSharesSold = 1000;
 
 
// declare and intialize the varaibles for the amount of money each share was sold for
 
double SoldPerShare = 33.92;
 
 
// declare and intialize the variable for the percent on commission when the stock was sold
 
double commissionWhenSold = 2.02;
 
 
// declare and intialize the variable for total amount money he paid for the stock, without commission.
 
double total_amntPaidForStock = costPerStock * numberOfSharesPurchased;
 
 
cout << "Jacob paid $" << setprecision(2) << fixed << total_amntPaidForStock << " for the stock" << endl;
 
 
//declare and intialize the variable for the amount he paid the broker when he bought the stock.
 
double amntPaidBroker_Bought = (commissionWhenBought / 100.0) * total_amntPaidForStock;
 
 
cout << "Jacob paid $" << setprecision(2) << fixed << amntPaidBroker_Bought << " in commission to his broker when he bought the stock" 
<< endl;
 
 
// declare and intialize the variable for the total amount of money he sold the stock for without commission.
 
double total_amntStockSold = SoldPerShare * numberOfSharesSold;
 
 
cout << "Jacob sold the stock for $" << setprecision(2) << fixed << total_amntStockSold << endl;
 
 
// declare and intialize the variable for the total amount he paid the broker when he sold the stock.
 
double amntPaidBroker_Sold = (commissionWhenSold / 100.0) * total_amntStockSold;
 
 
cout << "Jacob paid $" << setprecision(2) << fixed << amntPaidBroker_Sold << " in commission to his broker when he sold the stock" <<
endl;
 
 
// declare and intialize the variable for the amount of profit he made from the stock.
 
double profit = (total_amntStockSold - amntPaidBroker_Sold) - (total_amntPaidForStock + amntPaidBroker_Bought);
 
 
 
cout << "Jacob gained a profit of: $" << profit << "\nPaid in Commissions when bought: $" << amntPaidBroker_Bought;
cout<< "\nPaid in Commissions when sold: $" << amntPaidBroker_Sold << endl;
 
 
// if else statement to let the user know if he gained or lost money on the stock.
 
if(profit < 0)
{
 
cout<< "Jacob lost money on the stock";
 
}
 
 
else {
 
cout<< "Jacob gained money from the stock";
 
}
 
 
return 0;
}
