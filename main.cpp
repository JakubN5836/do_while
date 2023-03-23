#include <iostream> // wykonaj przykład pętli while dla i<mniejszego od numerka w dzienniku w moim przypadku 13
using namespace std;

int main() {
    int i = 0;
    do {
        cout << i << "\n";
        i++;
    }
    while (i < 13);
    return 0;
}
