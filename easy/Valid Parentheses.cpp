class Solution {
public:

	bool isValid(string s) {
		stack<char> myStack;
		for (char myChar : s) {
			switch (myChar) {
			case '{':
			case '[':
			case '(':myStack.push(myChar); break;
			case '}':if (myStack.empty() || myStack.top() != '{') return false; else myStack.pop(); break;
			case ']':if (myStack.empty() || myStack.top() != '[') return false; else myStack.pop(); break;
			case ')':if (myStack.empty() || myStack.top() != '(') return false; else myStack.pop(); break;
			default:
				;//pass
			}
		}
		return myStack.empty();
	}
};