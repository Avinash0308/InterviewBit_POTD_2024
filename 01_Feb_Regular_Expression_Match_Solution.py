class Solution:
    # @param s : string
    # @param p : string
    # @return an integer
    def isMatch(self, s, p):
        if len(p) - p.count('*') > len(s):
            return 0
        DP = [True] + [False]*len(s)
        for c in p:
            if c == '*':
                for n in range(1, len(s)+1):
                    DP[n] = DP[n-1] or DP[n]
            else:
                for n in range(len(s)-1, -1, -1):
                    DP[n+1] = DP[n] and (c == s[n] or c == '?')
            DP[0] = DP[0] and c == '*'
        return 1 if DP[-1] else 0