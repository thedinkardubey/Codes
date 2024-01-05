#include<bits/stdc++.h>

int fibonacci(int whichTerm) {
    int firstTerm = 0;
    int secondTerm = 1;
    int nthTerm;

    for (int i = 2; i <= whichTerm; i++) {
        nthTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nthTerm;
    }

    return (whichTerm == 0) ? firstTerm : secondTerm;
}

int main() {
    int whichTerm;
    std::cin >> whichTerm;
    std::cout << fibonacci(whichTerm) << std::endl;

    return 0;
}
