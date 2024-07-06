class Solution {
public:
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {
        int min_val = INT_MAX;
        long long crnt_energy = currentEnergy;
        for(int i=0; i<enemyEnergies.size(); i++)
        {
            crnt_energy += enemyEnergies[i];
            min_val = min(min_val,enemyEnergies[i]);
        }
        crnt_energy -= min_val;
        if(currentEnergy < min_val) return 0;
         return crnt_energy/min_val;
    }
};