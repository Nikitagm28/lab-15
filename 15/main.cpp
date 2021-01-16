1 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
void PowerA3(double A, double& B) {
    B = A * A * A;
}
int main(void) {
    double mas[5];
    for (int i = 0; i < 5; i++) {
        cin >> mas[i];

    }
    for (int i = 0; i < 5; i++) {
        PowerA3(mas[i], mas[i]);
        cout << mas[i] << ' ';

    }
    return 0;
}

2 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int Sign(double x) {
    return x < 0 ? -1 : ((x == 0) ? 0 : 1);

}
int main() {
    double a, b;
    cout << "Enter A, B:";
    cin >> a >> b;
    cout << "a+b=" << Sign(a) + Sign(b);
    return 0;
}

3 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
void RingS() {
    double x, y, s, p = 3.14;
    for (int i = 0; i < 3; i++) {
        cout << "Enter R1, R2:";
        cin >> x >> y;
        s = p * (x * x - y * y);
        cout << " S= " << s << endl;

    }

}
void main() {
    RingS();
}

4 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
void Quarter() {
    int x, y;
    for (int i = 0; i < 3; i++) {
        cout << "Enter x, y:";
        cin >> x >> y;
        if (x > 0) {
            if (y > 0) { cout << 1 << endl;;

            }
            else cout << 4 << endl;;

        }
        else if (y > 0) { cout << 2 << endl;;

        }
        else cout << 3 << endl;;

    }

}
void main() {
    Quarter();
}

5 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int fact(int n) {
    int f = 1;
    if (n % 2 == 0) {
        for (int i = 2; i <= n; i += 2) {
            f *= i;
        }
    }
    else {
        for (int i = 1; i <= n; i += 2) {
            f *= i;
        }
    }
    return f;
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "F!!=" << n << fact(n) << endl;
    return 0;
}
