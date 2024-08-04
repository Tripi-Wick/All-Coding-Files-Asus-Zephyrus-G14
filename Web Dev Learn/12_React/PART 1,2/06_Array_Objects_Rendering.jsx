// if we enter array normally then jsx treat it as individual values and pick them and put them one after another
// hence we gotta create list item to render array elements as elements
// By default objects will not be printed so we gotta write their keys
// To show array dang se we gotta write it in list items 
// map function is used to change the elements of the array

// export default function Demo({array,object}){
//     return(
//         <>
//         <h1>{array}</h1>
//         <hr />
//         {/* <h1>{object}</h1> */}
//         <h1>{object.villain}</h1>
//         <h1>{object.protagonist}</h1>
//         <h1>{object.hero}</h1>
//         </>
//     )
// }

// Decent way
// export default function Demo({ array, object }) {
//     return (
//         <>
//             <h1>{array}</h1>
//             <hr />
//         </>
//     )
// }

//Best Way 
export default function Demo({ array }) {
    return (
        <>
            <h1>{array.map((array) => <li> {array} </li>)}</h1>
            <hr />
        </>
    )
}