lass Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=0;
        int lp=0;
        int rp=height.size()-1;
        while(rp>lp){
            int ht=min(height[lp],height[rp]);
            int wd=rp-lp;
            int currWater=ht*wd;
            maxWater=max(maxWater,currWater);
            height[lp]<height[rp]?lp++:rp--;
        }
        return maxWater;
    }
};