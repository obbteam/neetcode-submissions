class Solution {
    fun isAnagram(s: String, t: String): Boolean {
        if (s.length != t.length) return false

        val alphabet: String = "abcdefghijklmnopqrstuvwxyz"

        val charCount: MutableList<Int> = MutableList(alphabet.length) {0}

        for (c in s) charCount[c - 'a']++

        for(c in t) {
            charCount[c - 'a']--
            if (charCount[c - 'a'] < 0) return false
        }

        for (c in charCount) {
            if (charCount[c] != 0) return false
        }

        return true
    }
}
