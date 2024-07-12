// This function is used to execute the entered function after the entered time
// every set_interval function has unique id which we use to stop it.

let id = setInterval(()=>{console.log('a')},2000);
console.log(id);

// clearInterval(id); //This function is used to stop it in the console