#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "Hello CPP25, wonderful batch!";
    cout << "String: " << str << endl;
    
    // find the first occurrence
    size_t first_occurrence = str.find("wonderful");
    
    // find the last occurrence
    size_t last_occurrence = str.rfind("wonderful");
    
    if (first_occurrence != string::npos) {
        cout << "First occurrence: 'wonderful' found at position: " << first_occurrence << endl;
        cout << "Last occurrence: 'wonderful' found at position: " << last_occurrence << endl;
    }
    else {
        cout << "'wonderful' not found" << endl;
    }

    return 0;
} 



/*

Example 2: Append to a String
int main() {

    string str = "Hello world,";
    cout << "Before: " << str << endl;

    //append the string
    str.append(" Have a good day!");

    cout << "After: " << str << endl;

    return 0;
}
*/

/*

Example 3: Insert a String at a Given Position

int main() {

    string str = "Hello world, world!";
    cout << "Before: " << str << endl;
    
    // insert "beautiful" at the 13th index
    str.insert(13, " beautiful");

    cout << "After: " << str << endl;

    return 0;
}
*/

/*

Example 4: Erase a Substring from a String

int main() {

    string str = "Hello world, beautiful world!";
    cout << "Before: " << str << endl;
    
    // erase "beautiful" from the string
    str.erase(13, 9);

    cout << "After: " << str << endl;

    return 0;
}
*/

/*

Example 5: Replace N Characters Within A String

int main() {

    string str = "Hello world, beautiful world!";
    cout << "Before: " << str << endl;
    
    // replace "beautiful" with "wonderful"
    str.replace(13, 9, "wonderful");

    cout << "After: " << str << endl;

    return 0;
}
*/

/*  
Example 6: Compare Strings Alphabetically

int main() {

    string str1 = "Hello";
    string str2 = "World";

    if (str1.compare(str2) == 0) {
        cout << "Strings are equal" << endl;
    }
    else {
        cout << "Strings are not equal" << endl;
    }

    return 0;
}
*/
