class MinStack {
public:
    stack<long long>st;
    long long minel;
    MinStack(){
        minel = LLONG_MAX;
    }   
    void push(int val){
        if(st.empty()){
            st.push(0);
            minel = val;
        }
        else{
            long long diff = (long long)val - minel;
            st.push(diff);
            if(diff<0) minel = val;
        }
    }   
    void pop(){
       long long diff = st.top();
       st.pop();
       if(diff<0) minel -= diff;
    }
    int top(){
        long long diff = st.top();
        return (diff<0) ? minel : minel+diff;
    }
    int getMin(){
    return minel;
    }
};