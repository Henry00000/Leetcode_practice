#include <iostream>
#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q;    
    void push(int x) {
        q.push(x);
        for (int i = 0; i < q.size() - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int num = q.front();
        q.pop();
        return num;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

int main(void) {
    // Your MyStack object will be instantiated and called as such:
    MyStack* obj = new MyStack();
    obj->push(1);
    obj->push(2);
    int param_2 = obj->top();
    int param_3 = obj->pop();
    bool param_4 = obj->empty();
    cout << "obj->push(1);obj->push(2);" << endl;
    cout << "obj->top() = " << param_2 << endl;
    cout << "obj->pop() = " << param_3 << endl;
    cout << boolalpha;  // 啟用布林值文字顯示
    cout << "obj->empty() = " << param_4 << endl;

    cout << "======================" << endl;
    cout << "Initialize a C++ queue" << endl;
    queue<int> q;
    cout << "q.empty: " << q.empty() << endl;       // 1 (true)
    cout << "push 1 & 2 into q"<< endl;
    q.push(1);
    q.push(2);
    bool bl = q.empty();
    cout << "q.empty(): " << q.empty() << endl;     // 0 (false)
    cout << "q.size(): " << q.size() << endl;       // 2
    cout << "q.front(): " << q.front() << endl;     // 1
    cout << "q.back(): " << q.back() << endl;       // 2
    q.pop();
    cout << "q.pop(), then q.front(): " << q.front() << endl;   // 2

    return 0;
}