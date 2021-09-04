#include <iostream>
unsigned long long fibonachi(int n) {
    unsigned long long f0 = 0, f1 = 1, f;
    if (n <= 1) {
        return f1;
 }
    for (int i = 1; i < n; i++) {
            f = f0 + f1;
            f0 = f1;
            f1 = f;
        }
        return f;
 }

unsigned long long fibonachi2(int n) {
    unsigned long long f;
    if (n == 1) {
        return 1;
    }
    if (n == 0) {
        return 0;
    }
    f = fibonachi2(n - 1) + fibonachi2(n - 2);
    return f;
}

int main()
{
    using namespace std;
    while (true) {
        int n;
        std::cout << "put number of the number!)" << endl;
        std::cin >> n;
        if (n == 0) {
            break;
        }
        cout  <<"Fibonachi1 :" << fibonachi(n) <<endl;
        cout << "Fibonachi2 :" << fibonachi2(n) << endl;
    }
}