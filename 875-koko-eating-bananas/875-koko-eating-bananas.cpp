class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(piles.begin(),piles.end());
        while (left<=right){
            long long int mid = left + (right-left)/2;
            if(kokoCanEat(piles, mid, h)) right = mid - 1;
            else left = mid + 1;
        }
        return left;
    }
    
    /*
    Aman Anand
    
    
    
    */
    bool kokoCanEat(vector<int> piles, int k, int h){
        long long int hours = 0;
        for(auto pile : piles){
            long long int div = pile/k;
            hours += div;
            if(pile%k != 0) ++hours;
        }
        return hours<=h;
        
    }
};