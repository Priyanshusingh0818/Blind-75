class Solution:
    def lengthOfLongestSubstring(self, s):
        st = set()

        left = 0
        maxLength = 0

        for right in range(len(s)):

            while s[right] in st:
                st.remove(s[left])
                left += 1

            st.add(s[right])

            maxLength = max(maxLength, right - left + 1)

        return maxLength


s = input()

obj = Solution()

print(obj.lengthOfLongestSubstring(s))