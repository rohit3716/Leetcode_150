class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        int n = seats.size();
        int i = 0, moves = 0;
        while( i < n ){
            moves += abs(seats[i]-students[i]);
            i++;
        }
        return moves;
    }
};