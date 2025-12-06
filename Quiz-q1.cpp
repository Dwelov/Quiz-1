/*Write a program for a tailor shop. Read N dresses stitched and charge per dress. If charge > 1000 apply 5% discount.
 Print discounted charge and total revenue. Use variables, loops, IO and if/else. Push code to GitHub and paste link.*/
#include <iostream>
using namespace std;

int main() {
    int N;
    float charge, disCharge, totalRev = 0;

    cout << "Enter number of dresses stitched: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        cout << "Enter charge for dress " << i << ": ";
        cin >> charge;

        if (charge > 1000) {
            disCharge = charge * 0.95; // 5% discount
        } else {
            disCharge = charge;
        }

        cout << "Discounted charge for dress " << i << ": " << disCharge << endl;
        totalRev += disCharge;
    }

    cout << "Total revenue: " << totalRev << endl;

    return 0;
}
