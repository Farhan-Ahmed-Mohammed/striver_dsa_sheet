class ArrayQueue {
    private:
    int arr[100];
    static const int maxi=100;
    int front;
    int back;

public:
    ArrayQueue() {
        front=-1;
        back=-1;
    }
    
    void push(int x) {
        if(back<maxi-1)
        {
            back++;
            arr[back]=x;

            if(front==-1)
            {
                front++;
            }
        }
   
    }
    
    int pop() {
        if(front>=0)
        {
            int val=arr[front];
            front++;

            if(front>back)
            {
                front=-1;
                back=-1;
            }
            return val;
        }

        else
        {
            return -1;
        }

     
  
    }
    
    int peek() {
        if(front>-1)
        {
            return arr[front];
        }

        else
        {
            return -1;
        }
    
    }
    
    bool isEmpty() {
        if(front==-1 || front>back)
        {
            return true;
        }

        return false;
  
    }
};
