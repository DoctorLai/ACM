// https://helloacm.com/single-core-cpu-scheduling-algorithm-by-using-a-priority-queue/
// https://binarysearch.com/problems/CPU-Scheduling
// MEDIUM, PRIORITY QUEUE, SORTING

vector<int> CPUschedulor(vector<vector<int>>& tasks) {
    struct Task {
        int id;
        int startTime;
        int duration;
        Task(int id, int startTime, int duration): 
            id(id), startTime(startTime), duration(duration) {}
    };
    // convert a input task into the Task
    function<Task(vector<int>&)> convertToTask = [](vector<int> &task) {
        Task curTask(task[0], task[1], task[2]);        
        return curTask;
    };    
    vector<int> ans;
    auto whichTaskFirst = [](auto &t1, auto &t2) {
        return (t1.duration > t2.duration) || 
              ((t1.duration == t2.duration) && (t1.id > t2.id));
    };
    sort(begin(tasks), end(tasks), [](auto &t1, auto &t2) {
        // sort the tasks in descending order of startTime
        // so the last task arrives first.
        return t1[1] > t2[1];
    });
    priority_queue<Task, vector<Task>, decltype(whichTaskFirst)> pq(whichTaskFirst);
    int curTime = 0;
    int totalTasks = tasks.size();
    while (ans.size() < totalTasks) {
        if (pq.empty()) {
            curTime = max(curTime, tasks.back()[1]);
        }
        while (!tasks.empty() && (tasks.back()[1] <= curTime)) {
            pq.push(convertToTask(tasks.back()));
            tasks.pop_back();
        }
        ans.push_back(pq.top().id);
        curTime += pq.top().duration;
        pq.pop();        
    }
    return ans;
}
