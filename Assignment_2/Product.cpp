#include <iostream>
using namespace std;

class Product
{
    private:
    int id,unit_price,quantity;
    string name;

    public:

    void get()
    {
        cout<<"Enter product id : ";
        cin>>id;
        cout<<"Enter product name : ";
        cin>>name;
        cout<<"Enter peoduct quantity : ";
        cin>>quantity;
        cout<<"Enter product unit price : ";
        cin>>unit_price;
    }

    void display()
    {
        cout<<"Product id : "<<id<<endl;
        cout<<"Product name : "<<name<<endl;
        cout <<"Product quantity : "<<quantity<<endl;
        cout<<"product unit price : "<<unit_price<<endl;
    }
    
    void cost()
    {
        cout<<"Total cost of product is ; "<<unit_price*quantity<<endl;
    }

};

int main()
{
    Product p;
    p.get();
    p.display();
    p.cost();
    return 0;
}