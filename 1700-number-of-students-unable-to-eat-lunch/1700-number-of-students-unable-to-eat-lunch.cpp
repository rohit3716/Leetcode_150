class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int stu_0 = 0 , stu_1 = 0;
        for( auto i:students ){
            if( i == 0 ) stu_0++;
            else stu_1++;
        }
        
        int n = sandwiches.size();
        for( int i = 0; i < n; i++ ){
            if( sandwiches[i] == 0 ){
                if( stu_0 ) stu_0--;
                else return n-i;
            }else{
                if( stu_1 ) stu_1--;
                else return n-i;
            }
        }
        return stu_0+stu_1;
    }
};