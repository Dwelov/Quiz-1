/*Write a program for a tailor shop. Read N dresses stitched and charge per dress. If charge > 1000 apply 5% discount.
 Print discounted charge and total revenue. Use variables, loops, IO and if/else. Push code to GitHub and paste link.*/
#include <iostream>
using namespace std;

int main() {
	//variable declaration
    int n;
    float price, discountedPrice, total = 0,discount = 0.05;
    //inputing the value
    cout << "Enter number of dresses stitched: ";
    cin >> n;
    //processing the input
    for (int i = 1; i <= n; ++i) {
        cout << "Enter charge for dress " << i << ": ";
        cin >> price;

        if (price > 1000) {
            discountedPrice = price * discount; // 5% discount
        } else {
           discountedPrice = price;
        }

        cout << "Discounted charge for dress " << i << ": " << discountedPrice << endl;
        total += discountedPrice;
    }
    //output
    cout << "Total revenue: " << total << endl;

    return 0;
}


