class Solution {
private:
    class Person {
    public:
        string name;
        int height;
        
        Person(string n, int h) : name(n), height(h) {}

        bool operator<(const Person& other) const {
            return height < other.height;
        }
    };
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        priority_queue<Person> pq;

        int n = names.size();
        for(int i = 0; i < n; i++) {
            pq.push(Person(names[i], heights[i]));
        }


        vector<string> ans(n);

        for(int i = 0; i < n; i++) {
            ans[i] = pq.top().name;
            pq.pop();
        }

        return ans;
    }
};