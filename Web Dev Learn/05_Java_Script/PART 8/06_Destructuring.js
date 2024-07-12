/////// For arrays
let names = ['a','b','c','d'];
// let winner = names[0];
// let runner_up = names[1];

// //we do this i.e. can store the values of array in the new vars by destructuring
// let [winner, runner_up] = names;

// //to add rest in other we can use rest
let [winner, runner_up, ...ex] = names;
console.log(winner,runner_up,ex);


/////// For objects
// //It matches the var name with the key and puts its value in it.
// //We can also pass default values in it to be used if such key is not present in the object.

let obj = {
    nam : 'trip',
    pas : 'rum',
    key : 'duck'
}

// let {nam , pas} = obj;
// console.log(nam,pas);

let {nam : var1, pas: var2} = obj;
// console.log(nam,pas);  /// this is not defined now
console.log(var1,var2);


let {nam : var3, pas: var4='sup', city: var5='alan'} = obj;   //we can define new var nd a default value too, if value is in obj then it supersedes the default value
console.log(var3,var4,var5);




