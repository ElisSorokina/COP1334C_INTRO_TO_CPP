#include <iostream>
using namespace std;

int main()
{
	const double ITRADE_COMISSION = 2.0;
	double  numberOfShares, costPerShare, marketSharePrice, totalCost, totalProceeds, comission, gainLoss, gainLossPercent;
	string cmpnNameSymbol;
	cout << "\nStock Investment Perfomance Calculator..." << endl;

	cout << "\nCompany Name(no spaces) & Symbol: ";
	cin >> cmpnNameSymbol;
	cout << endl << "Number of Shares transacted: ";
	cin >> numberOfShares;
	cout << endl << "Cost per Share (@buying): ";
	cin >> costPerShare;
	cout << endl <<"Price per Share(@selling): ";
	cin >> marketSharePrice;
	comission = (numberOfShares * costPerShare) * ITRADE_COMISSION / 100;
	totalProceeds = numberOfShares * marketSharePrice;
	totalCost = (numberOfShares * costPerShare) + comission;
	gainLoss = totalProceeds - totalCost;
	gainLossPercent = (totalProceeds / totalCost) * 100;

	cout << "\nRealized Gains / Losses Report..." << endl
		<< "_________________________________" << endl
		<< "\nStock: " << cmpnNameSymbol << endl
		<< "\nQuantity: " << numberOfShares << " shares" << endl
		<< "                                          " << endl
		<< "\nTotal Cost:\t$" << totalCost << endl
		<< "\nTotal Proceeds:\t$" << totalProceeds << endl
		<< "\nCommissions:\t$" << comission << endl
		<< "\nGains/Losses:\t$" << gainLoss << "(" << gainLossPercent << "%)" << endl;



		return 0;
}