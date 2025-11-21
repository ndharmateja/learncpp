#include <iostream>

int main()
{
    // Values entered should be separated by whitespace (spaces, tabs, or newlines)
    std::cout << "Enter two numbers (separated by space): ";

    // Best practice: Variables should be always initialized
    // even if they are going to be immediately overridden by the user
    // entered values
    int x{}, y{};       // Value initialization
    std::cin >> x >> y; // get 2 numbers from user and store it in x and y

    // std::cin is also buffered
    // The extraction operator ‘>>’ removes characters from the front of the input buffer and converts them into a value that is assigned (via copy-assignment) to the associated variable

    // Each line of input data in the input buffer is terminated by a '\n' character.
    // std::cin is buffered because it allows us to separate the entering of input from the extract of input. We can enter input once and then perform multiple extraction requests on it.
    // For eg, if we have two separate cin >> x and cin >> y
    // We could enter "4 5" on the first cin itself and it would work

    // The basic extraction process
    // Here’s a simplified view of how operator >> works for input.
    // 1. If std::cin is not in a good state (e.g. the prior extraction failed and std::cin has not yet been cleared), no extraction is attempted, and the extraction process aborts immediately.
    // 2. Leading whitespace characters (spaces, tabs, and newlines at the front of the buffer) are discarded from the input buffer. This will discard an unextracted newline character remaining from a prior line of input.
    // 3. If the input buffer is now empty, operator >> will wait for the user to enter more data. Any leading whitespace is discarded from the entered data.
    // 4. operator >> then extracts as many consecutive characters as it can, until it encounters either a newline character (representing the end of the line of input) or a character that is not valid for the variable being extracted to.

    std::cout << "You entered x: " << x << " and y: " << y << "\n";
    return 0;
}