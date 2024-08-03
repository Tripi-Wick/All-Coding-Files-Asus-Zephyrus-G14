// Here we use a lot of ternary conditional statements to reduce redundancy condition?if:else

// Easy way
// export default function Test({salary}){
//     if(salary>0){
//         return(<h1>Your salary is {salary} </h1>)
//     }
//     else{
//         return(<h1>You Are Broke</h1>)
//     }
// }

//Optimized Way 
export default function Test({ salary }) {
    return (<>
        {/* <h1>{salary>0?`Your salary is ${salary}`:`You Are Broke`}</h1> */}
        {/* <h1>{salary>0?`Your salary is ${salary}`:""}</h1>   // This will create new div for else, */}
        {/*{ salary > 0 ? <h1>`Your Salary is ${salary}` </h1> : null } */} {/*This will not*/}
        { salary > 0 && <h1>`Your Salary is ${salary}` </h1> } 
        </>
    )
}