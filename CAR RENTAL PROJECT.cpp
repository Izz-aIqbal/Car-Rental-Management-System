#include<iostream>
#include <iomanip> 
using namespace std;

int main() {
    string customername, carmodel, carnumber;
    int rentalfee, days, model, cost;
    bool carRented[3] = {false, false, false};  

    cout << "\n\n\n\n\n\n\n\n\t\t\t       CAR RENTAL SYSTEM \n\n";
    cout << "Enter the customer name : ";
    getline(cin, customername);

car:
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "Press A for Tesla \nPress B for Hyundai \nPress C for Ford :\n";
    cin >> carmodel;
    cout << "\n\n--------------------------------------------------------------------------" << endl;

    if (carmodel == "A" || carmodel == "a") {
        if (carRented[0]) {
            cout << "Tesla is already rented. Choose another car.\n";
            goto car;
        }
        cout << "You have chosen Tesla " << endl;
        cout << "Enter model you want:";
        cin >> model;
        if (model < 2010 && model > 2000)
            cout << "its an old tesla that costs the following per day: 700";
        else if (model <= 2023 && model >= 2000)
            cout << "its a new tesla that costs the following per days:1500";
        carRented[0] = true;  // Mark Tesla as rented
    } else if (carmodel == "B" || carmodel == "b") {
        if (carRented[1]) {
            cout << "Hyundai is already rented. Choose another car.\n";
            goto car;
        }
        cout << "You have chosen Hyundai " << endl;
        cout << "Enter model you want:";
        cin >> model;
        if (model < 2010 && model > 2000)
            cout << "its an old hyundai that costs the following per day:800";
        else if (model <= 2023 && model >= 2000)
            cout << "its a new huandai that costs the following per day:2000";
        carRented[1] = true;  // Mark Hyundai as rented
    } else if (carmodel == "C" || carmodel == "c") {
        if (carRented[2]) {
            cout << "Ford is already rented. Choose another car.\n";
            goto car;
        }
        cout << "You have chosen Ford " << endl;
        cout << "Enter model you want:";
        cin >> model;
        if (model < 2010 && model > 2000)
            cout << "its an old ford that costs the following per day:1000";
        else if (model <= 2023 && model >= 2000)
            cout << "its a new ford that costs the following per day:2200";
        carRented[2] = true;  // Mark Ford as rented
    } else {
        cout << "You have not selected from our library\n";
        goto car;
    }

    cout << "\n\n--------------------------------------------------------------------------" << endl;

    cout << "\n\tCAR Number You have \n\nADS:328__AXS:385_ADJ:146\n\n";
    cout << "Enter the car number  : \n";
    cin >> carnumber;

    cout << "Enter the Days you want : ";
    cin >> days;

    if (carmodel == "A" || carmodel == "a" && model < 2010 && model > 2000)
        rentalfee = days * 700;
    else if (carmodel == "A" || carmodel == "a" && model <= 2023 && model >= 2000)
        rentalfee = days * 1400;
    if (carmodel == "B" || carmodel == "b" && model < 2010 && model > 2000)
        rentalfee = days * 800;
    else if (carmodel == "B" || carmodel == "b" && (model <= 2023 && model >= 2000))
        rentalfee = days * 2000;
    if (carmodel == "C" || carmodel == "c" && model < 2010 && model > 2000)
        rentalfee = days * 1000;
    else if (carmodel == "C" || carmodel == "c" && model <= 2023 && model >= 2000)
        rentalfee = days * 2200;

    cout << "\n\t\t                       Car Rental - Customer Invoice                  " << endl;
    cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
    cout << "\t\t	| Invoice No. :" << "------------------|" << setw(10) << "#Cnb81353" << " |" << endl;
    cout << "\t\t	| Customer Name:" << "-----------------|" << setw(10) << customername << " |" << endl;
    cout << "\t\t	| Car Model :" << "--------------------|" << setw(10) << carmodel << " |" << endl;
    cout << "\t\t	| Car No. :" << "----------------------|" << setw(10) << carnumber << " |" << endl;
    cout << "\t\t	| Number of days :" << "---------------|" << setw(10) << days << " |" << endl;
    cout << "\t\t	| Your Rental Amount is :" << "--------|" << setw(10) << rentalfee << " |" << endl;
    cout << "\t\t	 __" << endl;
    cout << "\n";
    cout << "\t\t	| Total Rental Amount is :" << "-------|" << setw(10) << rentalfee << " |" << endl;
    cout << "\t\t	 __" << endl;
    cout << "\t\t	 # This is a computer generated invoice and it does not" << endl;
    cout << "\t\t	 require an authorised signature #" << endl;
    cout << " " << endl;
    cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
    cout << "\t\t	You are advised to pay up the amount before due date." << endl;
    cout << "\t\t	Otherwise penelty fee will be applied" << endl;
    cout << "\t\t	///////////////////////////////////////////////////////////" << endl;

    // Provide an option to delete data of rented cars
    char deleteOption;
    cout << "Do you want to delete data of rented cars? (Y/N): ";
    cin >> deleteOption;

    if (deleteOption == 'Y' || deleteOption == 'y') {
        // Reset the rental status of the chosen car
        if (carmodel == "A" || carmodel == "a")
            carRented[0] = false;
        else if (carmodel == "B" || carmodel == "b")
            carRented[1] = false;
        else if (carmodel == "C" || carmodel == "c")
            carRented[2] = false;

        cout << "Data of rented cars deleted successfully." << endl;
    }

    return 0;
}

