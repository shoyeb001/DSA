class MyHashSet {
public:
    vector<list<int>>hash;
    int size;
    
    MyHashSet() {
        size = 50;
        hash.resize(size);
    }
    
    int hashing(int key){
        return key%size;
    }
    
    list<int> :: iterator search(int key){
        int i = hashing(key);
        return find(hash[i].begin(),hash[i].end(),key);
    }
    
    void add(int key) {
        if(contains(key)){
            return;
        }
        int i = hashing(key);
        hash[i].push_back(key);
    }
    
    void remove(int key) {
        if(!contains(key)) return;
        int i = hashing(key);
        hash[i].erase(search(key));
    }
    
    bool contains(int key) {
       int i = hashing(key);
        if(search(key)!=hash[i].end()){
            return true;
        }else{
            return false;
        }
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

// class MyHashSet {
// public:
//     vector<int>hash;
//     int size;
    
//     MyHashSet() {
//         size = 1e6+1;
//         hash.resize(size);
//     }
    
//     void add(int key) {
//         hash[key] = 1;
//     }
    
//     void remove(int key) {
//         hash[key]=0;
//     }
    
//     bool contains(int key) {
//         if(hash[key]==1){
//             return true;
//         }else{
//             return false;
//         }
//     }
// };
