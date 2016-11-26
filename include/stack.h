#ifndef INCLUDE_STACK_H_
#define INCLUDE_STACK_H_

struct CNode {
    int data;
    CNode* next;
};

class stack {
    CNode *element;

 public:
    stack() {
        element = 0;
    }

    bool push(int x) {
        CNode *node = new CNode;
        if (element != 0) {
            node -> data = x;
            node -> next = element;
            this -> element = node;
        } else if (element == 0) {
            element = new CNode;
            element -> data = x;
            element -> next = 0;
        }
        return true;
    }

    int& top() {
        if (element != 0) {
            return element -> data;
        } else if (element == 0) {
			throw 1;
        }
    }

    bool pop() {
        if (element != 0) {
            CNode* box = element;
            element = element -> next;
            delete box;
            return true;
        }
        return false;
    }

    int min();

    ~stack() {
        if (element != 0) {
            CNode *box;
            while (element -> next != 0) {
                box = element;
                element = element -> next;
                delete box;
            }
            delete element;
        }
    }
};
#endif