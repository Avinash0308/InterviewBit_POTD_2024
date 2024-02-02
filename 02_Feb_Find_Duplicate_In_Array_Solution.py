class Solution:
    # @param A : tuple of integers
    # @return an integer
    def repeatedNumber(self, A):
        n = len(A) - 1
        if n == 0:
            return -1
        p = int(n**0.5)
        if p*p < n:
            p += 1
        hashLen = p + 1
        hashDict = [0]*hashLen
        for i in range(n+1):
            hashDict[(A[i]-1)//p] += 1
        over = -1
        numRanges = (n - 1)//p + 1

        for i in range(numRanges):
            if i < numRanges - 1 or n % p == 0:
                if hashDict[i] > p:
                    over = i
                    break
            else:
                if hashDict[i] > n % p:
                    over = i
                    break
        if over == -1:
            return -1

        hashDict = [0]*hashLen
        for i in range(n+1):
            if (A[i]-1)//p == over:
                hashDict[(A[i]-1) % p] += 1
        for i in range(p):
            if hashDict[i] > 1:
                return over*p + i + 1
        return -1
