

class AstarNode {
    int configuration;
    int gStar;
    int hStar;
    int fStar;
    AstarNode* parent;


    AstarNode(){

    }

    void printNode(){

    }

};

class AStarSearch {
    public:
    AstarNode startNode;
    AstarNode goalNode;
    AstarNode* OpenList;
    AstarNode* CloseList;
    AstarNode* childList;

    AStarSearch(){
        int i;
    }

    int computeGstar(){

    }

    int computeHstar(){

    }

    bool match(int configuration1, int configuration2){

    }

    bool isGoalNode(){

    }

    void listInsert(){

    }

    AstarNode remove(){

    }

    bool checkAncestors(){

    }

    AstarNode* constructChildList(){

    }

    void printList(){
        
    }

};