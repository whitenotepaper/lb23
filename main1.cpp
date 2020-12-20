#include <iostream>
#include <stack>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>
#include <exception>

int main (){

    std::stack <int> Stack;
    std:: string exp;
    std::getline(std::cin, exp); 
    std::cout << exp << std::endl;
    int left, right;
    std::string c = "";
    for (const char &s : exp){
        if(isdigit(s)){
            c += s;
        }
        else{
            if(c != ""){
                Stack.push(std::stod(c));
                c = "";

            if(Stack.size() > 1){
                right = Stack.top();
                Stack.pop();
                left = Stack.top();
                Stack.pop();
            }
        }

        switch (s){ 
             case '+': Stack.push(left + right); break;
             case '-': Stack.push(left - right); break;
             case '*': Stack.push(left * right); break;
             case '/':  
             
             try {
                   if(right==0) throw std :: exception();
                   left / right;
                   Stack.push(right);}
                   catch (const std :: exception &err ){
                       std::cout << err.what()<< std::endl;
                       std::cout << "division by zero"<< std::endl;
} continue;

             case ' ': break;
            }
        }
    }

    if(Stack.size() > 1){
        std::cout << "incorrect expression" << std::endl;
    }
    else{
        std::cout << "result: " << Stack.top() <<std::endl;
    }
    return 0;
}
