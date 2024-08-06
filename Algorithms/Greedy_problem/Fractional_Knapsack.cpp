#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// A structure to represent an item with weight and profit
struct Item
{
    int weight;
    int profit;

    // Constructor
    Item(int w, int p) : weight(w), profit(p) {}
};

// Comparator function to sort items according to profit/weight ratio
bool compare(Item a, Item b)
{
    double r1 = (double)a.profit / a.weight;
    double r2 = (double)b.profit / b.weight;
    return r1 > r2;
}

// Function to calculate the maximum profit
double fractionalKnapsack(int W, vector<Item> &items)
{
    // Sort items by profit/weight ratio
    sort(items.begin(), items.end(), compare);

    int currentWeight = 0;    // Current weight in the knapsack
    double finalProfit = 0.0; // Result (profit in the knapsack)

    // Loop through all items
    for (auto &item : items)
    {
        // If adding the item won't overflow, add it completely
        if (currentWeight + item.weight <= W)
        {
            currentWeight += item.weight;
            finalProfit += item.profit;
        }
        // If we can't add the whole item, add the fractional part of it
        else
        {
            int remain = W - currentWeight;
            finalProfit += item.profit * ((double)remain / item.weight);
            break;
        }
    }

    return finalProfit;
}

int main()
{
    int W = 50; // Weight of the knapsack
    vector<Item> items = {{10, 60}, {20, 100}, {30, 120}};

    double maxProfit = fractionalKnapsack(W, items);

    cout << "Maximum profit we can obtain = " << maxProfit << endl;

    return 0;
}
