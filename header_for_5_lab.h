#include <iostream>
#include <vector>
using namespace std;

class Flower {
public:
    string name_;
    float height_;
    string size_;
    string color_;
    float price_;
    int quantity_;
    int delivery_rate_;
    Flower(string name_, float height_, string size_, string color_, float price_, int quantity_, int delivery_rate_) {
        this->name_ = name_;
        this->height_ = height_;
        this->size_ = size_;
        this->color_ = color_;
        this->price_ = price_;
        this->quantity_ = quantity_;
        this->delivery_rate_ = delivery_rate_;
    }
    Flower() {
        name_ = "Noname flower";
        height_ = 0;
        size_ = "";
        color_ = "";
        price_ = 0;
        quantity_ = 0;
        delivery_rate_ = 0;
    }
};

class FlowerShop {
private:
    vector<Flower> assortment;
public:
    void SortFlowers() {
        if (assortment.size() > 1) {
            for (int i = 0; i < assortment.size()-1; i++) {
                for (int k = 0; k < assortment.size()-i-1; k++) {
                    if (assortment[k].price_ < assortment[k+1].price_){
                        swap(assortment[k], assortment[k+1]);
                    }
                }
            }
        }
    }
    void DisplayTop(int number_of_flowers) {
        SortFlowers();
        if(number_of_flowers>assortment.size()){
            cout<<"Sorry, but in our shop only "<<assortment.size()<<" flowers"<<endl;
        }
        cout << "TOP Flowers:" <<endl;
        for(int i=0; i<assortment.size(); i++){
            cout<<i+1<<")"<<assortment[i].name_ << " - " << assortment[i].price_ <<endl;
            if(i==number_of_flowers-1){
                break;
            }
        }
    }
    void AdditionalFlower(Flower flow) {
        assortment.push_back(flow);
    }
    void DeleteFlower(int index) {
        assortment.erase(assortment.begin() + index);
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
        for (int i = 0; i < bouquet.size(); i++) sum += bouquet[i].price_ * quantity[i];
        return sum;
    }
};