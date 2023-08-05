#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "LOGIN DETAILS" << endl;

    string name;
    string Surbhi = "Surbhi";//doubt

    cout << "NAME: ";
    getline(cin, name);

    if (name == Surbhi) {//doubt
        string email_id;
        string abc = "abc";

        cout << "EMAIL ID: ";
        getline(cin, email_id);

        if (email_id == abc) {
            string username;
            string surbhi3605 = "surbhi3605";

            cout << "USERNAME: ";
            getline(cin, username);

            if (username == surbhi3605) {
                string password;
                string lmaoded = "lmaoded";

                cout << "PASSWORD: ";
                getline(cin, password);

                if (password == lmaoded) {
                    cout << "ACCESS GRANTED" << endl;
                } else {
                    cout << "ACCESS DENIED" << endl;
                }
            } else {
                cout << "ACCESS DENIED" << endl;
            }
        } else {
            cout << "ACCESS DENIED" << endl;
        }
    } else {
        cout << "ACCESS DENIED" << endl;
    }

    return 0;
}
