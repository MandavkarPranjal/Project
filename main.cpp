#include<iostream>
using namespace std;
class hotel{
    public:
        // total
        int Trooms{},Tpasta{},Tsalad{},Tburger{},Tpizaa{},Tchicken{},Tnoodle{};
        // sold
        int Srooms{0},Spasta{0},Ssalad{0},Sburger{0},Spizaa{0},Schicken{0},Snoodle{0};
        //input
        int Irooms{},Ipasta{},Isalad{},Iburger{},Ipizaa{},Ichicken{},Inoodle{};
        // password
        const int Password{12345678};
        int inputpass{0};
        void manager(){
            cout << "Enter password: ";
            cin >> inputpass;
            if(inputpass == Password){
                cout << "Welcome to the manager's page" << endl;
                cout<<"Enter the number of rooms: ";
                cin>>Trooms;
                cout<<"Enter the number of pasta: ";
                cin>>Tpasta;
                cout<<"Enter the number of salad: ";
                cin>>Tsalad;
                cout<<"Enter the number of burger: ";
                cin>>Tburger;
                cout<<"Enter the number of pizaa: ";
                cin>>Tpizaa;
                cout<<"Enter the number of chicken: ";
                cin>>Tchicken;
                cout<<"Enter the number of noodle: ";
                cin>>Tnoodle;
                system("cls");
            }
            else{
                cout << "Wrong password" << endl;
                _sleep(3000);
                system("cls");
            }
        }
        void customer(){
            cout << "Welcome to The Pranjal's Hotel servcies" << endl;
            int choice{};
            do{
                cout << "1. Room" << endl;
                cout << "2. Pasta" << endl;
                cout << "3. Salad" << endl;
                cout << "4. Burger" << endl;
                cout << "5. Pizaa" << endl;
                cout << "6. Chicken" << endl;
                cout << "7. Noodle" << endl;
                cout << "8. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> choice;
                switch(choice){
                    case 1:
                        cout << "Enter the number of rooms: ";
                        cin >> Irooms;
                        if(Irooms > Trooms){
                            cout << "Sorry, we don't have enough rooms" << endl;
                            cout << "Total rooms: " << Trooms << endl;
                            cout << "Total rooms sold: " << Srooms << endl;
                        }
                        else if(Irooms < 0){
                            cout << "Sorry, you can't enter negative number" << endl;
                        }
                        else{
                            Srooms = Irooms;
                            cout << "You have successfully ordered " << Srooms << " rooms" << endl;
                            cout << "Thank you for your order" << endl;
                        }
                        cout << "\t-----------------------------------------------------------" << endl;
                        Trooms = Trooms - Srooms;
                        break;
                    case 2:
                        cout << "Enter the number of pasta: ";
                        cin >> Ipasta;
                        if(Ipasta > Tpasta){
                            cout << "Sorry, we don't have enough pasta" << endl;
                            cout << "Total pasta: " << Tpasta << endl;
                            cout << "Total pasta sold: " << Spasta << endl; 
                        }
                        else if(Ipasta < 0){
                            cout << "Sorry, you can't enter negative number" << endl;
                        }
                        else{
                            Spasta = Ipasta;
                            cout << "You have successfully ordered " << Spasta << " pasta" << endl;
                            cout << "Thank you for your order" << endl;
                        }
                        cout << "\t-----------------------------------------------------------" << endl;
                        Tpasta = Tpasta - Spasta;
                        break;
                    case 3:
                        cout << "Enter the number of salad: ";
                        cin >> Isalad;
                        if(Isalad > Tsalad){
                            cout << "Sorry, we don't have enough salad" << endl;
                            cout << "Total salad: " << Tsalad << endl;
                            cout << "Total salad sold: " << Ssalad << endl;
                        }
                        else if(Isalad < 0){
                            cout << "Sorry, you can't enter negative number" << endl;
                        }
                        else{
                            Ssalad = Isalad;
                            cout << "You have successfully ordered " << Ssalad << " salad" << endl;
                            cout << "Thank you for your order" << endl;
                        }
                        cout << "\t-----------------------------------------------------------" << endl;
                        Tsalad = Tsalad - Ssalad;
                        break;
                    case 4:
                        cout << "Enter the number of burger: ";
                        cin >> Iburger;
                        if(Iburger > Tburger){
                            cout << "Sorry, we don't have enough burger" << endl;
                            cout << "Total burger: " << Tburger << endl;
                            cout << "Total burger sold: " << Sburger << endl;
                        }
                        else if(Iburger < 0){
                            cout << "Sorry, you can't enter negative number" << endl;
                        }
                        else{
                            Sburger = Iburger;
                            cout << "You have successfully ordered " << Sburger << " Burger" << endl;
                            cout << "Thank you for your order" << endl;
                        }
                        cout << "\t-----------------------------------------------------------" << endl;
                        Tburger = Tburger - Sburger;
                        break;
                    case 5:
                        cout << "Enter the number of pizaa: ";
                        cin >> Ipizaa;
                        if(Ipizaa > Tpizaa){
                            cout << "Sorry, we don't have enough pizaa" << endl;
                            cout << "Total pizaa: " << Tpizaa << endl;
                            cout << "Total pizaa sold: " << Spizaa << endl;
                        }
                        else if(Ipizaa < 0){
                            cout << "Sorry, you can't enter negative number" << endl;
                        }
                        else{
                            Spizaa = Ipizaa;
                            cout << "You have successfully ordered " << Spizaa << " pizaa" << endl;
                            cout << "Thank you for your order" << endl;
                        }
                        cout << "\t-----------------------------------------------------------" << endl;
                        Tpizaa = Tpizaa - Spizaa;
                        break;
                    case 6:
                        cout << "Enter the number of chicken: ";
                        cin >> Ichicken;
                        if(Ichicken > Tchicken){
                            cout << "Sorry, we don't have enough chicken" << endl;
                            cout << "Total chicken: " << Tchicken << endl;
                            cout << "Total chicken sold: " << Schicken << endl;
                        }
                        else if(Ichicken < 0){
                            cout << "Sorry, you can't enter negative number" << endl;
                        }
                        else{
                            Schicken = Ichicken;
                            cout << "You have successfully ordered " << Schicken << " chicken" << endl;
                            cout << "Thank you for your order" << endl;
                        }
                        cout << "\t-----------------------------------------------------------" << endl;
                        Tchicken = Tchicken - Schicken;
                        break;
                    case 7:
                        cout << "Enter the number of noodle: ";
                        cin >> Inoodle;
                        if(Inoodle > Tnoodle){
                            cout << "Sorry, we don't have enough noodle" << endl;
                            cout << "Total noodle: " << Tnoodle << endl;
                            cout << "Total noodle sold: " << Snoodle << endl;
                        }
                        else if(Inoodle < 0){
                            cout << "Sorry, you can't enter negative number" << endl;
                        }
                        else{
                            Snoodle = Inoodle;
                            cout << "You have successfully ordered " << Snoodle << " noodle" << endl;
                            cout << "Thank you for your order" << endl;
                        }
                        cout << "\t-----------------------------------------------------------" << endl;
                        Tnoodle = Tnoodle - Snoodle;
                        break;
                    case 8:
                        cout << "Thank you for using our services" << endl;
                        cout << "\t=============================================================" << endl;
                        break;
                    default:
                        cout << "Wrong choice\n" << endl;
                }
                _sleep(3000);
                system("cls");
            }while(choice != 8);
        }

};

int main(){
    hotel obj;
    int choice{};
    do {
        cout << "1. Manager" << endl;
        cout << "2. Customer" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if(choice == 1){
            obj.manager();
        }
        else if(choice == 2){
            obj.customer();
        }
        else if(choice == 3){
            cout << "Thank you for using our services" << endl;
            cout << "\t=============================================================" << endl;
        }
        else{
            cout << "Wrong choice\n" << endl;
        }
    }while(choice !=3);
    return 0;
}