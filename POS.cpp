#include <iostream>
#include <array>
#include <tuple>
using namespace std;

class PointofSale{
    private:
    array< tuple < string, string, double>, 6 > inventory;
    array< string, 5 > purchase_list;
    array< double, 5> purchase_total;
    double currentIndex;
    double price_total;
public:
    PointofSale(){
        double currentIndex = 0;
        double price_total = 0;
        tuple< string, string, double> cucumber = make_tuple("Cucumber", "00295", .15);
        inventory.at(0) = cucumber;
        tuple < string, string, double> apple = make_tuple("Granny Smith Apple", "10342", .50);
        inventory.at(1) = apple;
        tuple < string, string, double> banana = make_tuple("Banana", "10557", .45);
        inventory.at(2) = banana;
        tuple < string, string, double> apricot = make_tuple("Apricot", "11221", .90);
        inventory.at(3) = apricot;
        tuple < string, string, double> peach = make_tuple("Peach", "12151", .75);
        inventory.at(4) = peach;
        tuple< string, string, double> celery = make_tuple("Celery", "12157", .80);
        inventory.at(5) = celery;
    }
    void addCode(string code){
        purchase_list.at(currentIndex) = code;
        currentIndex++;
    }
    void total(double price){
        purchase_total.at(price_total) = price;
        price_total++;
    }
};
int main(){
    PointofSale pos;
    pos.addCode("12151");
    pos.addCode("11221");
    pos.total(.80);
    pos.total(.75);
}
