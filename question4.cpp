//Question 4: Mr Caleb the HOC of 200level computer science in Caleb University bought the following goods in one warehouse in Lagos where pieces of these goods or products are displayed exclusive 5% VAT.
//i)one bag of rice @ #30,000.00
//ii)A 25litre of groundnut oil @ #15,000.00
//iii)50kg of beef @ #5,000 each (per kg)
//a)Write a C++ program to find the total amount paid by Caleb (HOC) if VAT was charged @ 17.5 %
//b)What is the total expenditure if transportation cost was put @ #4,500.00

#include <iostream>
using namespace std;

int main(){
//	this is a list of the prices of the items Caleb got
	double rice = 30000.00;
	double groudnutOilPerKg = 15000.00;
	double beefPerKg = 5000;
	int kgOfBeefBought = 50; // this is the total kilogram of beef he bought
	int transportCost = 4500;
	
	double amountOfBeefBought = beefPerKg * kgOfBeefBought; //this results to the amount of beef he bought in naira
	
	double totalExpenditure = rice + groudnutOilPerKg + amountOfBeefBought ;
	
	double vat = totalExpenditure * (17.5 / 100);
	
	double totalExpenditureWithVat = totalExpenditure + vat;
	
	double totalExpenditureWithVatAndTransport = totalExpenditureWithVat + transportCost;
	
	cout << "A) Total amount paid by Caleb at 17.5% vat = " << totalExpenditureWithVat << endl ;
	
	cout << "B) Total expenditure with transport = " << totalExpenditureWithVatAndTransport;
	
	return 0;
}
