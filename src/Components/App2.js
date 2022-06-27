// import * as React from 'react';
// import TextField from '@mui/material/TextField';
// import { AdapterDateFns } from '@mui/x-date-pickers/AdapterDateFns';
// import { LocalizationProvider } from '@mui/x-date-pickers/LocalizationProvider';
// import { DatePicker } from '@mui/x-date-pickers/DatePicker';

// const App2 = () => {
//     const [value, setValue] = React.useState (new Date());

//     return (
//         <LocalizationProvider dateAdapter={AdapterDateFns}>
//             <DatePicker
//                 label="Basic example"
//                 value={value}
//                 onChange={(newValue) => {
//                     setValue(newValue);
//                 }}
//             />
//         </LocalizationProvider>
//     );
// }

// export default App2;


import { TextField } from '@mui/material';
import { AdapterDateFns } from '@mui/x-date-pickers/AdapterDateFns';
import { LocalizationProvider } from '@mui/x-date-pickers/LocalizationProvider';
import { StaticDatePicker } from '@mui/x-date-pickers/StaticDatePicker';
import { format, formatDistance, isBefore, isWeekend } from 'date-fns';


const App2 = () => {
  const today = new Date();

  const onDateChanged = (date) => {

    const isB = isBefore(date, today);
    console.log(isB);
  };
  //const distance = formatDistance (date, today);
  //console.log(distance);

  const isDateInvalid = (date) => {
    return isBefore(date, today);
  };

  return (
    <div>
      <LocalizationProvider dateAdapter={AdapterDateFns}>
        <StaticDatePicker
          orientation="landscape"
          openTo="day"
          value={today}
          
          onChange={onDateChanged}

          renderInput={(params) => <TextField {...params} />}
        />
      </LocalizationProvider>
    </div>
  );
};

export default App2;
