// It returns a promise
async function demo(){
    // throw "Random Error";  // Used to give error
    return "Hello";
}

// Use This command in Consol
demo();

// Now We can use are methods with it 
demo()
    .then((res)=>{
        console.log("It worked");
    })
    .catch((err)=>{
        console.log("Err Occurred",err);
    })