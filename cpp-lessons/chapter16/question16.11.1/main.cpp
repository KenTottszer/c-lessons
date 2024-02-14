#include <iostream>
#include <vector>


void printStack(const std::vector<int> stack){
    if(stack.empty()){
        std::cout << "Stack is empty.";
    }
   for (int i : stack){
        std::cout << i << " ";
   }
   std::cout << "\n";
}

int main(){
    std::vector<int> stack{};
    printStack(stack);
    stack.push_back(1);
    printStack(stack);
    stack.push_back(2);
    printStack(stack);
    stack.push_back(3);
    printStack(stack);
    stack.pop_back();
    printStack(stack);
    stack.push_back(4);
    printStack(stack);
    stack.pop_back();
    printStack(stack);
    stack.pop_back();
    printStack(stack);
    stack.pop_back();
    printStack(stack);
    stack.pop_back();
    printStack(stack);


}