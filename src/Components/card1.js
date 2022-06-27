import * as React from 'react';
import Card from '@mui/material/Card';
import CardContent from '@mui/material/CardContent';
import CardMedia from '@mui/material/CardMedia';
import Typography from '@mui/material/Typography';
import { Button, CardActionArea, CardActions } from '@mui/material';

export default function MultiActionAreaCard(props) {
  return (
    <Card sx={{ maxWidth: 345 }}>
      
      
      
      
     
      <CardActionArea>
        <CardMedia
          component="img"
          height="350"
          image={props.totaldata?.img}
          
        />
        <CardContent>
          <Typography gutterBottom variant="h5" component="div">
            {props.totaldata?.name}
          </Typography>
          <Typography variant="body2" color="text.secondary">
          {props.totaldata?.price}
          </Typography>
        </CardContent>
      </CardActionArea>
      <CardActions>
        <Button size="small" color="primary">
          Add to Cart 
        </Button>
      </CardActions>
    </Card>
  );
}
