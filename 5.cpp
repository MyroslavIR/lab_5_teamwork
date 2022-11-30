#include <iostream>
#include <vector>
#include "class5.h"
using namespace std;



int main()
{
    Flower rose = Flower("Rose", 18, "average", "red", 30, 13, 50);
    Flower romashka = Flower("Chamomile", 10, "low", "white", 16, 13, 50);
    Flower yellow_rose = Flower("Yellow Rose", 20, "average", "yellow", 32, 13, 50);
    Flower peonies = Flower("Peonies", 24, "average", "pink", 10, 13, 50);
    
    FlowerShop fw;
    fw.additionalFlower(rose);
    fw.additionalFlower(romashka);
    fw.additionalFlower(yellow_rose);
    fw.additionalFlower(peonies);
    //fw.deleteFlower(3);
    cout << "_________________________" << endl;
    
    fw.displayTop(); 
    cout << "_________________________" << endl;
    

    Bouquet bouquet;
    bouquet.addFlower(rose, 3);
    bouquet.addFlower(romashka, 3);
    cout << "Bouquet value " << bouquet.calcSum() << endl;
    cout << "_________________________" << endl;
}