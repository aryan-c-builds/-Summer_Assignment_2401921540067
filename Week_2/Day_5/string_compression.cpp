class Solution {
public:
    int compress(vector<char>& chars) {
        int write=0, read=0;
        while(read < chars.size()){
            char currChar = chars[read];
            int count = 0;
            while(read < chars.size() && chars[read] == currChar){
                read++;
                count++;
            }
            chars[write++] = currChar;
            if(count > 1){
                string countStr = to_string(count);
                for(char digit : countStr) chars[write++] = digit;
            }
        }
    return write;
    }
};