#include <cassert>

int main() {
    int x = 5;
    assert(x == 5); // This will pass
    assert(x == 10); // This will fail and terminate the program
    return 0;
}