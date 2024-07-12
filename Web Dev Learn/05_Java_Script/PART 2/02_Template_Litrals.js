let pencilPrice = 20;
let SharpenerPrice = 10;

// console.log("The Price of the set of pencil and sharpener is : ", pencilPrice + SharpenerPrice , "Rupees");
// let cost = "The Price of the set of pencil and sharpener is : " + (pencilPrice + SharpenerPrice) + " Rupees";

// Using Template Literal
// We use ` (backward tick to represent the template literal) nd ${} to enter the literal
let cost = `The Price of the set of pencil and sharpener is ${pencilPrice+SharpenerPrice} Rupees`

console.log(cost)