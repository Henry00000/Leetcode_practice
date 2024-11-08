#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> s;
    
    void push(int x) {
        if (empty()) {
            s.push(x);
        }
        else {
            cout << "s.size(): " << s.size() << endl;
            int array[s.size()];
            int i;
            // while (!empty()) {
            //     array[i] = pop();
            //     cout << "array[" << i << "]=" << array[i] << " ";
            //     i++;
            // }
            for (i = 0; !empty(); i++) {
                array[i] = pop();
                // cout << "array[" << i << "]=" << array[i] << " ";
            }
            cout <<endl;
            s.push(x);
            for (i--; i >= 0; i--) {
                // cout << "array[" << i << "]=" << array[i] << " ";
                s.push(array[i]);
            }
            cout << endl;
        }
    }
    
    int pop() {
        int num = s.top();
        s.pop();
        return num;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
    }
};

int main(void){
    cout << boolalpha;
    // Your MyQueue object will be instantiated and called as such:
    MyQueue* obj = new MyQueue();
    cout << "obj->push(1)" << endl;
    obj->push(1);
    cout << "obj->push(2)" << endl;
    obj->push(2);
    cout << "obj->push(3)" << endl;
    obj->push(3);
    cout << "obj->push(4)" << endl;
    obj->push(4);
    int param_2 = obj->peek();
    int param_3 = obj->pop();
    bool param_4 = obj->empty();
    cout << "obj->peek(): " << param_2 << endl;
    cout << "obj->pop(): " << param_3 << endl;
    cout << "obj->empty(): " << param_4 << endl;
    cout << obj->pop() << endl;
    cout << obj->pop();
}