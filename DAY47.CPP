//NUMBER OF STUDENTS UNABLE TO EAT LUNCH 
//https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int size = students.size();
        queue<int> student_choice;
        for(int i = 0 ; i < size ; ++i){
            student_choice.push(students[i]);
        }
        int rotations = 0 , i = 0;
        while(student_choice.size() && rotations < student_choice.size()){
            if(student_choice.front() == sandwiches[i]){
                student_choice.pop();
                i++;
                rotations = 0;
            } else {
                int choice = student_choice.front();
                student_choice.pop();
                student_choice.push(choice);
                rotations++;
            }
        }
        return student_choice.size();
    }
};


//NUMBER OF RECENT CALLS 
//https://leetcode.com/problems/number-of-recent-calls/


class RecentCounter {
public:
queue<int> a;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        a.push(t);
        while(a.front()<t-3000)
        a.pop();
    return a.size();  
    }
    
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */