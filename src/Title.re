[% bs.raw {| require('../public/mystyle.css') |}];



let component = ReasonReact.statelessComponent("TodoApp");

let make = _children => {
  ...component,


      render: _self =>
        <div className="title">
          <div className="cContainer">
            <h1 className="letters">
              (ReasonReact.stringToElement("C"))
            </h1>
          </div>
          <div className="lContainer">
            <h1 className="letters">
              (ReasonReact.stringToElement("L"))
            </h1>
          </div>
          <div className="aContainer">
            <h1 className="letters">
              (ReasonReact.stringToElement("A"))
            </h1>
          </div>
          <div className="yContainer">
            <h1 className="letters">
              (ReasonReact.stringToElement("Y"))
            </h1>
          </div>
          <div className="tContainer">
            <h1 className="letters">
              (ReasonReact.stringToElement("T"))
            </h1>
          </div>
          <div className="oContainer">
            <h1 className="letters">
              (ReasonReact.stringToElement("O"))
            </h1>
          </div>
          <div className="nContainer">
            <h1 className="letters">
              (ReasonReact.stringToElement("N"))
            </h1>
          </div>
        </div> ,
};
