#include <iostream>
using namespace std;
int main () {
   string item1;
   cout<<"banana = 200"<<endl;
   string item2;
   cout<<"apple = 110"<<endl;
   string item3;
   cout<<"biscuit = 30"<<endl;
 
 cout << "Enter the item number you want to buy (1-5): ";
    cin >> choice;
    cout << "Enter the quantity: ";
    cin >> quantity;
    
    switch (choice) {
        case 1:
        // Price for Apples
            price = 110; 
            break;
        case 2:
        // Price for Bananas
            price = 110; 
            break;
        case 3:
        // Price for biscuit
            price = 30; 
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    // Display the total cost
    totalCost = price * quantity;
    cout << "Total cost: "<< endl;

    return 0;
}
