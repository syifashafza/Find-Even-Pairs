#include <iostream>
using namespace std;

bool isEven(int value) {
    if (value % 2 == 0){
    	return 1;
	}
	return 0;
}

void printPairs(int targets[], int values[]) {
    int count = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int sum = values[i] + values[j];
            if (sum <= targets[0] || sum > targets[1]) {
                cout << values[i] << " + " << values[j] << " = " << sum << endl;

                cout << (isEven(values[i]));
                cout << (isEven(values[j])); 
                cout << (isEven(sum))<<endl;

                count++;
            }
        }
    }

    cout << "ditemukan: " << count <<" total pasangan"<< endl;
}

int main() {
    int targets[2] = {15, 25};
    int values[4] = {2, 7, 11, 15};
    printPairs(targets, values);

    return 0;
}

