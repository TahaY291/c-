#include <iostream>
#include <stack>

class Book {
public:
    std::string title;
    std::string ISBN;
    Book(std::string t, std::string isbn) : title(t), ISBN(isbn) {}
};

class BSTNode {
public:
    Book book;
    BSTNode* left;
    BSTNode* right;
    BSTNode(Book b) : book(b), left(NULL), right(NULL) {}
};

class BookStack {
private:
    std::stack<Book> bookStack;
    BSTNode* root;
    BSTNode* insert(BSTNode* node, Book book) {
        if (node == NULL) {
            return new BSTNode(book);
        }

        if (book.title < node->book.title) {
            node->left = insert(node->left, book);
        } else {
            node->right = insert(node->right, book);
        }

        return node;
    }
    void inOrderTraversal(BSTNode* node) {
        if (node != NULL) {
            inOrderTraversal(node->left);
            std::cout << "Book: " << node->book.title << " (ISBN: " << node->book.ISBN << ")" << std::endl;
            inOrderTraversal(node->right);
        }
    }
    const Book* search(BSTNode* node, std::string title) {
        while (node != NULL) {
            if (title == node->book.title) {
                return &node->book;
            } else if (title < node->book.title) {
                node = node->left;
            } else {
                node = node->right;
            }
        }

        return NULL;
    }
    BSTNode* removeMostRecent(BSTNode* node) {
        if (node == NULL) {
            return NULL;
        }

        if (node->right == NULL) {
            BSTNode* temp = node->left;
            delete node;
            return temp;
        }

        node->right = removeMostRecent(node->right);

        return node;
    }

public:
   BookStack() : root(NULL) {
        Book firstBook("Aladdin", "bc220407299");
        bookStack.push(firstBook);
        root = insert(root, firstBook);

        Book secondBook("Bad Habits", "bc220407299");
        bookStack.push(secondBook);
        root = insert(root, secondBook);
    }
    void push(Book book) {
        bookStack.push(book);
        root = insert(root, book);
    }

    void pop() {
        if (!bookStack.empty()) {
            root = removeMostRecent(root);
            bookStack.pop();
        }
    }
    const Book* searchBook(std::string title) {
        return search(root, title);
    }
        void listBooks() {
        std::cout << "Library Book list:" << std::endl;
        inOrderTraversal(root);
    }
};

int main() {
    BookStack library;

    int choice;
    do {
        std::cout << "Enter 1 to list all books\nEnter 2 to add a new book\nEnter 3 to search for a book\nEnter 4 to remove a book\nEnter 5 to exit\n";
        std::cin >> choice;

        switch (choice) {
            case 1:
                library.listBooks();
                break;
            case 2: {
                std::string title, ISBN;
                std::cout << "Enter Book Title: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                std::cout << "Enter ISBN: ";
                std::cin >> ISBN;
                library.push(Book(title, ISBN));
                break;
            }
            case 3: {
                std::string searchTitle;
                std::cout << "Enter Book Title to search: ";
                std::cin.ignore();
                std::getline(std::cin, searchTitle);
                const Book* foundBook = library.searchBook(searchTitle);
                if (foundBook != NULL) {
                    std::cout << "Book Found - Title: " << foundBook->title << " | ISBN: " << foundBook->ISBN << std::endl;
                } else {
                    std::cout << "Book not found with title: " << searchTitle << std::endl;
                }
                break;
            }
            case 4:
                library.pop();
                std::cout << "Book removed\n";
                break;
            case 5:
                std::cout << "Exiting program\n";
                break;
            default:
                std::cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}

