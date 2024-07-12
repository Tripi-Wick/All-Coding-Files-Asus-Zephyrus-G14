let str = "     'Black is a snake with reading powers with a love to a human'       "

// Trim : Used to remove excess of spaces in beginning and end
console.log("--------String Trim--------");
console.log(str.trim());

// toUpperCase : You know what it does 
console.log("--------String CASE Change--------");
console.log(str.toUpperCase());

// toLowerCase : You know what it does 
console.log("--------String case Change--------");
console.log(str.toLowerCase());

// indexOf : Tells the first occurrence of the entered string  {-1: String not present}
console.log("--------String indexOf Method--------");
console.log(str.indexOf('snake'));
console.log(str.indexOf("B"));

// slice : Used to slice a string from a given interval (inclusive) -- [start, end)  {-num = length - num}
console.log("--------String Slice--------");
console.log(str.slice('6','11'));
console.log(str.slice("17"));

// replace : Used to replace a string with new string
console.log("--------String Replace--------");
console.log(str.replace('Black','White'));

// repeat : Used to repeat the string entered number of times.
console.log("--------String Repeat--------");
console.log(str.repeat(3));

// Og String
console.log("--------Og String--------");
console.log(str)

// // // As you can see strings in JS are immutable i.e. cannot be altered by any method.