#include <iostream>
using namespace std;

int main( )
{
    int numberOfLanguages;

    cout << "Hello reader.\n" 
         << "Welcome to C++.\n";

    cout << "How many programming languages have you used? ";
    cin >> numberOfLanguages;

    if (numberOfLanguages < 1) 
        cout << "Read the preface. You may prefer\n"
             << "a more elementary book by the same author.\n";
    else
        cout << "Enjoy the book.\n";

    return 0;
<<<<<<< HEAD
}

// commented by Kyu
// 3
=======
}
  // 2
// commented by Kyu
>>>>>>> 825c529f589cdef62bd63cf3e721ad72552cef90
