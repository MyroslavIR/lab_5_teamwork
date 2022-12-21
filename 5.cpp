#include <iostream>
#include <vector>
#include "flower-flower_shop-bouquet.h"
using namespace std;



int main()
{
    Flower rose = Flower("Rose", 18, "average", "red", 30, 13, 50);
    Flower romashka = Flower("Chamomile", 10, "low", "white", 16, 13, 50);
    Flower yellow_rose = Flower("Yellow Rose", 20, "average", "yellow", 32, 13, 50);
    Flower peonies = Flower("Peonies", 24, "average", "pink", 10, 13, 50);
    
    FlowerShop bloom;
    bloom.AdditionalFlower(rose);
    bloom.AdditionalFlower(romashka);
    bloom.AdditionalFlower(yellow_rose);
    bloom.AdditionalFlower(peonies);

    bloom.DeleteFlower(2);
    cout << "_________________________" << endl;
    
    bloom.DisplayTop(4); 
    cout << "_________________________" << endl;
    

    Bouquet bouquet;
    bouquet.AddFlower(rose, 3);
    bouquet.AddFlower(romashka, 3);
    cout << "Bouquet value " << bouquet.CalcSum() << endl;
    cout << "_________________________" << endl;
}
