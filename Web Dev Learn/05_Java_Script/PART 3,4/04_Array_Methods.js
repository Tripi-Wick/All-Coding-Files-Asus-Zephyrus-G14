let arr = [69,96]
console.log("--------Og Array--------");
console.log(arr);

// Push : To add at end
arr.push(12);
console.log("--------Push--------");
console.log(arr);

// unShift : To add at beginning
console.log("--------UnShift--------");
arr.unshift(21);
console.log(arr);

// pop : to remove element from the end and return it
console.log("--------Pop--------");
console.log(arr.pop());
console.log(arr);

// shift : to remove element from the start and return it
console.log("--------Shift--------");
console.log(arr.shift());
console.log(arr);

// indexof : returns the index of the element, {Returns -1 if it is not present}
console.log("--------Indexof--------");
console.log(arr.indexOf(69));
console.log(arr.indexOf(21));

// includes : check is the item is present or not
console.log("--------Includes--------");
console.log(arr.includes(69));
console.log(arr.includes(21));

// concat : creates a new array by merging two arrays #It does not affect original arrays
console.log("--------Concat--------");
let arr2 = [1,2,3]
console.log(arr.concat(arr2));

// reverse : reverses the array inplacely i.e. it changes the original array
console.log("--------Reverse--------");
arr.reverse();
console.log(arr);

// slice : cuts the array, it does not modifies original array, by default start index is 0 nd end index is arr.length.
// It does not do changes in the original array
console.log("--------Slice--------");
console.log(arr.slice());
console.log(arr.slice(1));
console.log(arr.slice(0,1));

// splice : used to delete, replace or insert any element, (starting index, amount of elements you want to delete, elements that you want to insert)
// It does changes in the original array
console.log("--------Splice--------");
arr.splice(1,0,88);
console.log(arr);
arr.splice(1,2,90);
console.log(arr);
arr.splice(1,2, 12,31,41,52,100);
console.log(arr);

// sort : sorts the array on the basis of considering every element string.
console.log("--------Sort--------");
let arr3 = ['c','a','d'];
console.log(arr3);
arr3.sort();
console.log(arr3);
let arr4 = ['gojo','sukuna','mahito','yuta','itadori',"geto"];
console.log(arr4);
arr4.sort();
console.log(arr4);

console.log(arr);
arr.sort(); // does not work for numbers properly 
console.log(arr);


