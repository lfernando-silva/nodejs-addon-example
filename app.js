const Calculator = require('bindings')('calculator.node')

console.log('Soma %s', Calculator.soma(2, 3))
console.log('Subtração %s', Calculator.subtrai(2, 3))
console.log('Multiplicação %s', Calculator.multiplica(2, 3))
console.log('Divide %s', Calculator.divide(2, 3))