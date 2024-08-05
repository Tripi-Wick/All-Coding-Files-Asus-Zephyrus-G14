import Header from './Header'
import SearchBar from './Search'
import ResultBox from './ResultBox'

import { useEffect, useState } from 'react';



export default function WeatherApp() {
    let [info,setInfo]=useState(null);
    
    function updateInfo(res){
        setInfo(res);
    }  

    useEffect(()=>{

    })
    
    return (
        <>
            <Header />
            <SearchBar updateInfo ={updateInfo} />
            {info &&<ResultBox info={info}/>}
        </>
    );
}