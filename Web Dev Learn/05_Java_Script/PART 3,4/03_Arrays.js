// Arrays are mutable in js
// Arrays can store different types of values

let arr = ['sucks', 3, 3.24];

console.log(arr[0]);
console.log(arr[0][1]);
console.log(arr[0].length);

// See method chaining is very useful

arr[10]=9;

// now index 3 to 9 are undefined but at index 10 value is ni 
console.log(arr);