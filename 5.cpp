#include <iostream>
#include <vector>
#include "header_for_5_lab.h"
using namespace std;



int main()
{
    Flower rose = Flower("Rose", 18, "average", "red", 30, 13, 50);
    Flower romashka = Flower("Chamomile", 10, "low", "white", 16, 13, 50);
    Flower yellow_rose = Flower("Yellow Rose", 20, "average", "yellow", 32, 13, 50);
    Flower peonies = Flower("Peonies", 24, "average", "pink", 10, 13, 50);
    
    FlowerShop fw;
    fw.AdditionalFlower(rose);
    fw.AdditionalFlower(romashka);
    fw.AdditionalFlower(yellow_rose);
    fw.AdditionalFlower(peonies);
    //fw.DeleteFlower(3);
    cout << "_________________________" << endl;
    
    fw.DisplayTop(); 
    cout << "_________________________" << endl;
    

    Bouquet bouquet;
    bouquet.AddFlower(rose, 3);
    bouquet.AddFlower(romashka, 3);
    cout << "Bouquet value " << bouquet.CalcSum() << endl;
    cout << "_________________________" << endl;
}