
type state = {
  count: int,
  hover: bool,
};

type action =
  | Hover;

let component = ReasonReact.reducerComponent("TodoApp");

let make = _children => {
  ...component,

  initialState: () => { count: 0, hover: false },

    reducer: (action, state) =>
    switch (action) {
    | Hover => ReasonReact.Update({ ...state, hover: !state.hover })
    },

      render: _self =>
        <div className="app">
         <Title />
         <EventTracking />
        </div> ,
};
