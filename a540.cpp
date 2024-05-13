#include <iostream>
#include <vector>

int maxWinningStreak(const std::vector<int>& bets) {
    int maxSum = 0; 
    int currentSum = 0;

    for (int bet : bets) {
        currentSum = std::max(0, currentSum + bet);
        maxSum = std::max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    int N;
    while (std::cin >> N && N != 0) {
        std::vector<int> bets(N);
        for (int i = 0; i < N; ++i) {
            std::cin >> bets[i];
        }

        int maxStreak = maxWinningStreak(bets);
        if (maxStreak > 0) {
            std::cout << "The maximum winning streak is " << maxStreak << "." << std::endl;
        } else {
            std::cout << "Losing streak." << std::endl;
        }
    }

    return 0;
}