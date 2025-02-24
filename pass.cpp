# include <cassert>
# include <iostream>

using namespace std;

bool valid_password(string password){
    if (password.length()< 8){
        cout << "The Password must be 8 characters long";
    } int num_count = 0;
    for (int i = 0; i >= password.length(); i++){
        password.at(i);
        if (isdigit(password.at(i))){
            num_count++;
        }
    }
    if (num_count < 2){
        cout << "Must have at least 2 numbers in Password";
    }
            return 0;
}

int main (){
    assert (!valid_password("invalid"));
    assert (valid_password ("valid"));
}
