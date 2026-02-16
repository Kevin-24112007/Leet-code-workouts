class Solution(object):
    def longestCommonPrefix(self, strs):
        i=min(strs,key=len)
        ind=0
        s=""
        for ch in i:
            count=0
            for c in strs:
                if c[ind]==ch:
                    count+=1
                else:
                    break
            if count==len(strs):
                s=s+ch
            else:
                break
            ind+=1
        return s
    

    # this is some second test