#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of recent football matches: ";
    cin >> N;

    int messiGoals = 0;
    int neymarGoals = 0;

    for (int i = 1; i <= N; i++) {
        int messiMatchGoals, neymarMatchGoals;
        cout << "Enter the number of goals scored by Messi in match " << i << ": ";
        cin >> messiMatchGoals;
        messiGoals += messiMatchGoals;

        cout << "Enter the number of goals scored by Neymar in match " << i << ": ";
        cin >> neymarMatchGoals;
        neymarGoals += neymarMatchGoals;
    }

    float averageMessiGoals = static_cast<float>(messiGoals) / N;
    float averageNeymarGoals = static_cast<float>(neymarGoals) / N;

    cout << "Average goals scored by Messi: " << averageMessiGoals << endl;
    cout << "Average goals scored by Neymar: " << averageNeymarGoals << endl;

    if (averageMessiGoals > averageNeymarGoals) {
        cout << "Lionel Messi is a better player." << endl;
    } else if (averageMessiGoals < averageNeymarGoals) {
        cout << "Neymar is a better player." << endl;
    } else {
        cout << "Lionel Messi and Neymar are equally good players." << endl;
    }

    return 0;
}
