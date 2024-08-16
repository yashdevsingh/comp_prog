class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0, r=0, u=0;
        for(int i=0; i<moves.length(); i++){
            if(moves[i]=='L') l++;
            if(moves[i]=='R') r++;
            if(moves[i]=='_') u++;
        }
        return abs(l-r)+u;
    }
};