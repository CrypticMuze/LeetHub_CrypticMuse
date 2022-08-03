class MyCalendar {
public:
    /*
    vector<pair<int,int>>cal;
    
    bool book(int start, int end) {
        int n = cal.size();
        sort(cal.begin(), cal.end());
        if(cal.size()==0){
            cal.push_back({start, end});
            return true;
        } else{
            for(int i=0; i<n; i++){
                if((start>=cal[i].second && end>=cal[i].second) || (start<=cal[i].first && end<=cal[i].first)) continue;
                else return false;
            }
            cal.push_back({start, end});
            return true;
        }
    } */
    map<int, int> mp;
    bool book(int start, int end){
        auto it = mp.upper_bound(start);
        if (it == mp.end() || end <= it->second){
            mp[end]=start;
            return true;
        } else return false;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */