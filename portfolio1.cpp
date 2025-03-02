#include <iostream>
using namespace std;
int main(){
    int choice1 = 0.0;
    int choice2 = 0.0;
    int choice3 = 0.0;
    int choice4 = 0.0;
    int choice5 = 0.0;
    int choice6 = 0.0;
    cout << "You are walking back home late at night, you have the option to take a shortcut through the woods, what do you do? \n"<<"1. Take the Shortcut...\n" << "2. Take the long way home...\n";
    cin >> choice1;
    while (choice1 > 2){
        cout << "That was invalid, try again..." << "You are walking back home late at night, you have the option to take a shortcut through the woods, what do you do? \n"<<"1. Take the Shortcut...\n" << "2. Take the long way home...\n";
        cin >> choice1;
    }
    if (choice1 == 2){
        cout << "You end up taking the long way back home and make it there safely, the next morning you see on the news that the police found a bunch of dead bodies in a house in the woods. You dodged a bullet, and got lucky... \n";
    }
    if (choice1 == 1) {
        cout << "You take the short cut in the woods, as you are walking you hear strange noises as you go deeper in the darkness, what do you do? \n\n"<<"1. Move towards the strange noises...\n" << "2. Go the other way...\n";
        cin >> choice2;
        while (choice2 > 2){
            cout << "Invalid choice, try again..."<<"You take the short cut in the woods, as you are walking you hear strange noises as you go deeper in the darkness, what do you do? \n\n"<<"1. Move towards the strange noises...\n" << "2. Go the other way...\n";
            cin >> choice2;
        }
        while (choice2 == 2){
            cout << "You try to go the other way to get out the woods...but you get lost...the strange noises are still close by, what do you do?\n\n" << "1. Investigate the noise...\n" << "2. Go the other way...\n";
            cin >> choice2;
        }
        if (choice2 == 1 ){
            cout << "You go to investigate the strange noises, as you walk deeper in the woods, you see a man, but he doesn't look human, he has very long, and sharp teeth, and he has wings. It's a vampire, you look dead into its eyes and stand there paralyzed in fear. As it slowly moves closer to you, you see a sharp wooden stake in front of it...what do you do? \n\n" << "1. Run away in fear...\n" << "2. Fight back...\n";
            cin >> choice3;
            while(choice3 > 2){
                cout << "Invalid input, try again..." << "You go to investigate the strange noises, as you walk deeper in the woods, you see a man, but he doesn't look human, he has very long, and sharp teeth, and he has wings. It's a vampire, you look dead into its eyes and stand there paralyzed in fear. As it slowly moves closer to you, you see a sharp wooden stake in front of it...what do you do? \n\n" << "1. Run away in fear...\n" << "2. Fight back...\n";
                cin >> choice3;
            }
            if (choice3 == 1) {
                cout << "You run away as fast as you can, and the monster roars. The chase has begun...\n" << "While you are running you stumble upon a house, do you go inside?\n\n"<< "1. Go Inside...\n" << "2. Keep Running...\n";
                cin >> choice4;
                while(choice4 > 2){
                    cout << "Invalid input, try again..."<<"You run away as fast as you can, and the monster roars. The chase has begun...\n" << "While you are running you stumble upon a house, do you go inside?\n\n"<< "1. Go Inside...\n" << "2. Keep Running...\n";
                    cin >> choice4;
                }
                if(choice4 == 1){
                    cout << "You go inside the house and find out that no one is home. You barricade yourself in the house, hoping to make it through the night. You can't fall asleep, and stay up the whole night... It is now day time, you hear the police outside the house. You let them in the house, thinking that they will help you... you try to tell them about what you saw and how there's a monster in the woods, but no one believes you. The police find a bunch of dead bodies in the basement, and they have no one else to blame but you...\n\n"<< "You go to prison for your crimes\n\n";
                }
                if (choice4 == 2){
                    cout << "You decide to keep running but you are not fast enough...\n" << "The vampire catches up to you and makes you his late night snack, all you hear in the cold, dark night are your own screams...\n";
                    cout<<" You                ...\n";
                   cout<<" Died             ;::::;\n";
                  cout<<"               ;::::; :;\n";
                cout<<"            ;:::::'   :;\n";
               cout<<"           ;:::::;     ;.\n";
             cout<<"         ,:::::'       ;           OOO \n";
             cout<<"         ::::::;       ;          OOOOO \n";
            cout<<"         ;:::::;       ;         OOOOOOOO\n";
          cout<<"       , ;::::::;     ;'         / OOOOOOO\n";
        cout<<"      ;:::::::::`. ,,,;.        /  / DOOOOOO\n";
      cout<<"    .';:::::::::::::::::;,     /  /     DOOOO\n";
     cout<<"   ,::::::;::::::;;;;::::;,   /  /        DOOO\n";
    cout<<"  ;`::::::`'::::::;;;::::: ,#/  /          DOOO\n";
    cout<<"  :`:::::::`;::::::;;::: ;::#  /            DOOO\n";
    cout<<"  ::`:::::::`;:::::::: ;::::# /              DOO\n";
    cout<<"  `:`:::::::`;:::::: ;::::::#/               DOO\n";
    cout<<"  :::`:::::::`;; ;:::::::::##                OO\n";
    cout<<"  ::::`:::::::`;::::::::;:::#                OO\n";
    cout<<"  `:::::`::::::::::::;'`:;::#                O\n";
     cout<<"  `:::::`::::::::;' /  / `:#\n";
      cout<<"   ::::::`:::::;'  /  /   `#\n";
                }
            }if (choice3 == 2){
                srand(time(0));
                int damage = (1 + (rand()% 100));
                if (damage < 60 ){
                    cout << "You pick up a large, sharp wooden stake you found on the ground and fight back...\n";
                    cout << "The hit didn't do enough damage, the vampire grabs you and makes you his late night snack.\n All you can hear in the cold, dark night are your own screams...\n\n";
                    cout<<" You                ...\n";
                   cout<<" Died             ;::::;\n";
                  cout<<"               ;::::; :;\n";
                cout<<"            ;:::::'   :;\n";
               cout<<"           ;:::::;     ;.\n";
             cout<<"         ,:::::'       ;           OOO \n";
             cout<<"         ::::::;       ;          OOOOO \n";
            cout<<"         ;:::::;       ;         OOOOOOOO\n";
          cout<<"       , ;::::::;     ;'         / OOOOOOO\n";
        cout<<"      ;:::::::::`. ,,,;.        /  / DOOOOOO\n";
      cout<<"    .';:::::::::::::::::;,     /  /     DOOOO\n";
     cout<<"   ,::::::;::::::;;;;::::;,   /  /        DOOO\n";
    cout<<"  ;`::::::`'::::::;;;::::: ,#/  /          DOOO\n";
    cout<<"  :`:::::::`;::::::;;::: ;::#  /            DOOO\n";
    cout<<"  ::`:::::::`;:::::::: ;::::# /              DOO\n";
    cout<<"  `:`:::::::`;:::::: ;::::::#/               DOO\n";
    cout<<"  :::`:::::::`;; ;:::::::::##                OO\n";
    cout<<"  ::::`:::::::`;::::::::;:::#                OO\n";
    cout<<"  `:::::`::::::::::::;'`:;::#                O\n";
     cout<<"  `:::::`::::::::;' /  / `:#\n";
      cout<<"   ::::::`:::::;'  /  /   `#\n";
                }else{
                    cout << "You got lucky and stunned the vampire, what should you do next? \n\n" << "1. Take the chance to run away...\n" << "2. Vanquish it...\n";
                    cin >> choice5;
                    while (choice5 > 2){
                        cout << "Invalid input, try again..."<<"You got lucky and stunned the vampire, what should you do next? \n\n" << "1. Take the chance to run away...\n" << "2. Vanquish it...\n";
                        cin >> choice5;
                    }
                    if (choice5 == 1){
                        cout << "You run away as fast as you can, and the monster roars.\n The chase has begun...\n" << "While you are running you stumble upon a house, do you go inside?\n\n"<< "1. Go Inside...\n"<< "2. Keep Running...\n";
                        cin >> choice6;
                        while (choice6 > 2){
                            cout << "Invalid input, try again..."<<"You run away as fast as you can, and the monster roars.\n The chase has begun...\n" << "While you are running you stumble upon a house, do you go inside?\n\n"<< "1. Go Inside...\n"<< "2. Keep Running...\n";
                            cin >> choice6;
                        }
                        if (choice6 == 1){
                            cout << "You go inside the house and find out that no one is home. You barricade yourself in the house, hoping to make it through the night. You can't fall asleep, and stay up the whole night... It is now day time, you hear the police outside the house. You let them in the house, thinking that they will help you... you try to tell them about what you saw and how there's a monster in the woods, but no one believes you. The police find a bunch of dead bodies in the basement, and they have no one else to blame but you...\n\n"<<"You go to prison for your crimes...\n\n";
                        } if (choice6 == 2){
                            cout << "You decide to keep running but you are not fast enough...\n" << "The vampire catches up to you and makes you his late night snack, all you hear in the cold, dark night are your own screams...\n\n";
                            cout<<" You                ...\n";
                           cout<<" Died             ;::::;\n";
                          cout<<"               ;::::; :;\n";
                        cout<<"            ;:::::'   :;\n";
                       cout<<"           ;:::::;     ;.\n";
                     cout<<"         ,:::::'       ;           OOO \n";
                     cout<<"         ::::::;       ;          OOOOO \n";
                    cout<<"         ;:::::;       ;         OOOOOOOO\n";
                  cout<<"       , ;::::::;     ;'         / OOOOOOO\n";
                cout<<"      ;:::::::::`. ,,,;.        /  / DOOOOOO\n";
              cout<<"    .';:::::::::::::::::;,     /  /     DOOOO\n";
             cout<<"   ,::::::;::::::;;;;::::;,   /  /        DOOO\n";
            cout<<"  ;`::::::`'::::::;;;::::: ,#/  /          DOOO\n";
            cout<<"  :`:::::::`;::::::;;::: ;::#  /            DOOO\n";
            cout<<"  ::`:::::::`;:::::::: ;::::# /              DOO\n";
            cout<<"  `:`:::::::`;:::::: ;::::::#/               DOO\n";
            cout<<"  :::`:::::::`;; ;:::::::::##                OO\n";
            cout<<"  ::::`:::::::`;::::::::;:::#                OO\n";
            cout<<"  `:::::`::::::::::::;'`:;::#                O\n";
             cout<<"  `:::::`::::::::;' /  / `:#\n";
              cout<<"   ::::::`:::::;'  /  /   `#\n";
                        }
                    }if (choice5 == 2){
                        srand(time(0));
                        int extra_damage = (1 +(rand()% 100));
                        cout << "You decided to take the chance and go for the kill...\n\n";
                    
                        if (extra_damage <= 51){
                            cout << "It was a direct hit, you were able to stab the vampire through the heart and vanquished it yourself! Not taking the chance to see if there was more than one vampire, you run and get out of the woods and made it home without harm. You wake up the next morning thinking that it was all a nightmare...\n\n"<<"You survived...\n";
                        }else{
                            cout << "The hit didn't do enough damage, the vampire grabs you and makes you his late night snack. All you can hear in the cold, dark night are your own screams...\n\n";
                            cout<<" You                ...\n";
                           cout<<" Died             ;::::;\n";
                          cout<<"               ;::::; :;\n";
                        cout<<"            ;:::::'   :;\n";
                       cout<<"           ;:::::;     ;.\n";
                     cout<<"         ,:::::'       ;           OOO \n";
                     cout<<"         ::::::;       ;          OOOOO \n";
                    cout<<"         ;:::::;       ;         OOOOOOOO\n";
                  cout<<"       , ;::::::;     ;'         / OOOOOOO\n";
                cout<<"      ;:::::::::`. ,,,;.        /  / DOOOOOO\n";
              cout<<"    .';:::::::::::::::::;,     /  /     DOOOO\n";
             cout<<"   ,::::::;::::::;;;;::::;,   /  /        DOOO\n";
            cout<<"  ;`::::::`'::::::;;;::::: ,#/  /          DOOO\n";
            cout<<"  :`:::::::`;::::::;;::: ;::#  /            DOOO\n";
            cout<<"  ::`:::::::`;:::::::: ;::::# /              DOO\n";
            cout<<"  `:`:::::::`;:::::: ;::::::#/               DOO\n";
            cout<<"  :::`:::::::`;; ;:::::::::##                OO\n";
            cout<<"  ::::`:::::::`;::::::::;:::#                OO\n";
            cout<<"  `:::::`::::::::::::;'`:;::#                O\n";
             cout<<"  `:::::`::::::::;' /  / `:#\n";
              cout<<"   ::::::`:::::;'  /  /   `#\n";
                        }
                    }}
                }}
        }
        }
