//By GPT

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class search_sort {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> sortedNums(nums);
        sort(sortedNums.begin(), sortedNums.end());
        
        // Coordinate compression
        for (int &num : nums) {
            num = lower_bound(sortedNums.begin(), sortedNums.end(), num) - sortedNums.begin() + 1;
        }
        
        // BIT (Fenwick Tree) to count smaller elements
        vector<int> BIT(sortedNums.size() + 1, 0);
        vector<int> result(nums.size());
        
        for (int i = nums.size() - 1; i >= 0; --i) {
            result[i] = query(BIT, nums[i] - 1);
            update(BIT, nums[i], 1);
        }
        
        return result;
    }
    
private:
    void update(vector<int>& BIT, int index, int value) {
        while (index < BIT.size()) {
            BIT[index] += value;
            index += index & -index;
        }
    }
    
    int query(vector<int>& BIT, int index) {
        int sum = 0;
        while (index > 0) {
            sum += BIT[index];
            index -= index & -index;
        }
        return sum;
    }
};

int main() {
    search_sort obj;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    vector<int> result = obj.countSmaller(nums);

    cout << "The count of smaller elements to the right are: ";
    for (int count : result) {
        cout << count << " ";
    }
    cout << endl;

    return 0;
}
