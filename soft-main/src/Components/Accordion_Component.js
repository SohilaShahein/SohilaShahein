import {
    Typography,
    Accordion,
    AccordionSummary,
    AccordionDetails,
    Checkbox,
    Grid,

} from "@mui/material";
import ExpandMoreIcon from "@mui/icons-material/ExpandMore";
import card1 from "./card1"
import * as React from "react";
import FormRow from "./FormRow"
import { Array_Data } from "./Atoms";
import Index from "./Index";
import { useRecoilState } from "recoil";
import MultiActionAreaCard from "./card1";
import { Array_Data2 } from "./Atoms";
import { Array_Data3 } from "./Atoms";
import { Array_Data4 } from "./Atoms";
// import 1 from '../1.png';

// function header (){
//     return <img scr={1} alt="1" />;
// }
const Accordion_component = () => {
    const [Array_Dataa, setArray_Data1] = useRecoilState(Array_Data);

    // const Accordion_component = () => {
        const [Array_Dataa2, setArray_Data2] = useRecoilState(Array_Data2);
    const [Array_Dataa3, setArray_Data3] = useRecoilState(Array_Data3);
    const [Array_Dataa4, setArray_Data4] = useRecoilState(Array_Data4);
    const handleChange = (event) => {
        console.log(event.target.checked);
    };
    const result_Array = Array_Dataa.map(
        (item, Index) => {
            return <div  >
                <MultiActionAreaCard   totaldata={item}></MultiActionAreaCard>
            </div>
        }
    )

    const result_Array2 = Array_Dataa2.map(
        (item, Index) => {
            return <div  >
                <MultiActionAreaCard   totaldata={item}></MultiActionAreaCard>
            </div>
        }
    )

    const result_Array3 = Array_Dataa3.map(
        (item, Index) => {
            return <div  >
                <MultiActionAreaCard   totaldata={item}></MultiActionAreaCard>
            </div>
        })
        const result_Array4 = Array_Dataa4.map(
            (item, Index) => {
                return <div  >
                    <MultiActionAreaCard   totaldata={item}></MultiActionAreaCard>
                </div>
            }
    )
    console.log(result_Array)
    return (
        <div>


            <Accordion>
                <AccordionSummary
                    expandIcon={<ExpandMoreIcon />}
                    aria-controls="panel2a-content"
                    id="panel2a-header"
                >
                    <Typography>Dresses</Typography>
                </AccordionSummary>
                <AccordionDetails>
                    <Typography  > 
                         {result_Array}
                    </Typography>
                </AccordionDetails>
            </Accordion>

            <Accordion>
                <AccordionSummary
                    expandIcon={<ExpandMoreIcon />}
                    aria-controls="panel2a-content"
                    id="panel2a-header"
                >
                    <Typography>Shoes</Typography>
                </AccordionSummary>
                <AccordionDetails>
                    <Typography>
                    {result_Array2}
                    </Typography>
                </AccordionDetails>
            </Accordion>{" "}

            <Accordion>
                <AccordionSummary
                    expandIcon={<ExpandMoreIcon />}
                    aria-controls="panel2a-content"
                    id="panel2a-header"
                >
                    <Typography>pjamas</Typography>
                </AccordionSummary>
                <AccordionDetails>
                    <Typography>
                    {result_Array3}
                    </Typography>
                </AccordionDetails>
            </Accordion>{" "}

            <Accordion>
                <AccordionSummary
                    expandIcon={<ExpandMoreIcon />}
                    aria-controls="panel2a-content"
                    id="panel2a-header"
                >
                    <Typography>bags</Typography>
                </AccordionSummary>
                <AccordionDetails>
                    <Typography>
                  {  result_Array4}
                    </Typography>
                </AccordionDetails>
            </Accordion>{" "}
        </div>
    );
}
// }

export default Accordion_component ;