#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, maxTaxi = 0, maxPizza = 0, maxGirls = 0;
    vector<string> taxiFriends, pizzaFriends, girlsFriends;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int s, taxiCount = 0, pizzaCount = 0, girlCount = 0;
        string name;
        cin >> s >> name;

        for (int j = 0; j < s; j++) {
            string number;
            cin >> number;
            bool identical = true;
            bool decreasing = true;

            for (int k = 0; k < number.length(); k += 3) {
                if (number[k] != number[k+1]) identical = false;
                if (k != 0 && number[k] != number[k-2]) identical = false;
                if (number[k] <= number[k+1]) decreasing = false;
                if (k != 0 && number[k] >= number[k-2]) decreasing = false;
            }

            if (identical) taxiCount++;
            else if (decreasing) pizzaCount++;
            else girlCount++;
        }

        cout << taxiCount << " " << pizzaCount << " " << girlCount << endl;

        if (taxiCount >= maxTaxi) {
            if (taxiCount > maxTaxi) taxiFriends.clear();
            maxTaxi = taxiCount;
            taxiFriends.push_back(name);
        }

        if (pizzaCount >= maxPizza) {
            if (pizzaCount > maxPizza) pizzaFriends.clear();
            maxPizza = pizzaCount;
            pizzaFriends.push_back(name);
        }

        if (girlCount >= maxGirls) {
            if (girlCount > maxGirls) girlsFriends.clear();
            maxGirls = girlCount;
            girlsFriends.push_back(name);
        }
    }

    cout << "If you want to call a taxi, you should call: ";

    for (int i = 0; i < taxiFriends.size(); i++) {
        cout << taxiFriends[i];
        if (i != taxiFriends.size() - 1) cout << ", ";
    }

    cout << "." << endl;
    cout << "If you want to order a pizza, you should call: ";

    for (int i = 0; i < pizzaFriends.size(); i++) {
        cout << pizzaFriends[i];
        if (i != pizzaFriends.size() - 1) cout << ", ";
    }

    cout << "." << endl;
    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    
    for (int i = 0; i < girlsFriends.size(); i++) {
        cout << girlsFriends[i];
        if (i != girlsFriends.size() - 1) cout << ", ";
    }
    
    cout << "." << endl;
    return 0;
}