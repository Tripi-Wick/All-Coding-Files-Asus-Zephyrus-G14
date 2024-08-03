// In styling too we can use js in the jsx file

// A way
// export default function Demo({sal}){
//     let sty = {backgroundColor: sal>0?'green':'red'}
//     return (<h1 style={sty}>Your Account Beholds : {sal} INR</h1>)
// }
    
// A Better way
export default function Demo({sal}){
    return (<h1 style={{backgroundColor: sal>0?'green':'red'}}>Your Account Beholds : {sal} INR</h1>)
}