#include <iostream>
#include<cstdlib>
#include<stdio.h>
using namespace std;
class res
{
    int no_dish;
    int dish[10];
    float tot,final_bill,tip,tax;
public:
    res()
    {

        tot=0;
        final_bill=0;
    }
    int dish_sel()
    {
        int ch;
        cout<<"\n Select The Dish As Registered ";
        cout<<"\n 1. Tea (10rs.) \n 2. Coffee(20 rs.) \n 3. Bread Omellete (30 rs.) \n 4. Chowmien (rs. 45)";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"\n Tea Added ";
            total(1);
            break;
            case 2:cout<<"\n Coffee Added ";
            total(2);
            break;
            case 3:cout<<"\n Bread Ommellte ";
            total(3);
            break;
            case 4:cout<<"\n Bread Ommellte ";
            total(4);
            break;
            default: cout<<"\n Invalid Choice ";
        }
    }
    int order(int n)
    {

        for(int i=0;i<n;i++)
        {
            dish_sel();
            }
    }
int billing()
{
    cout<<"\n Want To add Tip :) ";
    cin>>tip;
    if(tip>0)
    {
        cout<<"\n Thanks For Tipping ";
    }
    cout<<"\n Your Total Amount is ";
    cout<<tot;
    tax=tot*18/100;
    final_bill=tot+tip+tax;
    cout<<"\n Tip "<<tip<<"\n Overall (inluding taxes) "<<final_bill;

    }
    int total(int x)
    {
        switch(x)
        {
            case 1: tot+=10;
            break;
            case 2: tot+=20;
            break;
            case 3: tot+=30;
            break;
            case 4: tot+=45;
            break;
        }
    }
};
int main()
{

    int choice,num,l=1;
    res r;
    do
    {
system("cls");

    cout<<"What You Want To Do \n 1. Order \n 2. Get Bill  ";
    cin>>choice;
    switch(choice)
    {
        case 1: cout<<"\n 1. Tea (10rs.) \n 2. Coffee \n 3. Bread Omellete (30 rs.) \n 4. Chowmien (rs. 45)  ";
               cout<<"\n Enter The The Number of Dishes Ordered  ";
cin>>num;
r.order(num);
        break;
        case 2: r.billing();
        break;
        default:cout<<"\n Wrong Choice ";
        break;
    }
    l++;
    }while(l<=2);
    return 0;
}
