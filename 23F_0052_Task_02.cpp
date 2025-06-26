//#include <iostream>
//using namespace std;
//struct Node {
//    string data;
//    Node* next;
//};
//class Stack {
//public:
//    Node* top;
//    Stack() { top = nullptr; } 
//    void push(string val) {
//        Node* newNode = new Node{val};
//        newNode->next = top;
//        top = newNode;
//    }   
//    string pop() {
//        if (top == nullptr) return "";
//        string val = top->data;
//        Node* temp = top;
//        top = top->next;
//        delete temp;
//        return val;
//    }   
//    bool isEmpty() {
//        return top == nullptr;
//    }
//};
//int main() {
//    Stack undoStack, redoStack;
//    string command;   
//    cout << "[undo: disabled, redo: disabled]" << endl;  
//    while (true) {
//        cout << "Type your command: ";
//        getline(cin, command);       
//        if (command == "quit") {
//            cout << "Program terminating." << endl;
//            break;
//        } else if (command == "undo") {
//            if (!undoStack.isEmpty()) {
//                string undoneCommand = undoStack.pop();
//                redoStack.push(undoneCommand);
//                cout << undoneCommand << " undone" << endl;
//            } else {
//                cout << "Nothing to undo." << endl;
//            }
//        } else if (command == "redo") {
//            if (!redoStack.isEmpty()) {
//                string redoneCommand = redoStack.pop();
//                undoStack.push(redoneCommand);
//                cout << redoneCommand << " redone" << endl;
//            } else {
//                cout << "Nothing to redo." << endl;
//            }
//        } else {
//            undoStack.push(command);
//            while (!redoStack.isEmpty()) redoStack.pop(); // Clear redo history
//        }  
//        cout << "[undo: " << (!undoStack.isEmpty() ? "enabled" : "disabled")
//             << ", redo: " << (!redoStack.isEmpty() ? "enabled" : "disabled") << "]" << endl;
//    }
//    return 0;
//}