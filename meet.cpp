# include <iostream>
# include <cmath>
using namespace std;
int main() {
    double max = 0.0;
    double num = 0.0;
    cout<< "Welcome to Room Capacity Program! \n" << "How many people can this room hold? " ;
    cin>> max;
    cout<< "How many people have arrived for the meeting? ";
    cin>> num;
    
    if (num < max){
        double left = max - num;
        double half = num/max;
        double per = half * 100;
        cout<< "You have used " << round (per) << "% of this room's capacity \n" << "You still have space for " << left << " people \n" << "This meeting is LEGAL, you may proceed! \n";
    }
    
    if (num>max){
        double half = num/max;
        int per = half * 100;
        cout<< "You have used " << round (per) << "% of this room's capacity \n" << "You have no more space, and some people must leave \n" << "This meeting is NOT LEGAL, you may not proceed with the meeitng until people leave! \n";
    }
    
    cout << "Thank you for using the Room Capacity Program! \n";
}
