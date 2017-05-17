class MyQueue {
public:
	stack<int> myStack1, myStack2;
	/** Initialize your data structure here. */
	MyQueue() {

	}

	/** Push element x to the back of queue. */
	void push(int x) {
		myStack1.push(x);
	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		if (myStack2.empty()) {
			while (!myStack1.empty()) {
				int val = myStack1.top();
				myStack1.pop();
				myStack2.push(val);
			}
		}

		int ret = myStack2.top();
		myStack2.pop();
		return ret;
	}

	/** Get the front element. */
	int peek() {
		if (myStack2.empty()) {
			while (!myStack1.empty()) {
				int val = myStack1.top();
				myStack1.pop();
				myStack2.push(val);
			}
		}
		return myStack2.top();
	}

	/** Returns whether the queue is empty. */
	bool empty() {
		if (myStack1.empty() && myStack2.empty())
			return true;
		return false;
	}
};

/**
* Your MyQueue object will be instantiated and called as such:
* MyQueue obj = new MyQueue();
* obj.push(x);
* int param_2 = obj.pop();
* int param_3 = obj.peek();
* bool param_4 = obj.empty();
*/