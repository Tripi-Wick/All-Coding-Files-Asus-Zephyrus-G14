// Await keyword is used in async function at stop all other functions until the await one get completed
// We gotta also treat errors in it so we use error handling
function getNum(){
    return new Promise((resolve,reject)=>{
        setTimeout(() => {
            let rand = Math.ceil(Math.random()*10);
            console.log(rand);  
            if(rand>5){
                resolve("It is resolved.");
            }
            else reject("It is rejected.")
        }, 1000);
    })
}

async function demo(){
    try{
        await getNum(); 
        await getNum(); 
        await getNum(); 
    }
    catch(err){
        console.log("Error Caught");
        console.log(err);
    }
}

demo();