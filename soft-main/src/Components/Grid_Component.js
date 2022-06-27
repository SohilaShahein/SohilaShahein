import {
    Grid,
} from "@mui/material";

import Card from './Card';
import * as React from "react";



const Grid_Component = () => {
    return (
        <React.Fragment>
            {/* <div className="container"></div> */}
            <Grid item xs={4} className="Grid grid1">
                <Card></Card>
            </Grid>
            <Grid item xs={4} className='Grid grid2'>
                <Card></Card>
            </Grid>
            <Grid item xs={4} className='Grid grid3'>
                <Card></Card>
            </Grid>
        </React.Fragment>);
}

export default Grid_Component;