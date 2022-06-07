#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class hotel{
    public:
        int rightm{55},rightb{60},l{20};
        // total
        int Trooms{},Tpasta{},Tsalad{},Tburger{},Tpizaa{},Tchicken{},Tnoodle{};
        //total temporary
        int tempPasta{},tempSalad{},tempBurger{},tempPizaa{},tempChicken{},tempNoodle{};
        // sold
        int Srooms{0},Spasta{0},Ssalad{0},Sburger{0},Spizaa{0},Schicken{0},Snoodle{0};
        //input
        int Irooms{0},Ipasta{0},Isalad{0},Iburger{0},Ipizaa{0},Ichicken{0},Inoodle{0};
        int Itemprooms{},Itemppasta{},Itempsalad{},Itempburger{},Itemppizaa{},Itempchicken{},Itempnoodle{};
        //price
        const int Prooms{150},Ppasta{20},Psalad{8},Pburger{15},Ppizaa{18},Pchicken{25},Pnoodle{10};
        // Orders
        int Order{0};
        //total price
        double TotalPriceM{0};
        double TotalPrice{};
        // password
        const int PasswordM{12345678};
        const int PasswordS{98765432};
        const int PasswordR{12378945};
        int inputpassM{0};
        int inputpassS{0};
        int inputpassR{0};
        void manager();
        void staff();
        void reception();
        void customer();
};
void hotel:: manager(){
    system("cls");
    cout << setw(rightm) << right << ' ' << "Enter password: ";
    cin >> inputpassM;
    if(inputpassM == PasswordM){
        system("cls");
        cout << setw(l) << right << ' ' << "====================================================================================================" << endl;
        cout << setw(rightm) << right << ' ' << "Welcome to the manager's page" << endl;
        cout << setw(l) << right << ' ' << "====================================================================================================" << endl;
        cout << setw(l) << right << ' ' << "Total Rooms : " << Trooms + Srooms << endl;
        cout << setw(l) << right << ' ' << "Total Rooms availabe : " << Trooms << endl;
        cout << setw(l) << right << ' ' << "Total Rooms Sold : " << Srooms << endl;
        cout << setw(l) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        cout << setw(l) << right << ' ' << "Total Pasta : " << tempPasta + Spasta<< endl;
        cout << setw(l) << right << ' ' << "Total Pasta availabe : " << tempPasta << endl;
        cout << setw(l) << right << ' ' << "Total Pasta Sold : " << Spasta << endl;
        cout << setw(l) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        cout << setw(l) << right << ' ' << "Total Salad : " << tempSalad +Ssalad << endl;
        cout << setw(l) << right << ' ' << "Total Salad availabe : " << tempSalad << endl;
        cout << setw(l) << right << ' ' << "Total Salad Sold : " << Ssalad << endl;
        cout << setw(l) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        cout << setw(l) << right << ' ' << "Total Burger : " << tempBurger + Sburger<< endl;
        cout << setw(l) << right << ' ' << "Total Burger availabe : " << tempBurger << endl;
        cout << setw(l) << right << ' ' << "Total Burger Sold : " << Sburger << endl;
        cout << setw(l) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        cout << setw(l) << right << ' ' << "Total Pizaa : " << tempPizaa + Spizaa<< endl;
        cout << setw(l) << right << ' ' << "Total Pizaa availabe : " << tempPizaa  << endl;
        cout << setw(l) << right << ' ' << "Total Pizaa Sold : " << Spizaa << endl;
        cout << setw(l) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        cout << setw(l) << right << ' ' << "Total Chicken Rolls : " << tempChicken + Schicken << endl;
        cout << setw(l) << right << ' ' << "Total Chicken Rolls availabe : " << tempChicken << endl;
        cout << setw(l) << right << ' ' << "Total Chicken Rolls Sold : " << Schicken << endl;
        cout << setw(l) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        cout << setw(l) << right << ' ' << "Total Noodle : " << tempNoodle + Snoodle<< endl;
        cout << setw(l) << right << ' ' << "Total Noodle availabe : " << tempNoodle << endl;
        cout << setw(l) << right << ' ' << "Total Noodle Sold : " << Snoodle << endl;
        cout << setw(l) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        cout << setw(l) << right << ' ' << "Total Orders : " << Order << endl;
        cout << setw(l) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        cout << setw(l) << right << ' ' << "Total Money Earn : " << TotalPriceM << endl;
        cout << setw(l) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        system("pause");
        system("cls");
    }
    else{
        system("cls");
        cout << setw(rightb) << right << ' ' << "Wrong password" << endl;
        system("pause");
        system("cls");
    }
}
void hotel:: staff(){
    system("cls");
    cout << setw(rightm) << ' ' << "Enter password: ";
    cin >> inputpassS;
    if(inputpassS == PasswordS){
        system("cls");
        cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
        cout << setw(rightb) << right << ' ' << "Welcome to the staff's page" << endl;
        cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
        cout << setw(rightb) << right << ' ' <<"Enter the number of rooms: ";
        cin>>Trooms;
        cout << setw(rightb) << right << ' ' <<"Enter the number of pasta: ";
        cin>>Tpasta;
        cout << setw(rightb) << right << ' ' <<"Enter the number of salad: ";
        cin>>Tsalad;
        cout << setw(rightb) << right << ' ' <<"Enter the number of burger: ";
        cin>>Tburger;
        cout << setw(rightb) << right << ' ' <<"Enter the number of pizaa: ";
        cin>>Tpizaa;
        cout << setw(rightb) << right << ' ' <<"Enter the number of Chicken Rolls: ";
        cin>>Tchicken;
        cout << setw(rightb) << right << ' ' <<"Enter the number of noodle: ";
        cin>>Tnoodle;
        tempPasta += Tpasta;
        tempSalad += Tsalad;
        tempBurger += Tburger;
        tempPizaa += Tpizaa;
        tempChicken += Tchicken;
        tempNoodle += Tnoodle;
        system("pause");
        system("cls");
    }
    else{
        system("cls");
        cout << setw(rightb) << right << ' ' << "Wrong password" << endl;
        system("pause");
        system("cls");
    }
}
void hotel:: reception(){
    system("cls");
    cout << setw(rightm) << right << ' ' << "Enter password: ";
    cin >> inputpassR;
    if(inputpassR == PasswordR){
        system("cls");
        cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
        cout << setw(57) << right << ' ' << "Welcome to the reception's page" << endl;
        cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
        cout << setw(rightb) << right << ' ' << "Total Rooms availabe : " << Trooms << endl;
        cout << setw(rightb) << right << ' ' << "Total Rooms Sold : " << Srooms << endl;
        cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        cout << setw(rightb) << right << ' ' << "Total Pasta availabe : " << tempPasta << endl;
        cout << setw(rightb) << right << ' ' << "Total Pasta Sold : " << Spasta << endl;
        cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        cout << setw(rightb) << right << ' ' << "Total Salad availabe : " << tempSalad << endl;
        cout << setw(rightb) << right << ' ' << "Total Salad Sold : " << Ssalad << endl;
        cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        cout << setw(rightb) << right << ' ' << "Total Burger availabe : " << tempBurger << endl;
        cout << setw(rightb) << right << ' ' << "Total Burger Sold : " << Sburger << endl;
        cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        cout << setw(rightb) << right << ' ' << "Total Pizaa availabe : " << tempPizaa << endl;
        cout << setw(rightb) << right << ' ' << "Total Pizaa Sold : " << Spizaa << endl;
        cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        cout << setw(rightb) << right << ' ' << "Total Chicken Rolls availabe : " << tempChicken << endl;
        cout << setw(rightb) << right << ' ' << "Total Chicken Rolls Sold : " << Schicken << endl;
        cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        cout << setw(rightb) << right << ' ' << "Total Noodle availabe : " << tempNoodle << endl;
        cout << setw(rightb) << right << ' '<< "Total Noodle Sold : " << Snoodle << endl;
        cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        system("pause");
        system("cls");
    }
    else{
        system("cls");
        cout << setw(rightm) << right << ' '  << "Wrong password" << endl;
        system("pause");
        system("cls");
    }
}
void hotel:: customer(){
    system("cls");
    cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
    cout << setw(rightm) << right << ' ' << "Welcome to The Pranjal's Hotel servcies" << endl;
    cout << setw(20) << right << ' ' << "====================================================================================================\n" << endl;
    int choice{};
    do{
        cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        cout << setw(70) << right << ' ' << "1. Room" << endl;
        cout << setw(70) << right << ' ' << "2. Pasta" << endl;
        cout << setw(70) << right << ' ' << "3. Salad" << endl;
        cout << setw(70) << right << ' ' << "4. Burger" << endl;
        cout << setw(70) << right << ' ' << "5. Pizaa" << endl;
        cout << setw(70) << right << ' ' << "6. Chicken Rolls" << endl;
        cout << setw(70) << right << ' ' << "7. Noodle" << endl;
        cout << setw(70) << right << ' ' << "8. Bill" << endl;
        cout << setw(70) << right << ' ' << "9. Exit" << endl;
        cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
        cout << setw(65) << right << ' ' << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
            {   system("cls");
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                cout << setw(rightb) << right << ' ' << "Enter the number of rooms: ";
                cin >> Itemprooms;
                if(Itemprooms > Trooms){
                    cout << setw(57) << right << ' ' << "Sorry, we don't have enough rooms" << endl;
                    cout << setw(57) << right << ' ' << "Total rooms: " << Trooms << endl;
                    cout << setw(57) << right << ' ' << "Total rooms sold: " << Srooms << endl;
                }
                else if(Itemprooms < 0){
                    cout << setw(rightm) << right << ' ' << "Sorry, you can't enter negative number" << endl;
                }
                else{
                    cout << setw(rightb) << right << ' ' << "Price per room : " << Prooms << endl;
                    cout << setw(rightb) << right << ' ' << "Total price: " << Itemprooms * Prooms << endl;
                    cout << setw(rightb) << right << ' ' << "Do you want to coufirm your order?" << "\n" << setw(rightb) << right << ' ' << "1. Yes" << "\n" << setw(rightb) << right << ' ' << "2. No" << endl;
                    cout << setw(rightb) << right << ' ' << "Enter your choice: ";
                    int confirm1{};
                    cin >> confirm1;
                    if (confirm1 ==1){
                        Irooms += Itemprooms;
                        Srooms += Itemprooms;
                        cout << setw(57) << right << ' ' << "You have successfully ordered " << Itemprooms << " rooms" << endl;
                        cout << setw(57) << right << ' ' << "Thank you for your order" << endl;
                        Irooms += Itemprooms;
                        TotalPrice = TotalPrice + (Itemprooms * Prooms);
                        Trooms = Trooms - Itemprooms;
                    }
                    else if(confirm1 == 2){
                        cout << setw(57) << right << ' ' << "You have canceled your order" << endl;
                        cout << setw(rightm) << right << ' ' << "Thank you for using our services" << endl;
                    }
                    else{
                        cout << setw(rightb) << right << ' ' << "Wrong input" << endl;
                    }
                }
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                break;
            }
            case 2:
            {
                system("cls");
                
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                cout << setw(rightb) << right << ' ' << "Enter the number of pasta: ";
                cin >> Itemppasta;
                if(Itemppasta > tempPasta){
                    cout << setw(57) << right << ' ' << "Sorry, we don't have enough pasta" << endl;
                    cout << setw(57) << right << ' ' << "Total pasta: " << Tpasta << endl;
                    cout << setw(57) << right << ' ' << "Total pasta sold: " << Spasta << endl; 
                }
                else if(Itemppasta < 0){
                    cout << setw(rightm) << right << ' ' << "Sorry, you can't enter negative number" << endl;
                }
                else{
                    cout << setw(rightb) << right << ' ' << "Price per unit : " << Ppasta << endl;
                    cout << setw(rightb) << right << ' ' << "Total price: " << Itemppasta * Ppasta << endl;
                    cout << setw(rightb) << right << ' ' << "Do you want to coufirm your order?" << "\n" << setw(rightb) << right << ' ' << "1. Yes" << "\n" << setw(rightb) << right << ' ' << "2. No" << endl;
                    cout << setw(rightb) << right << ' ' << "Enter your choice: ";
                    int confirm2{};
                    cin >> confirm2;
                    if (confirm2 ==1){
                        Ipasta += Itemppasta;
                        Spasta += Itemppasta;
                        cout << setw(57) << right << ' ' << "You have successfully ordered " << Itemppasta << " pasta" << endl;
                        cout << setw(57) << right << ' ' << "Thank you for your order" << endl;
                        TotalPrice = TotalPrice + (Itemppasta * Ppasta);
                        tempPasta = tempPasta - Itemppasta;
                    }
                    else if(confirm2 == 2){
                        cout << setw(57) << right << ' ' << "You have canceled your order" << endl;
                        cout << setw(rightm) << right << ' ' << "Thank you for using our services" << endl;
                    }
                    else{
                        cout << setw(rightb) << right << ' ' << "Wrong input" << endl;
                    }  
                }
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                break;
            }
            case 3:
            {
                system("cls");
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                cout << setw(rightb) << right << ' ' << "Enter the number of salad: ";
                cin >> Itempsalad;
                if(Itempsalad > tempSalad){
                    cout << setw(57) << right << ' ' << "Sorry, we don't have enough salad" << endl;
                    cout << setw(57) << right << ' ' << "Total salad: " << Tsalad << endl;
                    cout << setw(57) << right << ' ' << "Total salad sold: " << Ssalad << endl;
                }
                else if(Itempsalad < 0){
                    cout << setw(rightm) << right << ' ' << "Sorry, you can't enter negative number" << endl;
                }
                else{
                    cout << setw(rightb) << right << ' ' << "Price per unit : " << Psalad << endl;
                    cout << setw(rightb) << right << ' ' << "Total price: " << Itempsalad * Psalad << endl;
                    cout << setw(rightb) << right << ' ' << "Do you want to coufirm your order?" << "\n" << setw(rightb) << right << ' ' << "1. Yes" << "\n" << setw(rightb) << right << ' ' << "2. No" << endl;
                    cout << setw(rightb) << right << ' ' << "Enter your choice: ";
                    int confirm3{};
                    cin >> confirm3;
                    if (confirm3 ==1){
                        Isalad += Itempsalad;
                        Ssalad += Itempsalad;
                        cout << setw(57) << right << ' ' << "You have successfully ordered " << Itempsalad << " salad" << endl;
                        cout << setw(57) << right << ' ' << "Thank you for your order" << endl;
                        TotalPrice = TotalPrice + (Itempsalad * Psalad);
                        tempSalad = tempSalad - Itempsalad;
                    }
                    else if(confirm3 == 2){
                        cout << setw(57) << right << ' ' << "You have canceled your order" << endl;
                        cout << setw(rightm) << right << ' ' << "Thank you for using our services" << endl;
                    }
                    else{
                        Isalad=0;
                        cout << setw(rightb) << right << ' ' << "Wrong input" << endl;
                    }
                }
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                break;
            }
            case 4:
            {
                system("cls");
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                cout << setw(rightb) << right << ' ' << "Enter the number of burger: ";
                cin >> Itempburger;
                if(Itempburger > tempBurger){
                    Iburger = 0;
                    cout << setw(57) << right << ' ' << "Sorry, we don't have enough burger" << endl;
                    cout << setw(57) << right << ' ' << "Total burger: " << Tburger << endl;
                    cout << setw(57) << right << ' ' << "Total burger sold: " << Sburger << endl;
                }
                else if(Itempburger < 0){
                    Iburger = 0;
                    cout << setw(rightm) << right << ' ' << "Sorry, you can't enter negative number" << endl;
                }
                else{
                    cout << setw(rightb) << right << ' ' << "Price per unit : " << Pburger << endl;
                    cout << setw(rightb) << right << ' ' << "Total price: " << Itempburger * Pburger << endl;
                    cout << setw(rightb) << right << ' ' << "Do you want to coufirm your order?" << "\n" << setw(rightb) << right << ' ' << "1. Yes" << "\n" << setw(rightb) << right << ' ' << "2. No" << endl;
                    cout << setw(rightb) << right << ' ' << "Enter your choice: ";
                    int confirm4{};
                    cin >> confirm4;
                    if (confirm4 ==1){
                        Iburger += Itempburger;
                        Sburger += Itempburger;
                        cout << setw(57) << right << ' ' << "You have successfully ordered " << Itempburger << " burger" << endl;
                        cout << setw(57) << right << ' ' << "Thank you for your order" << endl;
                        TotalPrice = TotalPrice + (Itempburger * Pburger);
                        tempBurger = tempBurger - Itempburger;
                    }
                    else if(confirm4 == 2){
                        cout << setw(57) << right << ' ' << "You have canceled your order" << endl;
                        cout << setw(rightm) << right << ' ' << "Thank you for using our services" << endl;
                    }
                    else{
                        cout << setw(rightb) << right << ' ' << "Wrong input" << endl;
                    }
                }
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                break;
            }
            case 5:
            {
                system("cls");
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                cout << setw(rightb) << right << ' ' << "Enter the number of pizaa: ";
                cin >> Itemppizaa;
                if(Itemppizaa > tempPizaa){
                    cout << setw(57) << right << ' ' << "Sorry, we don't have enough pizaa" << endl;
                    cout << setw(57) << right << ' ' << "Total pizaa: " << Tpizaa << endl;
                    cout << setw(57) << right << ' ' << "Total pizaa sold: " << Spizaa << endl;
                }
                else if(Itemppizaa < 0){
                    cout << setw(rightm) << right << ' ' << "Sorry, you can't enter negative number" << endl;
                }
                else{
                    cout << setw(rightb) << right << ' ' << "Price per unit : " << Ppizaa << endl;
                    cout << setw(rightb) << right << ' ' << "Total price: " << Itemppizaa * Ppizaa << endl;
                    cout << setw(rightb) << right << ' ' << "Do you want to coufirm your order?" << "\n" << setw(rightb) << right << ' ' << "1. Yes" << "\n" << setw(rightb) << right << ' ' << "2. No" << endl;
                    cout << setw(rightb) << right << ' ' << "Enter your choice: ";
                    int confirm5{};
                    cin >> confirm5;
                    if (confirm5 ==1){
                        Ipizaa += Itemppizaa;
                        Spizaa += Itemppizaa;
                        cout << "You have successfully ordered " << Itemppizaa << " pizaa" << endl;
                        cout << "Thank you for your order" << endl;
                        TotalPrice = TotalPrice + (Itemppizaa * Ppizaa);
                        tempPizaa = tempPizaa - Itemppizaa;
                    }
                    else if(confirm5 == 2){
                        cout << setw(57) << right << ' ' << "You have canceled your order" << endl;
                        cout << setw(rightm) << right << ' ' << "Thank you for using our services" << endl;
                    }
                    else{
                        cout << setw(rightb) << right << ' ' << "Wrong input" << endl;
                    }
                }
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                break;
            }
            case 6:
            {
                system("cls");
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                cout << setw(rightb) << right << ' ' << "Enter the number of Chicken Rolls: ";
                cin >> Itempchicken;
                if(Itempchicken > tempChicken){
                    cout << setw(57) << right << ' ' << "Sorry, we don't have enough Chicken Rolls" << endl;
                    cout << setw(57) << right << ' ' << "Total Chicken Rolls: " << Tchicken << endl;
                    cout << setw(57) << right << ' ' << "Total Chicken Rolls sold: " << Schicken << endl;
                }
                else if(Itempchicken < 0){
                    Ichicken = 0;
                    cout << setw(rightm) << right << ' ' << "Sorry, you can't enter negative number" << endl;
                }
                else{
                    cout << setw(rightb) << right << ' ' << "Price per uniit : " << Pchicken << endl;
                    cout << setw(rightb) << right << ' ' << "Total price: " << Itempchicken * Pchicken << endl;
                    cout << setw(rightb) << right << ' ' << "Do you want to coufirm your order?" << "\n" << setw(rightb) << right << ' ' << "1. Yes" << "\n" << setw(rightb) << right << ' ' << "2. No" << endl;
                    cout << setw(rightb) << right << ' ' << "Enter your choice: ";
                    int confirm6{};
                    cin >> confirm6;
                    if (confirm6 ==1){
                        Ichicken += Itempchicken;
                        Schicken += Itempchicken;
                        cout << setw(57) << right << ' ' << "You have successfully ordered " << Itempchicken << " Chicken Rolls" << endl;
                        cout << setw(57) << right << ' ' << "Thank you for your order" << endl;
                        TotalPrice = TotalPrice + (Itempchicken * Pchicken);
                        tempChicken = tempChicken - Itempchicken;
                    }
                    else if(confirm6 == 2){
                        cout << setw(57) << right << ' ' << "You have canceled your order" << endl;
                        cout << setw(rightm) << right << ' ' << "Thank you for using our services" << endl;
                    }
                    else{
                        cout << setw(rightb) << right << ' ' << "Wrong input" << endl;
                    }
                }
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                break;
            }
            case 7:
            {
                system("cls");
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                cout << setw(rightb) << right << ' ' << "Enter the number of noodle: ";
                cin >> Itempnoodle;
                if(Itempnoodle > tempNoodle){
                    cout << setw(57) << right << ' ' << "Sorry, we don't have enough noodle" << endl;
                    cout << setw(57) << right << ' ' << "Total noodle: " << Tnoodle << endl;
                    cout << setw(57) << right << ' ' << "Total noodle sold: " << Snoodle << endl;
                }
                else if(Itempnoodle < 0){
                    cout << setw(rightm) << right << ' ' << "Sorry, you can't enter negative number" << endl;
                }
                else{
                    cout << setw(rightb) << right << ' ' << "Price per unit : " << Pnoodle << endl;
                    cout << setw(rightb) << right << ' ' << "Total price: " << Itempnoodle * Pnoodle << endl;
                    cout << setw(rightb) << right << ' ' << "Do you want to coufirm your order?" << "\n" << setw(rightb) << right << ' ' << "1. Yes" << "\n" << setw(rightb) << right << ' ' << "2. No" << endl;
                    cout << setw(rightb) << right << ' ' << "Enter your choice: ";
                    int confirm7{};
                    cin >> confirm7;
                    if (confirm7 ==1){
                        Inoodle += Itempnoodle;
                        Snoodle += Itempnoodle;
                        cout << setw(57) << right << ' ' << "You have successfully ordered " << Itempnoodle << " noodle" << endl;
                        cout << setw(57) << right << ' ' << "Thank you for your order" << endl;
                        TotalPrice = TotalPrice + (Itempnoodle * Pnoodle);
                        tempNoodle = tempNoodle - Itempnoodle;
                    }
                    else if(confirm7 == 2){
                        cout << setw(57) << right << ' ' << "You have canceled your order" << endl;
                        Inoodle=0;
                        cout << setw(rightm) << right << ' ' << "Thank you for using our services" << endl;
                    }
                    else{
                        Inoodle=0;
                        cout << setw(rightb) << right << ' ' << "Wrong input" << endl;
                    }
                }
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                break;
            }
            case 8:
            {
                system("cls");
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                cout << setw(rightb) << right << ' ' << "Your Orders" << endl;
                if(Irooms > 0){
                    cout << setw(rightb) << right << ' ' << "Rooms: " << Irooms << endl;
                    cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
                }
                if(Ipasta > 0){
                    cout << setw(rightb) << right << ' ' << "Pasta: " << Ipasta << endl;
                    cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
                }
                if(Isalad > 0){
                    cout << setw(rightb) << right << ' ' << "Salad: " << Isalad << endl;
                    cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
                }
                if(Iburger > 0){
                    cout << setw(rightb) << right << ' ' << "Burger: " << Iburger << endl;
                    cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
                }
                if(Ipizaa > 0){
                    cout << setw(rightb) << right << ' ' << "Pizaa: " << Ipizaa << endl;
                    cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
                }
                if(Ichicken > 0){
                    cout << setw(rightb) << right << ' ' << "Chicken Rolls: " << Ichicken << endl;
                    cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
                }
                if(Inoodle > 0){
                    cout << setw(rightb) << right << ' ' << "Noodle: " << Inoodle << endl;
                    cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
                }
                cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
                cout << setw(rightb) << right << ' ' << "Total Amount: " << TotalPrice << endl;
                cout << setw(20) << right << ' ' << "----------------------------------------------------------------------------------------------------" << endl;
                TotalPriceM += TotalPrice;
                cout << setw(rightm) << right << ' ' << "Thank you for your order" << endl;
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                Order++;
                Irooms = 0;
                Ipasta = 0;
                Isalad = 0;
                Iburger = 0;
                Ipizaa = 0;
                Ichicken = 0;
                Inoodle = 0;
                TotalPrice = 0;
                break;
            }
            case 9:
            {
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                cout << setw(rightb) << right << ' ' << "Thank you for using our services" << endl;
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                break;
            }
            default:
            {
                system("cls");
                cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
                cout << setw(rightb) << right << ' ' << "Wrong choice\n" << endl;
            }
        }
        system("pause");
        system("cls");
    }while(choice != 9 && choice != 8);
}
int main(){
    system("color 08");
    hotel obj;
    int choice{};
    do {
        int x{55};
        system("cls");
        cout << setw(20) << right << ' ' << "====================================================================================================" << endl;
        cout << setw(55) << right << ' ' << "Welcome to The Pranjal's Hotel" << endl;
        cout << setw(20) << right << ' ' << "====================================================================================================\n" << endl;
        cout << setw(x) << right << ' ' << "1. Manager" << endl;
        cout << setw(x) << right << ' ' << "2. Staff" << endl;
        cout << setw(x) << right << ' ' << "3. Reception" << endl;
        cout << setw(x) << right << ' ' << "4. Customer" << endl;
        cout << setw(x) << right << ' ' << "5. Exit" << endl;
        cout << setw(x) << right << ' ' << "Enter your choice: ";
        cin >> choice;
        if(choice == 1){
            obj.manager();
        }
        else if(choice == 2){
            obj.staff();
        }
        else if(choice == 3){
            obj.reception();
        }
        else if(choice == 4){
            obj.customer();
        }
        else if(choice == 5){
            cout << setw(45) << right << ' ' <<  "Thank you for using our services" << endl;
            cout << setw(35) << right << ' ' << setw(x) << setfill('=') << '=' << endl;
            system("pause");
        }
        else{
            cout << "\n" << setw(x) << right << ' ' << "Wrong choice" << endl;
            system("pause");
            system("cls");
        }
    }while(choice !=5);
    return 0;
}