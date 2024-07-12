let inp = document.querySelector("input");

// Change is to denote the change made to the element
// It works when the focus changes
inp.addEventListener("change", function(){
    console.log("Value Changed");
    console.log(`New Value = ${this.value}`);
}); 

// Input Works Whenever anything is entered
// It Does not work for non alphabetic keys

inp.addEventListener("input", function(){
    console.log("Value Entered");
    console.log(`New Value = ${this.value}`);
}); 