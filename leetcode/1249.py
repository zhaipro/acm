class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
    	s = list(s)
    	t = []
    	for i, c in enumerate(s):
    		if c == '(':
    			t.append(i)
    		elif c == ')':
    			if t:
    				t.pop()
    			else:
    				s[i] = ''
    	for i in t:
    		s[i] = ''
    	return ''.join(s)
