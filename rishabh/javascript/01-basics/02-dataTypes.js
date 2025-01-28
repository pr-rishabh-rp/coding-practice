"use strict";   // Treat all JS code as newer version

// alert(3 + 3)         ---->       Won't work cah we are in Node and not in browser.


// Bruh don't test code readability, like what is this shit...?
console.log(3 + 3); console.log("goo goo gaa gaa"); console.log("You are...?")


// Also if you write like this, küs.
console.log(
    3
    +   
            3
)


let name = "Johnny Joestar"
let age = 16
let isLoggedIn = false
let state = null

// number => 2^53
// bigint
// string => ""
// boolean => true/false
// null => standalone value (kinda represents 'nothing')
// undefined => ???
// symbol => unique     (to be discussed while doing React)

// object

console.log(typeof state);      // object
console.log(typeof age)         // number
console.log(typeof null)        // object
console.log(typeof undefined)   // undefined