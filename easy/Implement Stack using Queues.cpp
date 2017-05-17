class MyStack {
public:
	queue<int> myQueue;
	/** Initialize your data structure here. */
	MyStack() {

	}

	/** Push element x onto stack. */
	void push(int x) {
		myQueue.push(x);
	}

	/** Removes the element on top of the stack and returns that element. */
	int pop() {
		int count = myQueue.size();
		for (int i = 0; i<count - 1; i++) {
			int tmp = myQueue.front();
			myQueue.pop();
			myQueue.push(tmp);
		}
		int ret = myQueue.front();
		myQueue.pop();
		return ret;
	}

	/** Get the top element. */
	int top() {
		int count = myQueue.size();
		for (int i = 0; i<count - 1; i++) {
			int tmp = myQueue.front();
			myQueue.pop();
			myQueue.push(tmp);
		}
		int ret = myQueue.front();
		myQueue.pop();
		myQueue.push(ret);
		return ret;
	}

	/** Returns whether the stack is empty. */
	bool empty() {
		return myQueue.empty();
	}
};

/**
* Your MyStack object will be instantiated and called as such:
* MyStack obj = new MyStack();
* obj.push(x);
* int param_2 = obj.pop();
* int param_3 = obj.top();
* bool param_4 = obj.empty();
*/