// The nesting of functions in a js code is called Call Back Hell 
// This used when we try to make our js asynchronous in nature ideally its synchronous language

let con = document.querySelector('h1');

// CODE TO CHANGE COLOR OF TeXT AFTER SOMETIME --> Worst Way

    // setTimeout(() => {
    //     con.style.color = "red";
    // }, 1000);
    // setTimeout(() => {
    //     con.style.color = "orange";
    // }, 2000);
    // setTimeout(() => {
    //     con.style.color = "green";
    // }, 3000);


// Better Way

    // function changeColor (color,delay){
    //     setTimeout(() => {
    //         con.style.color = color;   
    //     }, delay);
    // }

    // changeColor('red',1000);
    // changeColor('orange',2000);
    // changeColor('green',3000);
    
    
// Call Back Hell
    
    function changeColor (color,delay,nextColor){
        setTimeout(() => {
            con.style.color = color;   
            if(nextColor) nextColor();
        }, delay);
    }

    changeColor('red',1000,()=>{
        changeColor('orange',1000,()=>{
            changeColor('green',1000,()=>{
                changeColor('grey',1000);
            });
        });
    });
    
// To avoid these we use promises and async