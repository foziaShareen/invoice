#include<iostream>
#include<string>
using namespace std;
class Invoice
{
    private:
    string part_number;
    string part_description;
    int quantity_purchased;
    int price_per_unit=0;
    public:
   // Invoice();
    Invoice(string part_num ,string part_des, int qty ,int price )
    {
     
     part_number=part_num;
     part_description=part_des;
     quantity_purchased=qty;
     
       if(price_per_unit>0)
        {price_per_unit=price;}
        else
        if(price_per_unit<0)
       {
           price_per_unit=0;
           cout<<"invalid";
       }
       
       
    }
    
    void setPart_number(string part_num)
    {
             Invoice:: part_number=part_num;

    }
    string getPart_number()
    {
       return part_number; 
    }
     void setpart_description(string part_des)
    {
    part_description=part_des;

    }
     string getpart_description()
    
    {
       return part_description; 
    }
     void setPrice(int price)
    {
        if(price_per_unit<0)
       {
           price_per_unit=0;
           
       }
       else
       if(price_per_unit>0)
       
      {price_per_unit=price;}

    }
    int getPrice()
    {
        return price_per_unit;
    }


    void setQuantity(int qty)
    {
       quantity_purchased=qty; 
    }
  
    int getQuantity()
    
    {
       return quantity_purchased; 
    }
      
   
};
    int main()
    {
        
     Invoice i1("pc1","pc full",23,-5);
       
        cout<<i1.getPart_number()<<endl;
        cout<<i1.getpart_description()<<endl;
        cout<<i1.getQuantity()<<endl;
        cout<<i1.getPrice()<<endl;
    }

