class MinStack {
public:
    MinStack() {
        
    }
    stack<pair<int,int>> s ; 
    void push(int val) {
        if ( s.empty()) { s.push({val,val})   ;}
        else {   int minval = min(val, s.top().second) ; 
                s.push( {val,minval}  ) ;
         }
    } 
    
    void pop() {
        s.pop() ;
    }
    
    int top() {
        return s.top().first ;
    }
    
    int getMin() {
        return s.top().second ;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */


//took help from apna college youtube channel
// there is a better way to do it , but that one is a little harder. Big O for this current solution is O(2*n) , but the better approach has O(n).
// Because we ignore constants for Big O , thats why Leetcode accepted this answer.
