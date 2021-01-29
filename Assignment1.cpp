#include <iostream>
#include <string>
#include <cmath>


  using namespace std;

    int main()
{


    string customerName;
    int customerID;
    int item;
    int quantity;
    double price;
    double amountpaid;
    double balance;
    double totalCost;
    string itemName;
    char next;

    double const PRINTER_PRICE=200.00,
                 TABLE_PRICE=250.00,
                 PHONE_PRICE=400.00;

    const int printer=1,
                table=2,
                phone=3;
    cout<<"WELCOME TO KINGSFORD SUPERMARKET"<<endl;
    cout<<"Enter customerName :" <<endl;
    cin>>customerName;


    cout<<"Enter your ID :"<<endl;
    cin>>customerID;

    double vat=0.12;

    do
    {

    cout<<"THERE ARE THREE ITEMS IN STOCK ARE DESCRIBED BELOW.\n ENTER THE NUMBER ATTACHED T0 IT TO INDICATE THE ITEM YOU ARE BUYING"<<endl;
    cout<<"1.printer\n2.table\n3.phone"<<endl;

    cin>>item;


    switch (item)
    {

   case printer:
       {
    string itemName="PRINTER";
    cout<<"How many are you buying? " <<endl;
    cin>>quantity;
    price=PRINTER_PRICE*quantity;
    cout<<"The cost is "<<price<<endl;
    vat=price*0.12;
    cout<<"The vat amount is "<<vat<<endl;
    totalCost=(PRINTER_PRICE*quantity+vat);
    cout<<"total cost is : "<<totalCost<<endl;
    cout<<"Enter your total money GHS"<<endl;
    cin>>amountpaid;


    if(amountpaid>totalCost)
   {
        balance=amountpaid-totalCost;
   }


     while(amountpaid<totalCost)
    {
    cout<<"Your money is insufficient:The money should be equal to "<<totalCost<<" or higher"<<endl;
    cin>>amountpaid;
    }

    cout<<"===================================="<<endl;
    cout<<"RECEIPT INFO" <<endl;
    cout<<"KINSFORD SUPERMARKET"<<endl;
    cout<<"The customer's name is "<<customerName<<endl;
    cout<<"The customer's ID is "<<customerID<<endl;
    cout<<"Item bought : "<<itemName<<endl;
    cout<<"The vat amount is GHS"<<vat<<endl;
    cout<<"The total cost : GHS"<<totalCost<<endl;
    cout<<"Your total money paid : GHS"<<amountpaid<<endl;
    if(amountpaid>totalCost)
    {
        cout<<"Balance : GHS"<<balance<<endl;
    }

       }
    break;
    case table:
        {
      string itemName="TABLE";
      cout<<"How many are you buying? "<<endl;
      cin>>quantity;
      price=TABLE_PRICE*quantity;
      cout<<"The cost is GHS"<<price<<endl;
      vat=price*0.12;
      cout<<"The vat amount is GHS"<<vat<<endl;
      totalCost=(TABLE_PRICE*quantity+vat);
      cout<<"Total cost : GHS"<<totalCost<<endl;
      cout<<"Enter total money in GHS "<<endl;
      cin>>amountpaid;

      if(amountpaid>totalCost)
        //cout<<"Your Balance is"<<balance<<endl;
   { balance=amountpaid-totalCost;

   }
    if(amountpaid<totalCost)
    {


    cout<<"Your money is insufficient:The money should be equal to "<<totalCost<<" or higher"<<endl;
    cin>>amountpaid;
    }
    balance=amountpaid-totalCost;



    cout<<"===================================="<<endl;
    cout<<"RECEIPT INFO" <<endl;
    cout<<"KINSFORD SUPERMARKET"<<endl;
    cout<<"The customer's name is "<<customerName<<endl;
    cout<<"The customer's ID is "<<customerID<<endl;
    cout<<"Item bought : "<<itemName<<endl;
    cout<<"The vat amount is GHS"<<vat<<endl;
    cout<<"The total cost : GHS"<<totalCost<<endl;
    cout<<"Your total money paid : GHS"<<amountpaid<<endl;
    if(amountpaid>totalCost)
    {
        cout<<"Balance : GHS"<<balance<<endl;
    }
   }


   break;

    case phone:
        {
      string itemName="PHONE";
      cout<<"How many are you buying? "<<endl;
      cin>>quantity;
      price=PHONE_PRICE*quantity;
      cout<<"The cost is GHS"<<price<<endl;
      vat=price*0.12;
      cout<<"The vat amount is GHS"<<vat<<endl;
      totalCost=(PHONE_PRICE*quantity+vat);
      cout<<"Amount to pay: GHS"<<totalCost<<endl;
      cout<<"Enter total money in GHS "<<endl;
      cin>>amountpaid;

    while(amountpaid<totalCost)
    {
    cout<<"Your money is insufficient:The money should be equal to "<<totalCost<<" or higher"<<endl;
    cin>>amountpaid;
    }

    balance=amountpaid-totalCost;

    cout<<"===================================="<<endl;
    cout<<"RECEIPT INFO" <<endl;
    cout<<"KINSFORD SUPERMARKET"<<endl;
    cout<<"The customer's name is "<<customerName<<endl;
    cout<<"The customer's ID is "<<customerID<<endl;
    cout<<"Item bought : "<<itemName<<endl;
    cout<<"The vat amount is GHS"<<vat<<endl;
    cout<<"The total cost : GHS"<<totalCost<<endl;
    cout<<"Your total money paid : GHS"<<amountpaid<<endl;
    if(amountpaid>totalCost)
    {
        cout<<"Balance : GHS"<<balance<<endl;
    }
    cout<<"______________________________________"<<endl;
        }

    }
    cout<<"Do you want to buy another item?"<<endl;
    cout<<"Enter 'Y' or 'y' for 'YES' or any other key  as 'NO' to end"<<endl;
    cin>>next;

    } while(next=='Y' || next=='y');
    cout<<"Thank you for patronizing our services"<<endl;
   return 0;

}



