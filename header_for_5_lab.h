#include <iostream>
#include <vector>
using namespace std;

class Flower {
public:
    string name;
    float height;
    string size;
    string color;
    float price;
    int quantity;
    int delivery_rate;
    Flower(string name, float height, string size, string color, float price, int quantity, int delivery_rate) {
        this->name = name;
        this->height = height;
        this->size = size;
        this->color = color;
        this->price = price;
        this->quantity = quantity;
        this->delivery_rate = delivery_rate;
    }
    Flower() {
        name = "Noname flower";
        height = 0;
        size = "";
        color = "";
        price = 0;
        quantity = 0;
        delivery_rate = 0;
    }
};

class FlowerShop {
private:
    vector<Flower> assortment;
public:
    void SortFlow() {
        if (assortment.size() > 1) {
            for (int i = 0; i < assortment.size()-1; i++) {
                for (int k = 0; k < assortment.size()-i-1; k++) {
                    if (assortment[k].price < assortment[k+1].price){
                        swap(assortment[k], assortment[k+1]);
                    }
                }
            }
        }
    }
     void DisplayTop() {
        SortFlow();
        cout << "TOP Flowers:" <<endl;
        for(int i=0; i<assortment.size(); i++){
            cout<<i+1<<")"<<assortment[i].name << " - " << assortment[i].price <<endl;
        }
    }
    void AdditionalFlower(Flower flow) {
        assortment.push_back(flow);
    }
    void DeleteFlower(int k) {
        assortment.pop_back();
    }
};

class Bouquet {
private:
    vector<Flower> bouquet;
    float sum=0;
    vector<int> quantity;
public:
    void AddFlower(Flower flower, int quantity_) {
        quantity.push_back(quantity_);
        bouquet.push_back(flower);
    }
    float CalcSum() {
        for (int i = 0; i < bouquet.size(); i++) sum += bouquet[i].price * quantity[i];
        return sum;
    }
};