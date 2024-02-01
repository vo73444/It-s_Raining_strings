#include <iostream>
#include "string_sort.hpp"

using namespace std;

int main(){

    vector<string> businesses;

    cout << "\nWelcome to the Business Sorting Program!\n";

    businesses.push_back(prompt_user());

    display_strings(businesses);

    while(continue_prompt()){
        businesses.push_back(prompt_user());

        sort(businesses.begin(), businesses.end());

        display_strings(businesses);

    }

    cout << "\nThank you for using the Business Sorting Program!\n\n";

    return 0;
}
