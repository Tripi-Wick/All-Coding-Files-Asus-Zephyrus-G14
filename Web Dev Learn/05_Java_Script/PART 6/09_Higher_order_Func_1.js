// Those functions that can be passed into a function or returned by a function

function MultipleGreet(func,count){
    for(let i=0; i<count; i++){
        func();
    }
}

let greet = function(){
    console.log('Greet');
}

MultipleGreet(greet,4);
MultipleGreet(function(){console.log('This works too');},4);

// MultipleGreet(greet(),4); // This will not work.

// func() --> Calling a function
// func ---> Passing a function


// THe function which are passed as argument to the function is called callback