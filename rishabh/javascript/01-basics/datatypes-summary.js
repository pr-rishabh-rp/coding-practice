// Primitive

// 7 Types: String, Number, Boolean, null, undefined, Symbol, BigInt


const score = 100
const scoreValue = 100.3

const isLoggedIn = false
const outsideTemp = null
let userEmail;  // undefined

const id = Symbol('123')
const anotherId = Symbol('123')     // Values of both of these will not be same


console.log(id === anotherId)


const bigNumber = 9183419419844n    // bigInt

const heros = ["Shaktimaan", "Naagraaj", "Doga"]

let myObj = {
    name: "Rishabh",
    age: 22,
}

const myFunction = function() {
    console.log("Hello, world!")
}

console.log(typeof outsideTemp);        // Why is this object? 
console.log(typeof myFunction);         // It says function but it is objectFunction


// Reference (Non Primitive)

// Array, Objects, Functions


//  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


// Stack (Primitive) and Heap (Non-Primitive)

let myYoutubeName = "boywhatdahellbo"

let anotherName = myYoutubeName
anotherName = "catchsomefeelings"           // Pointing to stack and saying yo change this value to this new value.

console.log(anotherName)
console.log(myYoutubeName)

let user1 = {
    email: "asddada",
    upi: "sdadfafsada",
}

let user2 = user1;

user2.email = "goombastompa@gmail.com"      // Pointing to heap and saying yo change this value to this new value.

console.log(user1.email)
console.log(user2.email)