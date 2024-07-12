// Try block is used to test a line of code for error.
// If error is occurred then catch statement is executed.

// console.log('a');
// console.log('a');
// console.log(a);   //THis gives an error so next lines will also not work so to avoid this and crash of a website we use try and catch
// console.log('a');
// console.log('a');


console.log('a');
console.log('a');
try{
    console.log(a);  
// } catch {
//     console.log("AHA it got cached");
// }
} catch(error){                                 // we can do this to see the error
    console.log("AHA it got cached");
    console.log(error);
}
console.log('a');
console.log('a');