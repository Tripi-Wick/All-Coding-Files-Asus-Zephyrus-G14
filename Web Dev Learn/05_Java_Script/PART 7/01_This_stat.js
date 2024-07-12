let obj = {
    a : 20,
    b : 30,
    c : 10,
    // avg : function(){(a+b+C)/3}        //This will not work as functions can't directly access the elements
    avg : function(){   
        console.log((this.a+this.b+this.c)/3);
    }
}

obj.avg();


// This refers to the object of which this function belongs
// By default everything every function belong to a object called window.

console.log(window); // Use it in console of the webpage


