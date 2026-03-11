const prompt = require('prompt-sync')();
let max;
let number;

number = Number(prompt("Enter number 1:"));
max = number;

for (let i = 2; i <= 10; i++) {
  number = Number(prompt(`Enter number ${i}:`));
  if (number > max) {
    max = number;
  }
}

console.log("Maximum number is:", max);