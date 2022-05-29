#include<iostream>
using namespace std;
class hotel{
    public:
        // total
        int Trooms{},Tpasta{},Tsalad{},Tburger{},Tpizaa{},Tchicken{},Tnoodle{};
        //total temporary
        int tempRooms{},tempPasta{},tempSalad{},tempBurger{},tempPizaa{},tempChicken{},tempNoodle{};
        // sold
        int Srooms{0},Spasta{0},Ssalad{0},Sburger{0},Spizaa{0},Schicken{0},Snoodle{0};
        //input
        int Irooms{},Ipasta{},Isalad{},Iburger{},Ipizaa{},Ichicken{},Inoodle{};
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
        void manager(){
            cout << "Enter password: ";
            cin >> inputpassM;
            if(inputpassM == PasswordM){
                cout << "Welcome to the manager's page" << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;
                cout << "Total Rooms : " << tempRooms << endl;
                cout << "Total Rooms availabe : " << tempRooms - Srooms << endl;
                cout << "Total Rooms Sold : " << Srooms << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;
                cout << "Total Pasta : " << tempPasta << endl;
                cout << "Total Pasta availabe : " << Tpasta << endl;
                cout << "Total Pasta Sold : " << Spasta << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;
                cout << "Total Salad : " << tempSalad << endl;
                cout << "Total Salad availabe : " << Tsalad << endl;
                cout << "Total Salad Sold : " << Ssalad << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;
                cout << "Total Burger : " << tempBurger << endl;
                cout << "Total Burger availabe : " << Tburger << endl;
                cout << "Total Burger Sold : " << Sburger << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;
                cout << "Total Pizaa : " << tempPizaa << endl;
                cout << "Total Pizaa availabe : " << Tpizaa << endl;
                cout << "Total Pizaa Sold : " << Spizaa << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;
                cout << "Total Chicken : " << tempChicken << endl;
                cout << "Total Chicken availabe : " << Tchicken << endl;
                cout << "Total Chicken Sold : " << Schicken << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;
                cout << "Total Noodle : " << tempNoodle << endl;
                cout << "Total Noodle availabe : " << Tnoodle << endl;
                cout << "Total Noodle Sold : " << Snoodle << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;
                cout << "Total Money Earn : " << TotalPriceM << endl;
                system("pause");
                system("cls");
            }
            else{
                cout << "Wrong password" << endl;
                system("pause");
                system("cls");
            }
        }
        void staff(){
            cout << "Enter password: ";
            cin >> inputpassS;
            if(inputpassS == PasswordS){
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
                tempRooms = Trooms;
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
                cout << "Wrong password" << endl;
                system("pause");
                system("cls");
            }
        }
        void reception(){
            cout << "Enter password: ";
            cin >> inputpassR;
            if(inputpassR == PasswordR){
                cout << "Welcome to the reception's page" << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;
                cout << "Total Rooms availabe : " << tempRooms - Srooms << endl;
                cout << "Total Rooms Sold : " << Srooms << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;
                cout << "Total Pasta availabe : " << Tpasta << endl;
                cout << "Total Pasta Sold : " << Spasta << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;
                cout << "Total Salad availabe : " << Tsalad << endl;
                cout << "Total Salad Sold : " << Ssalad << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;
                cout << "Total Burger availabe : " << Tburger << endl;
                cout << "Total Burger Sold : " << Sburger << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;
                cout << "Total Pizaa availabe : " << Tpizaa << endl;
                cout << "Total Pizaa Sold : " << Spizaa << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;
                cout << "Total Chicken availabe : " << Tchicken << endl;
                cout << "Total Chicken Sold : " << Schicken << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;
                cout << "Total Noodle availabe : " << Tnoodle << endl;
                cout << "Total Noodle Sold : " << Snoodle << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;
                system("pause");
                system("cls");
            }
            else{
                cout << "Wrong password" << endl;
                system("pause");
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
                cout << "8. Bill" << endl;
                cout << "9. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> choice;
                switch(choice){
                    case 1:
                    {
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
                            cout << "Room prices : " << Prooms << endl;
                            cout << "Do you want to coufirm your order? \n1. Yes \n2. No" << endl;
                            int confirm1{};
                            cin >> confirm1;
                            if (confirm1 ==1){
                                Srooms = Irooms;
                                cout << "You have successfully ordered " << Srooms << " rooms" << endl;
                                cout << "Thank you for your order" << endl;
                                TotalPrice = TotalPrice + (Srooms * Prooms);
                                Trooms = Trooms - Srooms;
                            }
                            else if(confirm1 == 2){
                                cout << "Thank you for using our services" << endl;
                            }
                            else{
                                cout << "Wrong input" << endl;
                            }
                        }
                        cout << "\t-----------------------------------------------------------" << endl;
                        break;
                    }
                    case 2:
                    {
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
                            cout << "Pasta prices : " << Ppasta << endl;
                            cout << "Do you want to coufirm your order? \n1. Yes \n2. No" << endl;
                            int confirm2{};
                            cin >> confirm2;
                            if (confirm2 ==1){
                                Spasta = Ipasta;
                                cout << "You have successfully ordered " << Spasta << " pasta" << endl;
                                cout << "Thank you for your order" << endl;
                                TotalPrice = TotalPrice + (Spasta * Ppasta);
                                Tpasta = Tpasta - Spasta;
                            }
                            else if(confirm2 == 2){
                                cout << "Thank you for using our services" << endl;
                            }
                            else{
                                cout << "Wrong input" << endl;
                            }  
                        }
                        cout << "\t-----------------------------------------------------------" << endl;
                        break;
                    }
                    case 3:
                    {
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
                            cout << "Salad prices : " << Psalad << endl;
                            cout << "Do you want to coufirm your order? \n1. Yes \n2. No" << endl;
                            int confirm3{};
                            cin >> confirm3;
                            if (confirm3 ==1){
                                Ssalad = Isalad;
                                cout << "You have successfully ordered " << Ssalad << " salad" << endl;
                                cout << "Thank you for your order" << endl;
                                TotalPrice = TotalPrice + (Ssalad * Psalad);
                                Tsalad = Tsalad - Ssalad;
                            }
                            else if(confirm3 == 2){
                                cout << "Thank you for using our services" << endl;
                            }
                            else{
                                cout << "Wrong input" << endl;
                            }
                        }
                        cout << "\t-----------------------------------------------------------" << endl;
                        break;
                    }
                    case 4:
                    {
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
                            cout << "Burger prices : " << Pburger << endl;
                            cout << "Do you want to coufirm your order? \n1. Yes \n2. No" << endl;
                            int confirm4{};
                            cin >> confirm4;
                            if (confirm4 ==1){
                                Sburger = Iburger;
                                cout << "You have successfully ordered " << Sburger << " burger" << endl;
                                cout << "Thank you for your order" << endl;
                                TotalPrice = TotalPrice + (Sburger * Pburger);
                                Tburger = Tburger - Sburger;
                            }
                            else if(confirm4 == 2){
                                cout << "Thank you for using our services" << endl;
                            }
                            else{
                                cout << "Wrong input" << endl;
                            }
                        }
                        cout << "\t-----------------------------------------------------------" << endl;
                        break;
                    }
                    case 5:
                    {
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
                            cout << "Pizaa prices : " << Ppizaa << endl;
                            cout << "Do you want to coufirm your order? \n1. Yes \n2. No" << endl;
                            int confirm5{};
                            cin >> confirm5;
                            if (confirm5 ==1){
                                Spizaa = Ipizaa;
                                cout << "You have successfully ordered " << Spizaa << " pizaa" << endl;
                                cout << "Thank you for your order" << endl;
                                TotalPrice = TotalPrice + (Spizaa * Ppizaa);
                                Tpizaa = Tpizaa - Spizaa;
                            }
                            else if(confirm5 == 2){
                                cout << "Thank you for using our services" << endl;
                            }
                            else{
                                cout << "Wrong input" << endl;
                            }
                        }
                        cout << "\t-----------------------------------------------------------" << endl;
                        break;
                    }
                    case 6:
                    {
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
                            cout << "Chicken prices : " << Pchicken << endl;
                            cout << "Do you want to coufirm your order? \n1. Yes \n2. No" << endl;
                            int confirm6{};
                            cin >> confirm6;
                            if (confirm6 ==1){
                                Schicken = Ichicken;
                                cout << "You have successfully ordered " << Schicken << " chicken" << endl;
                                cout << "Thank you for your order" << endl;
                                TotalPrice = TotalPrice + (Schicken * Pchicken);
                                Tchicken = Tchicken - Schicken;
                            }
                            else if(confirm6 == 2){
                                cout << "Thank you for using our services" << endl;
                            }
                            else{
                                cout << "Wrong input" << endl;
                            }
                        }
                        cout << "\t-----------------------------------------------------------" << endl;
                        break;
                    }
                    case 7:
                    {
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
                            cout << "Noodle prices : " << Pnoodle << endl;
                            cout << "Do you want to coufirm your order? \n1. Yes \n2. No" << endl;
                            int confirm7{};
                            cin >> confirm7;
                            if (confirm7 ==1){
                                Snoodle = Inoodle;
                                cout << "You have successfully ordered " << Snoodle << " noodle" << endl;
                                cout << "Thank you for your order" << endl;
                                TotalPrice = TotalPrice + (Snoodle * Pnoodle);
                                Tnoodle = Tnoodle - Snoodle;
                            }
                            else if(confirm7 == 2){
                                cout << "Thank you for using our services" << endl;
                            }
                            else{
                                cout << "Wrong input" << endl;
                            }
                        }
                        cout << "\t-----------------------------------------------------------" << endl;
                        break;
                    }
                    case 8:
                    {
                        cout << "\t-----------------------------------------------------------" << endl;
                        cout << "Your Orders" << endl;
                        cout << "Rooms: " << Irooms << endl;
                        cout << "Pasta: " << Ipasta << endl;
                        cout << "Salad: " << Isalad << endl;
                        cout << "Burger: " << Iburger << endl;
                        cout << "Pizaa: " << Ipizaa << endl;
                        cout << "Chicken: " << Ichicken << endl;
                        cout << "Noodle: " << Inoodle << endl;
                        cout << "Total Amount: " << TotalPrice << endl;
                        TotalPriceM += TotalPrice;
                        cout << "\t\tThank you for your order" << endl;
                        cout << "\t-----------------------------------------------------------" << endl;
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
                        cout << "All your order will be deleted" << endl;
                        cout << "Do you want to confirm? \n1. Yes \n2. No" << endl;
                        int confirm9{};
                        cin >> confirm9;
                        if (confirm9 ==1){
                            Irooms = 0;
                            Ipasta = 0;
                            Isalad = 0;
                            Iburger = 0;
                            Ipizaa = 0;
                            Ichicken = 0;
                            Inoodle = 0;
                            TotalPrice = 0;
                            cout << "Thank you for using our services" << endl;
                        }
                        else if(confirm9 == 2){
                            cout << "Thank you for using our services" << endl;
                        }
                        else{
                            cout << "Wrong input" << endl;
                        }
                        cout << "\t=============================================================" << endl;
                        break;
                    }
                    default:
                        cout << "Wrong choice\n" << endl;
                }
                system("pause");
                system("cls");
            }while(choice != 9 && choice != 8);
        }
};
int main(){
    hotel obj;
    int choice{};
    do {
        cout << "1. Manager" << endl;
        cout << "2. Staff" << endl;
        cout << "3. Reception" << endl;
        cout << "4. Customer" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
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
            cout << "\t\tThank you for using our services" << endl;
            cout << "\t=============================================================" << endl;
            system("pause");
        }
        else{
            cout << "Wrong choice\n" << endl;
        }
    }while(choice !=5);
    return 0;
}
