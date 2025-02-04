
const myArr = ['kitler', 1, 2, 3, 4, 5]     // Stored within Square brackets are our arrays.
const myHeroes = ['Hunziker', ]

console.log(myArr[0])
console.log(myHeroes[0])

// array copies are by default shallow copies


myArr.push(6)
myArr.push(7)

console.log(myArr)

myArr.pop()

console.log(myArr);

myArr.unshift(9)
// myArr.shift()        Removes first element

console.log(myArr);

console.log(myArr.includes(9))

const newArr = myArr.join()

console.log(newArr)


// Slice, Splice


console.log("A ",  myArr)

const myn1 = myArr.slice(1, 3)      // 1st included, 3rd not included.
console.log(myn1)

console.log("B ",  myArr)

const myn2 = myArr.splice(1, 3)     // Not only is 3rd included here, splice takes those elements out of the original array and stores it in a variable (optional)
console.log("C ",  myArr)           
console.log(myn2)