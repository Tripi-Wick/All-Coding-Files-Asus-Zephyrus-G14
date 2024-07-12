// API == Application Programming Interface
// APIs normally are used as the interface between two softwares.
// The API which work with HTTPS Are known as web APIs, Generally in web dev we work with these.
// APIs return data in JSON format
// When call an API it sends a request to a url known as endpoint
// JSON full form is JavaScript Oriented Notations
// Prior JSON XML was used
// JSON keys are always strings, that is not compulsory in JS
// JSON only Supports values as obj, array, string, number, true , false and null
// When we take data from an api it is given in from of string so we gotta make it an object

// JSON API RESPONSE
let jsonResp = '{"type": "general","setup": "How do you get a baby alien to sleep?","punchline": " You rocket.","id": 125}'
console.log(jsonResp);

// To change from string i.e. json to object
let obj = JSON.parse(jsonResp)
console.log(obj);

// To change from object to string
let jsn = JSON.stringify(obj);
console.log(jsn);


// API Testing Tools
// Postman and  hoppscotch  