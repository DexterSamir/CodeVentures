class RandomizedSet {
public:
    vector<int> store;
    unordered_map<int, int> track;
    
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
       if(track.find(val) != track.end()){
            return false;
        }
        
        store.emplace_back(val);
        track[val] = store.size()-1;
        
        return true; 
    }
    
    bool remove(int val) {
        if(track.find(val) == track.end()){
            return false;
        }
        
        if(store.back() == val){
            store.pop_back();
            track.erase(val);
        }else{
            int last = store.back(), newpos = track[val];
            swap(store.back(), store[track[val]]);
            store.pop_back();
            track[last] = newpos;
            track.erase(val);
        }
        
        return true;
    }
    
    int getRandom() {
        return store[rand()%store.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
