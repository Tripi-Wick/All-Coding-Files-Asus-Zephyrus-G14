// // Global Scope
let a = 'globe';
console.log(a);

// // Block scope
{
    let b = "limited";
    console.log(b);
}
// console.log(b);   //This will give an error

// // Lexical Scope
{
    let b = 'lim'
    {
        let c = 'more lim'
        console.log(c);
        console.log(b);   // but this will not
        }
    // console.log(c); // will give an error
}

// Hoisting of the data 
{
    function x(){
        console.log(d);
    }
    let d = 6;
    x();
}
// i.e. data can be called prior declaration in js
// This happens as the due to hoisting all the declared data get stored at the top before execution.