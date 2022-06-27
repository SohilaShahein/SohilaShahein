import Card from "./Card";
import "./CSS/bootstrap_original.css";


const Container = () => {
    return (<div>
        <div class="container">

            <div class="row">
                <div class="col-lg-3 col-md-6 col-sm-12">
                    <Card></Card>
                </div>
                <div class="col-lg-3 col-md-6 col-sm-12">
                    <Card></Card>
                </div>    <div class="col-lg-3 col-md-6 col-sm-12">
                    <Card></Card>
                </div>    <div class="col-lg-3 col-md-6 col-sm-12">
                    <Card></Card>
                </div>
            </div>

            <div class="row">
                <div class="col-lg-3 col-md-6 col-sm-12">
                    <Card></Card>
                </div>
                <div class="col-lg-3 col-md-6 col-sm-12">
                    <Card></Card>

                </div>
                <div class="col-lg-3 col-md-6 col-sm-12">
                    <Card></Card>
                </div>    <div class="col-lg-3 col-md-6 col-sm-12">
                    <Card></Card>
                </div>
            </div>

            <div class="row">
                <div class="col-lg-3 col-md-6  col-sm-12 ">

                    <Card></Card>

                </div>
                <div class="col-lg-3 col-md-6 col-sm-12">
                    <Card></Card>
                </div>
                <div class="col-lg-3 col-md-6 col-sm-12">
                    <Card></Card>
                </div>    <div class="col-lg-3 col-md-6 col-sm-12">
                    <Card></Card>
                </div>
            </div>

        </div>
    </div>);
}

export default Container;
