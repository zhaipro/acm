class Solution:

    def parse(self, formula):
        values = re.findall(r'\+?(-?\d*x?)', formula)
        factor = 0
        constant = 0
        for value in values[:-1]:
            sign = 1
            if value[0] == '-':
                sign = -sign
                value = value[1:]
            if value[-1] == 'x':
                factor += sign * (int(value[:-1]) if len(value) > 1 else 1)
            else:
                constant += sign * int(value)
        return factor, constant

    def solveEquation(self, equation: str) -> str:
        formual1, formual2 = equation.split('=')
        factor1, constant1 = self.parse(formual1)
        factor2, constant2 = self.parse(formual2)
        factor = factor1 - factor2
        constant = constant1 - constant2
        if factor == 0:
            return 'No solution' if constant else 'Infinite solutions'
        else:
            return f'x={int(-constant / factor)}'
