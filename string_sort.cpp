#include <iostream>
#include "string_sort.hpp"

using namespace std;

string prompt_user(){

    string str;

    cout << "\nPlease enter the name of a business: ";

    getline(cin, str);

    return str;


}

/*void sort_strings(vector<string> list){

    sort(list.begin(), list.end());

}*/

void display_strings(vector<string> list){
    if(list.size() == 1){
        cout << "\nYour business is:\n\n\t" << list[0];
    }

    else{
        cout << "\nYour businesses are:\n\n";

        for(int i = 0; i <list.size(); i++){
        cout << '\t' << list[i] << '\n';
    }

    }

}

bool continue_prompt(){

    string input = "";

    string yes = "YES";

    char y = 'Y';

    cout << "\n\nAnother business? ";

    cin >> input;

    cin.ignore();

    for(int i = 0; i < input.size(); i++){
        if(input.size() == 3 && toupper(input[i]) == yes[i] || input.size() 
        == 1 && toupper(input[0]) == y){
            return true;
        }
    }

    return false;

}
