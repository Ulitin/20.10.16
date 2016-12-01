#ifndef INCLUDE_STACK_H_
#define INCLUDE_STACK_H_
#include <stdexcept>

struct CNode {
    int data;
    CNode* next;
};

class stack {
    CNode *element;
	CNode *min_elem;

 public:
    stack() {
        element = 0;
		min_elem = 0;
    }

    bool push(int x) {
        CNode *node = new CNode;
        if (element != 0) {
            node -> data = x;
            node -> next = element;
            this -> element = node;
			if (min_elem->data >= x) {
				CNode *box = new CNode;
				box->data = x;
				box->next = min_elem;
				min_elem = box;
			}
        } else if (element == 0) {
            element = new CNode;
            element -> data = x;
            element -> next = 0;
			min_elem = new CNode;
			min_elem->data = element->data;
			min_elem->next = 0;
        }
        return true;
    }

    int& top() {
        if (element != 0) {
            return element -> data;
        } else if (element == 0) {
			throw std::logic_error("stack is empty");
        }
    }

    bool pop() {
        if (element != 0) {
            CNode* box = element;
            element = element -> next;
			if (min_elem->data == box->data) {
				CNode* box_2 = min_elem;
				min_elem = min_elem->next;
				delete box_2;
			}
            delete box;
            return true;
        }
        return false;
    }

    int min();

    ~stack() {
		CNode *box;
        if (element != 0) {
            while (element -> next != 0) {
                box = element;
                element = element -> next;
                delete box;
            }
            delete element;
        }
		if (min_elem != 0) {
			while (min_elem -> next != 0) {
				box = min_elem;
				min_elem = min_elem->next;
				delete box;
			}
			delete min_elem;
		}
    }
};
#endif