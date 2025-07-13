#include <iostream>
using namespace std;

int main() {
    float x, y;

    
    cout << "Enter the x-coordinate: ";
    cin >> x;
    cout << "Enter the y-coordinate: ";
    cin >> y;

    
    if (x > 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") lies in Quadrant I." << endl;
    } else if (x < 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") lies in Quadrant II." << endl;
    } else if (x < 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") lies in Quadrant III." << endl;
    } else if (x > 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") lies in Quadrant IV." << endl;
    } else if (x == 0 && y == 0) {
        cout << "The point lies at the Origin." << endl;
    } else if (x == 0) {
        cout << "The point lies on the Y-axis." << endl;
    } else if (y == 0) {
        cout << "The point lies on the X-axis." << endl;
    }

    return 0;
}
