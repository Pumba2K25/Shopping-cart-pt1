#include <iostream>
#include "ItemToPurchase.h"

using namespace std;

int main() {
    // Declare two ItemToPurchase objects
    ItemToPurchase item1;
    ItemToPurchase item2;
    
    string name;
    int price;
    int quantity;
    
    // Input for item 1
    cout << "Item 1" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, name);
    item1.SetName(name);
    
    cout << "Enter the item price:" << endl;
    cin >> price;
    item1.SetPrice(price);
    
    cout << "Enter the item quantity:" << endl;
    cin >> quantity;
    item1.SetQuantity(quantity);
    
    cin.ignore(); // To allow for a new string input for the second item
    
    // Input for item 2
    cout << "\nItem 2" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, name);
    item2.SetName(name);
    
    cout << "Enter the item price:" << endl;
    cin >> price;
    item2.SetPrice(price);
    
    cout << "Enter the item quantity:" << endl;
    cin >> quantity;
    item2.SetQuantity(quantity);
    
    // Calculate and display the total cost
int totalCost1 = item1.GetQuantity() * item1.GetPrice();
int totalCost2 = item2.GetQuantity() * item2.GetPrice();

cout << "\nTOTAL COST" << endl;
cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << totalCost1 << endl;
cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << totalCost2 << endl;

// Add an extra blank line before the total
cout << endl;

cout << "Total: $" << totalCost1 + totalCost2 << endl;

    
    return 0;
}
