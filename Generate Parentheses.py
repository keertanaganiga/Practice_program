'''
Generate Parentheses

Given an integer N representing the number of pairs of parentheses, the task is to generate all combinations of well-formed(balanced) parentheses.

Example 1:

Input:
N = 3
Output:
((()))
(()())
(())()
()(())
()()()

Example 2:
Input:
N = 1
Output:
()

'''
class Solution:
    def AllParenthesis(self,n):
        stack=[]
        result=[]
        
        def backtracking(openN,closeN):
            if openN==closeN==n:
                result.append("".join(stack))
                return
            
            if openN<n:
                stack.append("(")
                backtracking(openN+1,closeN)
                stack.pop()
                
            if closeN<openN:
                stack.append(")")
                backtracking(openN,closeN+1)
                stack.pop()
                
        backtracking(0,0)
        return result
      
 if __name__=="__main__":
    t=int(input())
    for i in range(0,t):
        n=int(input())
        ob=Solution()
        result=ob.AllParenthesis(n)
        result.sort()
        for i in range(0,len(result)):
            print(result[i])
        
