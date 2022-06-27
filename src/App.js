import Posts from './Components/Posts';
import Users from './Components/Users';
import Api from './Components/Users';
import Navigation from './Components/Navigation';
import ProtectedRoute from './Components/ProtectedRoute';
import { BrowserRouter, Route, Routes } from 'react-router-dom';
import Index from './Components/Index';
import App2 from "./Components/App2";
import Login from './Components/Login.js';
import useToken from './Components/UseToken';

import "./index.css";

import "./CSS/bootstrap_original.css";
import {
  Button,
  createTheme,
  Paper,
} from "@mui/material";
import { ThemeProvider } from "@emotion/react";
import * as React from "react";
import { styled } from "@mui/material/styles";
import Appbar_component from "./Components/AppBar_Component";
import Accordion_component from "./Components/Accordion_Component";
import Stepper_Component from "./Components/Stepper_Component";


const theme = createTheme({
  palette: {
    type: "dark",
    primary: {
      main: "#03a9f4",
      light: "#00838f",
      dark: "#0d47a1",
    },
    secondary: {
      main: "#76ff03",
    },
    background: {
      default: "#232121",
    },
  },
});

function App() {

  const Item = styled(Paper)(({ theme }) => ({
    backgroundColor: theme.palette.mode === "dark" ? "#1A2027" : "#fff",
    ...theme.typography.body2,
    padding: theme.spacing(1),
    textAlign: "center",
    color: theme.palette.text.secondary,
  }));
  const { token, setToken } = useToken();

  if (!token) {
    return <Login setToken={setToken} />
  }
  else {























    return (
    
    




      /*<div>
      <Navigation />
      
      <Routes>
      <Route path="/" element={<Index />} />
        

        <Route element={<ProtectedRoute />}>
        <Route path="/users" element={<Users />} />
        <Route path="/posts" element={ <Posts />} />

        </Route>
      </Routes>
      </div>*/
















    <div>
           {/* <Text  />
    <Button_></Button_> */}
        <Navigation />

        <Routes>
          <Route path="/" element={<Index />} />


          <Route element={<ProtectedRoute />}>
            <Route path="/users" element={<Users />} />
            <Route path="/posts" element={<Posts />} />

          </Route>
        </Routes>





        <div>
          <ThemeProvider theme={theme}>
            <div>
              <Appbar_component></Appbar_component>
            </div>
          </ThemeProvider>
        </div>
        <Stepper_Component></Stepper_Component>
        <Accordion_component></Accordion_component>

        <App2></App2>



      </div>
    
   
  );
  };
};

export default App;
