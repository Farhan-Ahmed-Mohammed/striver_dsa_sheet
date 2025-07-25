class ArrayStack {
    private:
    int arr[100];
    static const int maxi=100; // in private we use static const becoz it value is not changing here and we write in private bcoz its encaptulation hiding this such thta external user cannot make any changes
    int topi;
public:
    ArrayStack() {
         topi=-1;
    }
    
    void push(int x) {
        if(topi<maxi-1)
        {
            topi++;
            arr[topi]=x;
        }

   
    }
    
    int pop() {
        if(topi>=0)
        {
            int val=arr[topi];
            topi--;
            return val;
        }

        else
        {
            return -1;
        }
  
    }
    
    int top() {
        if(topi>=0)
        {
            return arr[topi];
        }
        
        return -1;
    }
    
    bool isEmpty() {
        if(topi<=-1)
        {
            return true;
        }
        return false;
  
    }
};
