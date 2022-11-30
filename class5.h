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
    int deliveryRate;
    Flower(string NAME, float HEIGHT, string SIZE, string COLOR, float PRICE, int QUANTITY, int DELIVERYRATE) {
        name = NAME;
        height = HEIGHT;
        size = SIZE;
        color = COLOR;
        price = PRICE;
        quantity = QUANTITY;
        deliveryRate = DELIVERYRATE;
    }
    Flower() {
        name = "Noname flower";
        height = 0;
        size = "";
        color = "";
        price = 0;
        quantity = 0;
        deliveryRate = 0;
    }
};

class FlowerShop {
private:
    vector<Flower> assortment;
public:
    void sortFlow() {
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
     void displayTop() {
        sortFlow();
        cout << "TOP Flowers:" << '\n'
            << assortment[0].name << " - " << assortment[0].price << '\n'
            << assortment[1].name << " - " << assortment[1].price << '\n'
            << assortment[2].name << " - " << assortment[2].price << endl;
    }
    void additionalFlower(Flower flow) {
        assortment.push_back(flow);
    }
    void deleteFlower(int k) {
        assortment.pop_back();
    }
};

class Bouquet {
private:
    vector<Flower> bouquet;
    float sum=0;
    vector<int> quantity;
public:
    void addFlower(Flower flower, int Quantity) {
        quantity.push_back(Quantity);
        bouquet.push_back(flower);
    }
    float calcSum() {
        for (int i = 0; i < bouquet.size(); i++) sum += bouquet[i].price * quantity[i];
        return sum;
    }
};