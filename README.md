# fancy State Machine

fancy State Machine is a lightwieght C++ based state machine pattern that uses function pointers to process states.
With this pattern is easy to add or remove states avoiding switch cases and spaghetti code. Evey state has also its own
class and scope.

## How to use it

1. Create a class with a function with the following signature as `static void execState()` a public method for every
   state
2. on `StateMachineProcesser.cpp` add the exec on the `StateMachineProcesser::declaredStates` array, like
   ```c++
   const std::array<StateMachineProcesser::StateMachineProcesser::stateFunc*, NUMBER_STATES>
    StateMachineProcesser::declaredStates{
    /*StateMachineProcesser::StateEnum::STATE_A*/   &StateA::execState,
    /*StateMachineProcesser::StateEnum::STATE_B*/   &StateB::execState
   };
   ```
