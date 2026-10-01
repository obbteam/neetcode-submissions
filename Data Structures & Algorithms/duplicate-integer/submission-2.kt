class Solution {
    fun hasDuplicate(nums: IntArray): Boolean {
        val numbers: MutableSet<Int> = mutableSetOf()
        for (num in nums){
            if (numbers.contains(num)) return true
            numbers.add(num)
        }
        return false
    }
}
