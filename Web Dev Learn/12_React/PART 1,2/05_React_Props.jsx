// Props are the information that you pass with JSX Tags
// Basically in js function the values which are arguments here in jsx they are props for a component 
// We can also have default values for the props
// Props by default are objects so we can directly use there keys by using braces
// By default we can't send numbers as numbers so we have to send them as strings if we want to send a number we'll have to use braces
// These are used to make our components more versatile and dynamic
// We can also give functions as props as functions are 1st class objects in js 


// export default function ReportCard(props){
//     return(
//         <>
//         <h1> Report Card </h1>
//         <h2>Name: {props.name}</h2>
//         <h3>Score: {props.marks}</h3>
//         </>
//     )
// }

export default function ReportCard({name,marks=0}){
    return(
        <>
        <h1>Report Card</h1>
        <h2>Name: {name}</h2>
        <h3>Score: {marks}</h3>
        </>
    )
}