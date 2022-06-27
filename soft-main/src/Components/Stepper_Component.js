import {
    Stepper,
    Step,
    StepLabel,
  } from "@mui/material";
const Stepper_Component = () => {
    const steps = ["services", "date", "finalizing"];

    return (
        <Stepper activeStep={1} alternativeLabel className="mt">
            {steps.map((label) => (
                <Step key={label}>
                    <StepLabel>{label}</StepLabel>
                </Step>
            ))}
        </Stepper>);
}

export default Stepper_Component;