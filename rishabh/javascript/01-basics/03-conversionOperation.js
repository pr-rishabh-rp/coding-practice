let score = "33"
let invalid_score = "33abc"
let undefined_value = undefined


console.log("Datatype of score:\t\t\t", typeof score)
console.log("A different way to display dtype:\t", typeof(score))

let valueInNumber = Number(score)
let invalid_valueInNumber = Number(invalid_score)
let bruh_why_are_you_passing_undefined = Number(undefined_value)

console.log(typeof valueInNumber)
console.log(valueInNumber);
console.log(invalid_valueInNumber)          // NaN
console.log(typeof invalid_valueInNumber)   // NaN is can be considered a number here.

console.log(bruh_why_are_you_passing_undefined)         // NaN
console.log(typeof bruh_why_are_you_passing_undefined)  // number

/*      "33" => 33
        "33abc" => NaN
        true => 1; false = 0
*/


let isLoggedIn = ""

let booleanIsLoggedIn = Boolean(isLoggedIn)
console.log(typeof booleanIsLoggedIn, ":", booleanIsLoggedIn)

isLoggedIn = "gomenasai"
booleanIsLoggedIn = Boolean(isLoggedIn)
console.log(typeof booleanIsLoggedIn, ":", booleanIsLoggedIn)

/*
        1 => true
        "" => false
        "dasdasda" => true
*/


/*
odd_or_even = (n) => {
        console.log("We are going to find out whether your NUMBER is odd or even NIGGA:\n\n")

        if (n % 2 == 0) {
                console.log("It is EVEN syuka blyat...")
        }
        else {
                console.log("This one's ODD boss.")
        }
}


odd_or_even(9997);
*/

let value = 3
let negValue = -value

console.log("Negative value:", negValue)
/*
// Write a program asking the user for two numbers using callback.

// It uses another callback to calculate the sum of numbers.

// Then passes the results to a third callback to check if sum is even or not.


const prompt = require("prompt-sync")();
some_function = (callback = (a, b) => {
        a = prompt("Gimme one input pwease >.<:\n")
        b = prompt("Now the other one:\n")
        return [a, b];

}) => {
        let [a, b] = callback();
        let c = Number(a) + Number(b);
        console.log(c, " is your answer.");
        return c;
}

some_function();
*/


let str1 = "hello"
let str2 = " world"

let str3 = str1 + str2

console.log(str3)

console.log("1" + 2)
console.log(1 + "2")
console.log("1" + 2 + 2)

console.log(1 + 2 + "2")

// Why? https://tc39.es/ecma262/#sec-type-conversion    start reading my _good friend_!


console.log(+true)

console.log(+"")

let num1, num2, num3;

num1 = num2 = num3  = 2 + 2


let gameCounter = 100
gameCounter++
console.log(gameCounter)