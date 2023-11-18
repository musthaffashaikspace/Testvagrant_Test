#include<bits/stdc++.h>

class Product
{
    private:
        int id;
        std::string name;
        float price;
        float gst;
        int quantity;
    public:
        Product(int a,std::string b,float c,float d,int e):id(a),name(b),price(c),gst(d),quantity(e){};
        float getprice(void)
        {
            return price;
        }
        std::string getname(void)
            {return  name;}
        float getgst(void)
            {return gst;}
        int getquantity(void)
            {return quantity;}
        void show(void)
        {
            std::cout<<"\nItem id:\t"<<id<<std::endl;
            std::cout<<"Name:\t"<<name<<std::endl;
            std::cout<<"price:\t"<<price<<std::endl;
            std::cout<<"gst percent:\t"<<gst<<std::endl;
            std::cout<<"quantity:\t"<<quantity<<std::endl;
        }
};
class Cart
{
    private:
        std::vector<Product>products;
    public:
        Cart(std::vector<Product>p)
        {
            products=p;
        }
        void maxgst(void)
        {
            float max=FLT_MIN;
            int ans=-1;
            for(int i=0;i<products.size();i++)
            {
                float amt=int(products[i].getprice()*products[i].getquantity());
                float gstpaid=(products[i].getgst()/100)*amt;
                if(gstpaid>max)
                {
                    ans=i;
                    max=gstpaid;
                }
            }
            std::cout<<"\nThe maximum gst paid was =\t"<<max<<std::endl;
            
            products[ans].show();
        }
        float totamt(void)
        {
            float ans=0;
            for(int i=0;i<products.size();i++)
            {

                float amt=int(products[i].getprice()*products[i].getquantity());
                float gstpaid=(products[i].getgst()/100)*amt;
                float totamt=amt+gstpaid;
                if(products[i].getprice()>=500)
                {
                    totamt=totamt-((5/100)*totamt);
                }
                return totamt;
            }
        }
};