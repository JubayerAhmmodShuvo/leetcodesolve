class RandomizedSet {
public:
    set<int> S;
    vector<int> v;

    RandomizedSet() {}

    bool insert(int val) {
        if (S.size() == 0 || S.find(val) == S.end()) {
            S.insert(val);
            v.push_back(val);
            return true;
        }

        return false;
    }

    bool remove(int val) {
        if (S.find(val) != S.end()) {
            S.erase(val);
            v.erase(find(v.begin(), v.end(), val));
            return true;
        }

        return false;
    }

    int getRandom() { return v[rand() % v.size()]; }
};


/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */