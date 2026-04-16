#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/design-event-manager/submissions/1980404064/
class EventManager 
{
    map<int, int> event_priority;
    set<pair<int, int>>priority_event;    
public:
    EventManager(vector<vector<int>>& events) 
    {
        for(auto v : events)
        {
            event_priority[v[0]] = v[1];
            priority_event.insert({v[1], -v[0]});
        }
    }
    
    void updatePriority(int eventId, int newPriority) {

        if(event_priority.find(eventId) == event_priority.end()) return;
        priority_event.erase({event_priority[eventId], -eventId});
        event_priority[eventId] = newPriority;
        priority_event.insert({event_priority[eventId], -eventId});

    }
    
    int pollHighest() {
        if(priority_event.empty()) return -1;
        auto it = priority_event.end();
        it--;
        int ans = -(it->second);
        priority_event.erase(it);
        event_priority.erase(ans);
        return ans;
    }
};

/**
 * Your EventManager object will be instantiated and called as such:
 * EventManager* obj = new EventManager(events);
 * obj->updatePriority(eventId,newPriority);
 * int param_2 = obj->pollHighest();
 */