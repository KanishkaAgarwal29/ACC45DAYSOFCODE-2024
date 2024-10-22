class Solution:
    def isPalindrome(self, x: int) -> bool:
        if(x<0):
            return False
        else:
            s=0
            t=x
            while(x):
                r=x%10
                s=(s*10)+r
                x=x//10
            if(s==t):
                return True
            else:
                return False

        
