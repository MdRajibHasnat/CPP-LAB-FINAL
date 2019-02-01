
#include<bits/stdc++.h>
using namespace std;
class Customer;
class Person
{
public:
    string name;
    Person() {}
    Person(string name)
    {
        this->name=name;
    }
};
class Item : public Person
{
private:
    string itemName,made,colour;
    int price;

public:
    Item() {}
    Item(string itemName,string made,int price,string item_colour)
    {
        this-> itemName =itemName;
        this->made = made;
        this->price = price;
        colour=item_colour;


    }
    void showItem();
};
inline void Item :: showItem()
{
    cout<<"Item Name     :  "<<itemName<<endl;
    cout<<"Made In :  "<<made<<endl;
    cout<<"Price         :  "<<price<<endl;
    cout<<"Colour of Item : "<<colour<<endl;

}
class Type_of_Item : public Item
{
private:
    string itemCategory;

public:
    Type_of_Item() {}

    Type_of_Item(string itemCategory,string itemName,string made,int price,string item_colour):Item(itemName,made,price,item_colour)
    {
        this->itemCategory =itemCategory ;
    }
    void showDetail();
    friend void buyItems(Type_of_Item, Customer );
};
void Type_of_Item :: showDetail()
{
    cout<<"Item Description : "<<endl<<endl;
    cout<<"Item Category :  "<<itemCategory<<endl;
    showItem();

    cout<<endl;
}
class Customer:public Person
{
public:
    string customerCategory;
    Customer() {}

    Customer(string customerCategory,string name):Person(name)
    {
        this->customerCategory=customerCategory;
    }
    friend void buyItems(Type_of_Item, Customer );
};
void buyItems(Type_of_Item b, Customer d)
{
    cout<<"Customer Gender  : "<<d.customerCategory<<endl;
    cout<<"Dear customer "<<d.name<<" , you will get discount if you buy 10 Item at a time."<<endl;
}

int main()
{
    Type_of_Item A("Stationary","Khata","Bangladesh",100,"White");
    Type_of_Item C("Stationary","Pen","Bangladesh",60,"Red");
    Type_of_Item B("Garment","Pant","Bangladesh",700,"Black");
    Type_of_Item E("Garment","T-shirt","Bangladesh",700,"Blue");
    Type_of_Item F("Cosmetic","Cream","Bangladesh",300,"Green");
    Type_of_Item G("Garment","Cap","Bangladesh",150,"Black");
    A.showDetail();
    B.showDetail();
    C.showDetail();
    E.showDetail();
    F.showDetail();
    Customer D("Male","RAJIB");
    buyItems(B,D);

}
