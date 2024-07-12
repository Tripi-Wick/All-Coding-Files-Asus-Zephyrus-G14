let form = document.querySelector("form");

// form.addEventListener("submit", function(e){
//     e.defaultPrevented();  // Used to prevent default behavior of form
//     console.log("FORM SUBMITTED")
// })

// Extracting Data

form.addEventListener("submit",function(event){
    event.preventDefault();

    // let usn = document.querySelector("#usn");
    // let usp = document.querySelector("#usp");

    // /shortcut -> a attribute of form obj is its elements
    let usn = this.elements[0];
    let usp = this.elements[1];

    console.log(`User Name = ${usn.value} \n Password = ${usp.value}`);  // value is used to get the entered value
})