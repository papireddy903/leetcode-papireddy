class Node{
    public:
    string url;
    Node* back = NULL;
    Node* next = NULL;
};


class BrowserHistory {
public:
    Node* cur= NULL;
    
    BrowserHistory(string homepage) {
        cur = new Node();
        cur->url = homepage;

        
    }
    
    void visit(string url) {
        Node* temp = new Node();
        temp->url = url;
        cur->next =temp;
        temp->back = cur;
        cur = temp;
        
    }
    
    string back(int steps) {
        while (steps>0){
            if (cur -> back){
                cur = cur->back;
                steps--;
            }
            else{
                break;
            }

        }
        return cur->url;
    }
    
    string forward(int steps) {
        while (steps>0){
            if (cur->next){
                cur = cur->next;
                steps--;
            }
            else{
                break;
            }
        }
        return cur->url;
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */