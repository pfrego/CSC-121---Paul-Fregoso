# include <iostream>
# include <iomanip>
using namespace std;
int main(){
    double hours = 0.0;
    double children = 0.0;
    double rate = 16.78;
    double OT_rate = 25.17;
    cout << "Welcome to the Payroll Program! \nHow many hours did you work this week? ";
    cin >> hours;
    cout << "\nHow many children do you have? ";
    cin >> children;
    if ( hours > 40 && children >=3 ){
        double OT_gross = OT_rate * (hours - 40);
        double true_gross = OT_gross + (rate * 40);
        double SocSec = true_gross * .06;
        double FedTax = true_gross * .14;
        double StaTax = true_gross * .05;
        int Union = 10;
        int HI = 35;
        double net = true_gross - SocSec - FedTax - StaTax - Union - HI;
        cout << fixed << setprecision (2);
        cout << "Payroll Stub: \n \nHours: " << hours << "\nRate: $" << rate << "\nOT Rate: $" << OT_rate << "\nGross: $" << true_gross << "\n \nSocSec: $" << SocSec << "\nFedTax: $" << FedTax << "\nStaTax: $" << StaTax << "\nUnion: $" << Union << "\nInsurance: $" << HI << "\n \nNet: $" << net << "\n";
    }else if (hours > 40){
        double OT_gross = OT_rate * (hours - 40);
        double true_gross = OT_gross + (rate * 40);
        double SocSec = true_gross * .06;
        double FedTax = true_gross * .14;
        double StaTax = true_gross * .05;
        int Union = 10;
        int HI = 15;
        double net = true_gross - SocSec - FedTax - StaTax - Union - HI;
        cout << fixed << setprecision (2);
        cout << "Payroll Stub: \n \nHours: " << hours << "\nRate: $" << rate << "\nOT Rate: $" << OT_rate << "\nGross: $" << true_gross << "\n \nSocSec: $" << SocSec << "\nFedTax: $" << FedTax << "\nStaTax: $" << StaTax << "\nUnion: $" << Union << "\nInsurance: $" << HI << "\n \nNet: $" << net << "\n";
    }else if (children >= 3){
        double gross = hours * rate;
        double SocSec = gross * .06;
        double FedTax = gross * .14;
        double StaTax = gross * .05;
        int Union = 10;
        int HI = 35;
        double net = gross - SocSec - FedTax - StaTax - Union - HI;
        cout << fixed << setprecision (2);
        cout << "Payroll Stub: \n \nHours: " << hours << "\nRate: $" << rate << "\nGross: $" << gross << "\n \nSocSec: $" << SocSec << "\nFedTax: $" << FedTax << "\nStaTax: $" << StaTax << "\nUnion: $" << Union << "\nInsurance: $" << HI << "\n \nNet: $" << net << "\n";
    } else {
        double gross = hours * rate;
        double SocSec = gross * .06;
        double FedTax = gross * .14;
        double StaTax = gross * .05;
        int Union = 10;
        int HI = 15;
        double net = gross - SocSec - FedTax - StaTax - Union - HI;
        cout << fixed << setprecision (2);
        cout << "Payroll Stub: \n \nHours: " << hours << "\nRate: $" << rate << "\nGross: $" << gross << "\n \nSocSec: $" << SocSec << "\nFedTax: $" << FedTax << "\nStaTax: $" << StaTax << "\nUnion: $" << Union << "\nInsurance: $" << HI << "\n \nNet: $" << net << "\n";
    }
    cout << "Thank you for using the Payroll Program! \n";
}
