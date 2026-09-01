// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/abstract-classes-polymorphism/problem?isFullScreen=true
// Problem     Abstract Classes - Polymorphism
// Difficulty  Hard
// Subdomain   Classes
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-01, 08:37 p.m.
// ──────────────────────────────────────────────────


class LRUCache : public Cache {
    public:
        LRUCache(int capacity) { cp = capacity; tail = nullptr; head = nullptr; };
        ~LRUCache() {};
        
        void set(int k, int v) override {
            Node* placeholder = nullptr;
            
            // Find in mp
            if (mp.find(k) != mp.end()) {
                placeholder = mp[k];
                placeholder->value = v;
            
                if (placeholder->prev) placeholder->prev->next = placeholder->next;
                if (placeholder->next) placeholder->next->prev = placeholder->prev;
            } else {
                placeholder = new Node(k, v);
                mp[k] = placeholder;
            }
            
            // Adjust head & tail
            if (head) {
                placeholder->next = head; head->prev = placeholder;
            }
            head = placeholder;
    
            if (!tail) tail = placeholder;
            
            // Adjust mp accordingly
            if (mp.size() > cp) {
                int removalKey = tail->key;
                auto it = mp.begin();
                for (int i = 0; i < cp; i++) {
                    if (it->first == removalKey) { mp.erase(it); break; }
                    it++;
                }
                tail->prev = nullptr;
                tail = tail->prev;
            }
        };
        
        int get(int k) override {
            if (mp.find(k) == mp.end()) {
                return -1;
            } else {
                Node* placeholder = mp[k];
                if (placeholder->prev) placeholder->prev->next = placeholder->next;
                if (placeholder->next) placeholder->next->prev = placeholder->prev;

                if (head) {
                    placeholder->next = head; head->prev = placeholder;
                }
                head = placeholder;
                
                if (!tail) tail = placeholder;
                
                int res = placeholder->value;
                return res;
            }
        };
};
