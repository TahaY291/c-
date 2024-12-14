#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    Student() : name("") {}
    Student(string n) : name(n) {}
};

class TreeNode {
public:
    Student* student;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : student(NULL), left(NULL), right(NULL) {}

    TreeNode(Student* s) : student(s), left(NULL), right(NULL) {}

    TreeNode* insert(TreeNode* root, Student* student) {
        if (root == NULL) {
            return new TreeNode(student);
        }
        if (student->name < root->student->name) {
            root->left = insert(root->left, student);
        } else if (student->name > root->student->name) {
            root->right = insert(root->right, student);
        }
        return root;
    }

    TreeNode* remove(TreeNode* root, string name) {
        if (root == NULL) {
            return root;
        }
        if (name < root->student->name) {
            root->left = remove(root->left, name);
        } else if (name > root->student->name) {
            root->right = remove(root->right, name);
        } else {
            if (root->left == NULL) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == NULL) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            TreeNode* temp = minValueNode(root->right);
            root->student = temp->student;
            root->right = remove(root->right, temp->student->name);
        }
        return root;
    }

    void inorder(TreeNode* root) {
        if (root != NULL) {
            inorder(root->left);
            cout << root->student->name << "\n";
            inorder(root->right);
        }
    }

    TreeNode* minValueNode(TreeNode* node) {
        TreeNode* current = node;
        while (current && current->left != NULL) {
            current = current->left;
        }
        return current;
    }
};

int main() {
    TreeNode* root = NULL;
    TreeNode tree;
    int choice, numberOfStudents;
    string name;

    while (1) {
        cout << "Menu: Examination seat Allocation";
        cout << "\n1. Allocate seat";
        cout << "\n2. Remove Student";
        cout << "\n3. Display seating according to the Alphabetic Order";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the number of students for Alphabetic seats: ";
                cin >> numberOfStudents;
                cin.ignore();
                for (int i = 0; i < numberOfStudents; i++) {
                    cout << "Enter Student name: ";
                    getline(cin, name);
                    root = tree.insert(root, new Student(name));
                }
                break;
            case 2:
                cout << "Enter student name to remove: ";
                cin.ignore();
                getline(cin, name);
                root = tree.remove(root, name);
                break;
            case 3:
                cout << "Seating Arrangement: \n";
                tree.inorder(root);
                break;
            case 4:
                exit(0);
        }
    }

    return 0;
}

