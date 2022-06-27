import axios from "axios";
import { useState }from 'react';
 const Reg = () =>{
    const [ userName,setUserName]=useState('');
    const [password,setPassword]=useState('');

    const login =async () => {
        const api_url='https://fci-back-end.herokuapp.com/api/#/default/register';

        try {
const response =await axios.post(api_url,{
    userName,
    password,
});
const { data }=response;
console.log(data);
        }catch(error){
            console.log('wrong credentials ');
        }
        };
    const onUsernamechanged =(event) => {
        setUserName(event.target.value);
    };
const onPasswordChanged =(event) =>{
    satpassword()
}};
