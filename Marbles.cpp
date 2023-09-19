#include <iostream>
#include <vector>

int main() {
    int N, Q;
    std::cin >> N;

    std::vector<long long> marbles(N); // Vector to store initial marbles in each basket
    std::vector<long long> changes(N, 0); // Vector to store changes

    for (int i = 0; i < N; i++) {
        std::cin >> marbles[i];
    }

    std::cin >> Q;

    for (int q = 0; q < Q; q++) {
        int A, B;
        long long X;
        std::cin >> A >> B >> X;

        // Update the change array
        changes[A] += X;
        if (B + 1 < N) {
            changes[B + 1] -= X;
        }
    }

    // Calculate the final number of marbles in each basket
    long long current_marbles = 0;
    for (int i = 0; i < N; i++) {
        current_marbles += changes[i];
        marbles[i] += current_marbles;
    }

    // Print the updated number of marbles in each basket
    for (int i = 0; i < N; i++) {
        std::cout << marbles[i] << " ";
    }

    return 0;
}
