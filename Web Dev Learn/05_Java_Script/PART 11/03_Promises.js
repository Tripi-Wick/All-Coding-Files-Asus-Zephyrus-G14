// Without Using Promises, simple callback hell
    // function saveToDb (data, success, failure){
    //     let internetSpeed = Math.ceil(Math.random()*10);
    //     if(internetSpeed>4){
    //         console.log(data);
    //         success();
    //     }
    //     else {
    //         failure();
    //     }
    // }

    // saveToDb(
    //     "Tripi",
    //     function(){
    //         console.log("Success 1 : The data logged")
    //         saveToDb(
    //             "is a",
    //             function(){
    //                 console.log("Success 2 : The data logged")
    //                 saveToDb(
    //                     "duck",
    //                     function(){
    //                         console.log("Success 3 : The data logged")
    //                     },
    //                     function(){
    //                         console.log("Failure 3 : The data failed to log")
    //                     }
    //                 )
    //             },
    //             function(){
    //                 console.log("Failure 2 : The data failed to log")
    //             }
    //         )
    //     },
    //     function(){
    //         console.log("Failure 2 : The data failed to log")
    //     }
    // )

// To Save from this mess/hell we have promises
// The Promise is a object that represents the eventual completion (or failure) of an asynchronous operation and resulting value
// In This success == resolve and failure == reject
// Promise returns an object 
// It can have 3 state : resolved, pending, rejected
// There are tree var in it, type, state result (try on web console)
// If it fails then it gives an error


    function saveToDb(data){
        return new Promise((resolve,reject)=>{
            let internetSpeed = Math.ceil(Math.random()*10);
            if(internetSpeed>4){
                console.log(data);
                resolve("Success: Data was logged");
            }
            else {
                reject("Failure: Data was not logged");    // Sets value of result
            }
        })
    }

    // console.log(saveToDb("tripi"));

// We use then->(used when promise is resolved) and catch->(when it fails,used to catch error) method to do the chaining 
// This is the syntax 
    // saveToDb("tripi")
    //     .then((result)=>{                             // it is the default argument result of the promises that is given to it
    //         console.log("Data 1 logged");
    //         console.log("Result of promise : ",result);
    //         saveToDb('is a')
    //             .then()  
    //             .catch()
    //     })
    //     .catch((error)=>{
    //         console.log("Data logged failed");
    //         console.log("Result of promise : ",error);
    //     })
    
// Better way to do it  --->> Actual Chaining
    saveToDb("tripi")
        .then((result)=>{      
            console.log("Data 1 logged");
            console.log("Result of promise : ",result);
            return saveToDb('is a')
        })
        .then((result)=>{      
            console.log("Data 2 logged");
            console.log("Result of promise : ",result);
        })
        .catch((error)=>{
            console.log("Data logged failed");
            console.log("Result of promise : ",error);
        })