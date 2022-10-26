#include <iostream>
#include <cstring>

using namespace std;

class books
{
    // Declaring class containing book information

private:
    int static de_; // Using private access modifier
    int static log, successful, unsuccessful;
    char *title;
    char *author_name;
    char *publisher_name;
    int stock;
    double price; // Storing Details of the Book

public:
    books(); // Initializing constructor

    void get_info();
    // Function to get data about book
    void display();
    // Function to display all the books
    bool search(char *search_title, char *search_author);
    // Function to search a particular book
    void purchase();
    // Function to purchase the book & updating stock
    void log_display();
    // Function to display transactional log

    ~books(); // Initializing destructor
};

int books::de_ = 0;
int books::log = 0;
int books::successful = 0;
int books::unsuccessful = 0;

books::books()
{
    // Parameterised Constructors
    title = new char[100];
    // Using Dynamic File Allocation
    author_name = new char[100];
    publisher_name = new char[100];
    stock = 0;
    price = 0;
}

void books::get_info()
{
    // Asking information from user
    cout << "Enter the Book Title -> ";
    cin.getline(title, 100);
    cout << "\nEnter the Author's Name -> ";
    cin.getline(author_name, 100);
    cout << "\nEnter the Publisher's Name -> ";
    cin.getline(publisher_name, 100);
    cout << "\nEnter the Book Price -> ";
    cin >> price;
    cout << "\nEnter the quantity of Books -> ";
    cin >> stock;
}

void books::display()
{
    // Displaying all the stocks
    cout << "\nBook Title -> \t" << title;
    cout << "\nAuthor -> \t" << author_name;
    cout << "\nPublisher -> \t" << publisher_name;
    cout << "\nPrice -> \t" << price;
    cout << "\nAvailable Stock -> \t" << stock;
}

bool books::search(char *search_title, char *search_author)
{
    if (strcmp(title, search_title) == 0 && strcmp(author_name, search_author) == 0)
        return true; // return true if found
    else
        return false; // false if not found
}

void books::purchase()
{
    log++;
    // Transaction count++
    int req_books;
    cout << "\nEnter the required quantity of Books -> \t";
    cin >> req_books;
    if (req_books <= stock)
    {
        stock -= req_books; // Stock Updated
        cout << "\nThe requested book is available for purchase!!!";
        cout << "\nCost of " << req_books << " book is -> $" << req_books * price;
        cout << "\nThank you, Your Purchase is Successfully completed!!";
        cout << "\n Happy Reading!!!";

        successful++;
        // Log Updated
    }
    else
    {
        cout << "\nRequested Book is currently not available !!!";
        cout << "\n Please Visit again in a few days !!!";
        cout << "\nThank you for your time!! ";
        unsuccessful++;
    }
}

void books::log_display()
{
    // Displaying Log
    cout << "\nThe Total no. of transactions ->\t" << log << endl;
    cout << "The no. of Successful Transactions ->\t" << successful << endl;
    cout << "The no. of Unsuccessful Transactions ->\t" << unsuccessful << endl;
}
books::~books()
{
    // Deconstructor
    delete title;
    // Deallocating storage
    delete author_name;
    delete publisher_name;
    if (de_ == 0)
    {
        cout << "Object Going out of Scope, Destructor called!!"
             << '\n';
        de_ = 1;
    }
}
int main()
{
    int main_call;
    int check = 1;
    char a;
    // Counter for choice
    books book_store[1000]; // Initializing class
    char search_title[100], search_author[100];
    bool choice = true; // Counter for loop

    string call;

    int num_book = 1;
    cout << "\n________WELCOME TO UNICORN BOOK DEPOT________\n";
    cout << "----------------------------------------------------\n";
    cout << "\nPlease enter the stocks for books!!\n";
    while (choice)
    {
        cout << "Enter description of book " << num_book << endl;
        book_store[num_book].get_info();
    choice_loop:
        cout << "\n Do you want to add another book (Y/N) -> \t";
        cin >> call;
        cin.ignore();
        cout << endl;
        if (call == "YES" || call == "Y" || call == "y")
        {
            choice = true;
        }
        else if (call == "NO" || call == "N" || call == "n")
        {
            choice = false;
        }
        else
        {
            cout << "Please Enter correct Choice(Y/N)!!!" << endl;
            goto choice_loop;
        }
        num_book++;
    }
    do
    {
        cout << "\n___Select any one of the following options___\n";
        cout << "1.Display Information of Books";
        cout << "\n2.Search any Book";
        cout << "\n3.Buy any Book";
        cout << "\n4.Display Transactional Log\n5.Exit " << endl;
        cout << "Enter your choice:\t";
        cin >> main_call;
        switch (main_call)
        {
        case 1:
            for (int i = 1; i < num_book; i++)
            {
                cout << "___________________________\n";
                cout << "Description of Book no." << i + 1 << "is\n";
                book_store[i].display();
            }
            break;
        case 2:
            cin.ignore();
            // accepting book that customer wants to search
            cout << "\nEnter Description for the Book\n";
            cout << "Enter the Title of Book:\t";
            cin.getline(search_author, 100);
            cout << "\nEnter the Author's Name:\t";
            cin.getline(search_title, 100);
            // searching if it is available in shop
            for (int i = 1; i < num_book; i++)
            {
                check = book_store[i].search(search_title,
                                             search_author);
                if (check == 1)
                {
                    cout << "\nRequested Book is found!!!";
                }
            }
            if (check == 0)
                cout << "Requested Book is not available!!!";
            break;

        case 3:
            cin.ignore();
            // accepting book that customer wants to buy
            cout << "\nEnter the description of book you want to buy!!!";
            cout << "\nEnter Author Name : ";
            cin.getline(search_author, 100);
            cout << "\nEnter Title: ";
            cin.getline(search_title, 100);
            // searching if it is available in shop and proceeding to billing

            for (int i = 1; i < num_book; i++)
            {
                check = book_store[i].search(search_title, search_author);
                if (check == 1)
                {
                    cout << "\nRequested Book is found!!";
                    book_store[i].purchase();
                }
            }
            if (check == 0)
                cout << "\n Requested Book is not available!!";
            return 0;
            break;
        case 4:
            cin.ignore();
            cout << "\n\t___TRANSACTION HISTORY____\t\n";
            book_store[0].log_display();
            break;
        case 5:
            cout << "\nThank you for your time !!!" << endl;
            return 0;
        }
        cout << endl;
        cout << "Do you want to continue(Yes/No):\t";
        cin >> a;
        cout << endl;

    } while (a == 'y' || a == 'Y');
    return 0;
}