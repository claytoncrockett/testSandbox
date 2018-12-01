
type state = {
  count: int,
  hover: bool,
};

type action =
  | Hover;

let component = ReasonReact.reducerComponent("EventTracking");

let make = _children => {
  ...component,

  initialState: () => { count: 0, hover: false },

    reducer: (action, state) =>
    switch (action) {
    | Hover => ReasonReact.Update({ ...state, hover: !state.hover })
    },

      render: self =>{
        let hoverString = "Hover State => " ++ string_of_bool(self.state.hover);


        <div className="statistics" onMouseEnter={_event => self.send(Hover)} onMouseLeave={_event => self.send(Hover)}>
          <p>
            (ReasonReact.stringToElement(hoverString))
          </p>
        </div> 
      },
};
