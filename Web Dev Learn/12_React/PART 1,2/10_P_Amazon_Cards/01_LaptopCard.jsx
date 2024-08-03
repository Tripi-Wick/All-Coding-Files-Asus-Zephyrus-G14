import LapDesc from "./00_LaptopDescription";
import LapPrice from "./00_LaptopPrice";
import './01_LaptopCard.css'


export default function LapCard({det}){
    return (
        <div className="lapCard">
        <LapDesc name={det.name} feat = {det.feat} info ={det.info}/>
        <LapPrice realPrice ={det.realPrice} discountedPrice={det.discountedPrice} />
        </div>
    );
}