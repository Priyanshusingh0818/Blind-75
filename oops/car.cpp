#include<iostream>
using namespace std;

class car{
    public:
    string name;
    int price;
    int seats;
    string type;
};
void print(car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<" "<<endl;
}
int main(){
    car c1;
    c1.name = "Xuv 7x0";
    c1.price = 320000;
    c1.seats = 5;
    c1.type = "SUV";

    car c2;
    c2.name = "Maruti 800";
    c2.price = 320000;      // pass by value always aur agar waha & lag jata to pass by refrence ho jata
    c2.seats = 4;
    c2.type = "Hatchback";

    car c3;
    c3.name = "Kia carens";
    c3.price = 249994;
    c3.seats = 8;
    c3.type = "sedan";

    print(c1);
    print(c2);
    print(c3);


}