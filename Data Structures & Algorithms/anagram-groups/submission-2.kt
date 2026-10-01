class Solution {
    fun groupAnagrams(strs: Array<String>): List<List<String>> {
        val anagramGroups = hashMapOf<List<Char>, MutableList<String>>()
        for (s in strs) {
            val sorted = s.toCharArray().sorted()
            if (anagramGroups.containsKey(sorted)) anagramGroups[sorted]!!.add(s)
            else anagramGroups[sorted] = mutableListOf(s)
        }

        var result: MutableList<List<String>> = mutableListOf()

        for ((x,list) in anagramGroups) {
            result.add(list)
        }

        return result
    }
}
