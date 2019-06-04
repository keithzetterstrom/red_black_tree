#include "rbt.h"
using namespace std;

int main() {
    int data;
    RBTree rbTree;
    bool T = true;

    cout << "Choise:" << endl;
    cout << "1 - insert element;" << endl;
    cout << "2 - delete elenent;" << endl;
    cout << "3 - show the tree;" << endl;
    cout << "0 - stop the programe" << endl;

    while(T)
    {
        cin >> data;
        switch (data) {
        case 1:
        {
            int v =0;
            cout << "Value: ";
            cin >> v;
            rbTree.insertValue(v);
            break;
        }
        case 2:
        {
            int v = 0;
            cout << "Value: ";
            cin >> v;
            rbTree.deleteValue(v);
            break;
        }

        case 3:
        {
            rbTree.preorder();
            break;
        }
        case 0:
        {
            T = false;
            break;

        }
        default:
            break;
        }

    }

    return 0;
}
