#include <stdio.h>
#include <stdlib.h>

//Function prototype
 double calculateprofit(double Quantity, double BuyingPrice, double SellingPrice);

int main()
{   double Quantity, BuyingPrice, SellingPrice, Profit;
printf("Enter the Buying price:");
scanf("%lf",&BuyingPrice);
printf("Enter the selling price:");
scanf("%lf",&SellingPrice);
printf("Enter the quantity:");
scanf("%lf",&Quantity);
Profit = calculateprofit(Quantity, BuyingPrice, SellingPrice);
printf("The buying price is %.2lf\n",BuyingPrice);
printf("The selling price is %.2lf\n",SellingPrice);
printf("The quantity is %.2lf\n",Quantity);
printf("The profit on a transaction is %.2lf\n",Profit);

    return 0;
}
double calculateprofit(double Quantity, double BuyingPrice, double SellingPrice){
   return (SellingPrice - BuyingPrice ) * Quantity;
}
