int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0) return 0;
    int mPrice = prices[0];
    int mProfit = 0;
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < mPrice) mPrice = prices[i];
        else if (prices[i] - mPrice > mProfit) mProfit = prices[i] - mPrice;
    }
    return mProfit;
}
