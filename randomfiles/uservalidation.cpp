#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

struct User {
    string name;
    string email;
    // string city;
};

vector<User> readUsersFromFile(const string& filename) {
    ifstream file(filename);
    string line;
    vector<User> users;

    while (getline(file, line)) {
        stringstream ss(line);
        User user;
        getline(ss, user.name, ',');
        getline(ss, user.email, ',');
        // getline(ss, user.city, ',');
        users.push_back(user);
    }

    return users;
}

bool validateUser(const string& name, const string& email, const vector<User>& users) {
    for (const auto& user : users) {
        if (user.name == name && user.email == email /* &&  user.city == city */ ) {
            return true;
        }
    }

    return false;
}

int main() {
    vector<User> users = readUsersFromFile("users.csv");

    string name, email, city;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your email: ";
    cin >> email;
    /* cout << "Enter your city: ";
    cin >> city; */

    if (validateUser(name, email, users)) {
        cout << "Valid user!" << endl;
    } else {
        cout << "Invalid user!" << endl;
    }

    return 0;
}
