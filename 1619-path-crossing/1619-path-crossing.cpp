class Solution {
public:
    bool isPathCrossing(string path) {
        pair<int, int> cords;
        cords.first = 0;
        cords.second = 0;
        set<pair<int, int>> umap;
        umap.insert(cords);

        for (int i = 0; i < path.size(); i++) {
            int sizeBefore = umap.size();
            
            if (path[i] == 'N') {
                cords.second += 1;
                
            } else if (path[i] == 'S') {
                cords.second -= 1;
               
            } else if (path[i] == 'E') {
                cords.first += 1;
                
            } else if (path[i] == 'W') {
                cords.first -= 1;
                
            }
            umap.insert(cords);
            int sizeAfter = umap.size();
            if(sizeBefore == sizeAfter)
            return true;
            // if(umap.find(cords) == umap.end()){
            //     umap.insert(cords);
            // }
            // else
            // return true;


        }
        return false;
    }
};