// Function which is returning function

function oddOrEvenFunctionFactory(request){
    if(request == 'odd'){
        let odd = function(num){
            if(!(num%2)){                                      // This way is also correct
                console.log("It is an odd number");
            }
            else console.log("It is not an odd number");
        }

        return odd;
    }
    else if(request == 'even'){   
        return function(num){                                 // This way is also correct
            if(num%2){
                console.log("It is an even number");
            }
            else console.log("It is not an even number");
        }
    }
    else console.log("Wrong Request of a function")
}


let fun = oddOrEvenFunctionFactory('odd');
fun(2);
fun(3);
let fn = oddOrEvenFunctionFactory('even');
fn(2);
fn(3);
let f = oddOrEvenFunctionFactory('what');