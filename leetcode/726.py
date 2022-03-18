import string


class Solution:

    def e(self, formula, r):
        while len(formula):
            if formula[0] == ')':
                break
            t = {}
            if formula[0] == '(':
                formula = self.e(formula[1:], t)[1:]
            else:
                if len(formula) >= 2 and formula[1] in string.ascii_lowercase:
                    k = formula[:2]
                    formula = formula[2:]
                else:
                    k = formula[:1]
                    formula = formula[1:]
                t[k] = 1

            c = 0
            while formula and formula[0] in string.digits:
                c *= 10
                c += int(formula[0])
                formula = formula[1:]
            c = max(c, 1)

            for k, v in t.items():
                r[k] = r.get(k, 0) + v * c
        return formula

    def countOfAtoms(self, formula):
        r = {}
        self.e(formula, r)
        s = ''
        for k, v in sorted(r.items()):
            s = s + k
            if v > 1:
                s = s + str(v)
        return s


r = Solution().countOfAtoms("(NB3)33")
print(r)
