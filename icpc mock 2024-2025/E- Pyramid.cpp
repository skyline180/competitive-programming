#include <bits/stdc++.h>

using namespace std;

double calculate_volume(double A, double s) {
    double l = (A - s * s) / (2 * s);

    if (l <= s / 2) {
        return 0;
    }

    double h = sqrt(l * l - (s * s) / 4);

    return (1.0 / 3.0) * s * s * h;
}

int main() {
    double A;

    while (cin >> A && A >= 0) {
        double left = 0.0, right = sqrt(A);
        double best_volume = 0.0;

        while (right - left > 1e-6) {
            double mid = (left + right) / 2.0;
            double volume = calculate_volume(A, mid);

            if (volume > best_volume) {
                best_volume = volume;
            }
            left = mid;
        }
        cout << fixed << setprecision(4) << best_volume << endl;
    }

    return 0;
}
