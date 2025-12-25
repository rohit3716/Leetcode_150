class Solution {
    public long maximumHappinessSum(int[] happiness, int k) {
        int j = 0;
        long maxHappiness = 0;
        Arrays.sort(happiness);
        
        for (int i = 0; i < happiness.length / 2; i++) {
            int temp = happiness[i];
            happiness[i] = happiness[happiness.length - 1 - i];
            happiness[happiness.length - 1 - i] = temp;
        }
        while (k > 0) {
            maxHappiness = maxHappiness + Math.abs(happiness[j] - j);
            k--;
            j++;
        }
        return maxHappiness;
    }
}