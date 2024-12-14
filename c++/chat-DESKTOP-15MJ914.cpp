#include <iostream>
#include <stack>

class Book {
public:
    std::string title;
    std::string author;
    std::string ISBN;
    Book(std::string t, std::string a, std::string isbn) : title(t), author(a), ISBN(isbn) {}
};

class TreeNode {
public:
    Book data;
    TreeNode* left;
    TreeNode* right;

    // Constructor
    TreeNode(Book b) : data(b), left(NULL), right(NULL) {}
};

class BookStack {
private:
    std::stack<Book> bookStack;
    TreeNode* root;

    // Helper function to insert a book into the BST
    TreeNode* insert(TreeNode* node, Book book) {
        if (node == NULL) {
            return new TreeNode(book);
        }

        if (book.title < node->data.title) {
            node->left = insert(node->left, book);
        } else {
            node->right = insert(node->right, book);
        }

        return node;
    }
    void inOrderTraversal(TreeNode* node) {
        if (node != NULL) {
            inOrderTraversal(node->left);
            std::cout << "Title: " << node->data.title << " | Author: " << node->data.author << " | ISBN: " << node->data.ISBN << std::endl;
            inOrderTraversal(node->right);
        }
    }

public:
    BookStack() : root(NULL) {
        Book firstBook("Sample Book", "Sample Author", "YourVUID");
        bookStack.push(firstBook);
        root = insert(root, firstBook);
    }

    // Function to add a new book to the BookStack
    void addBook(Book book) {
        bookStack.push(book);
        root = insert(root, book);
    }

    // Function to remove the most recently added book from the BookStack
    void removeBook() {
        if (!bookStack.empty()) {
            TreeNode* current = root;
            TreeNode* parent = NULL;

            // Find the node to be deleted in the BST
            while (current->right != NULL) {
                parent = current;
                current = current->right;
            }

            // Delete the node from BST
            if (parent != NULL) {
                parent->right = NULL;
            } else {
                root = NULL;
            }

            // Pop the top book from the stack
            bookStack.pop();
        }
    }

    // Function to search for a book by title in the BST
    Book* searchBook(std::string title) {
        TreeNode* current = root;

        while (current != NULL) {
            if (title == current->data.title) {
                return &current->data;
            } else if (title < current->data.title) {
                current = current->left;
            } else {
                current = current->right;
            }
        }

        return NULL;
    }

    // Function to list all the books in alphabetical order
    void listBooks() {
        std::cout << "List of Books in Alphabetical Order:" << std::endl;
        inOrderTraversal(root);
    }
};

int main() {
    // Create a BookStack object
    BookStack library;

    // Add some sample books
    Book book1("C++ Programming", "John Doe", "123456");
    Book book2("Data Structures", "Jane Smith", "789012");

    library.addBook(book1);
    library.addBook(book2);

    // Display the list of books
    library.listBooks();

    // Search for a book by title
    std::string searchTitle = "C++ Programming";
    Book* foundBook = library.searchBook(searchTitle);

    if (foundBook != NULL) {
        std::cout << "Book Found - Title: " << foundBook->title << " | Author: " << foundBook->author << " | ISBN: " << foundBook->ISBN << std::endl;
    } else {
        std::cout << "Book not found with title: " << searchTitle << std::endl;
    }

    library.removeBook();
    library.listBooks();

    return 0;
}

