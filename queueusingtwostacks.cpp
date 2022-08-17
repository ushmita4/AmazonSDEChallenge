

class Queue{
    stack<int> stk1, stk2;
    public:


    bool enqueue(int X){

        stk1.push(X);


        return true;
    }


    int dequeue(){
       
        if (stk1.empty() && stk2.empty()){ 
            
            return -1; 
        } 
  
        
        if (stk2.empty()){ 
            
            while (!stk1.empty()){ 
               
                stk2.push(stk1.top()); 

               
                stk1.pop(); 
            } 
        } 
       
        int X = stk2.top(); 

       
        stk2.pop(); 

       
        return X; 
    }
};
