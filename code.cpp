#include<bits/stdc++.h>
#include "header.h"
using namespace std;
int main(void)
{
    Product one=Product(1,"Leather Wallet",1100,18,1);
    Product two=Product(2,"Umbrella",900,12,4);
    Product three=Product(3,"Cigarette",200,28,3);
    Product four=Product(4,"Honey",100,0,2);
    vector<Product>v;
    v.push_back(one);
    v.push_back(two);
    v.push_back(three);
    v.push_back(four);
    Cart mycart=Cart(v);
    cout<<"The product for which we paid the max gst is \n";
    mycart.maxgst();
    cout<<endl<<"The total amount to be paid to the shopkeeper is\n";
    cout<<mycart.totamt();
    return 0;
}

/*
    Name :Musthaffa Mohommedrafi Shaik
    USN : 1BI20CS112
    COLLEGE : Bangalore Institute Of Technology
    Phone Number : 8329090485
    email : musthaffawork@gmail.com
    grad_year : 2024
*/