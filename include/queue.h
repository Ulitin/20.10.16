struct list {
  int data;
  list *next;
  list *prev;
};

class QUEUE {
    list *start;
    list *end;
    int SIZE;
public:

    QUEUE() {
        start = 0;
        end = 0;
		SIZE = 0;
    }

	int back() {
		return end->data;
	}

	bool IsEmpty() {
		return (SIZE == 0);
	}

	int size() {
		return SIZE;
	}

  void push (int x) {
    list *pointer = new list;
    pointer->data = x;
	if (IsEmpty() !=0) {
	  end = pointer;
      end -> next = end;
	  end -> prev = end;
	  start = end;
    }
	else {
	  end -> next = pointer;
	  pointer -> next = start;
	  pointer -> prev = end;
	  end = pointer;
	}
	SIZE++;
  }
  

  void pop(){
    list *pointer = start;
	start = start->next;
	delete pointer;
	SIZE--;
  }

  int front(){
    return start->data;
  }

  ~QUEUE() {
  }
};

double* fun(int w, int* x, int size);

