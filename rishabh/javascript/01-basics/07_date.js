// milliseconds since midnight of January 1 1970.


let myDate = new Date()
console.log(myDate.toString());
console.log(myDate.toDateString());
console.log(myDate.toLocaleString());
console.log(typeof myDate);

let myCreatedDate = new Date(2025, 1, 3);
console.log(myCreatedDate.toDateString())