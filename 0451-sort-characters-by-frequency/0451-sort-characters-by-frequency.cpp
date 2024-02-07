class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        for( auto i:s ){
            mp[i]++;
        }

        priority_queue<pair<int, char>> pq; //as priority queue is by default max heap

        for( auto i:mp ){  //pushing all the values of map in heap
            pq.push({i.second, i.first});
        }

        string ans = "";

        while( !pq.empty() ){
            int count;
            char c;

            tie(count, c) = pq.top();
            pq.pop();

            while( count-- ) ans += c;
            
        }
        return ans;
    }
};