
#include "StateMachineProcesser.h"

#include "StateA.h"
#include "StateB.h"

namespace StateMachineProcesser {

// clang-format off
const std::array<StateMachineProcesser::StateMachineProcesser::stateFunc*, NUMBER_STATES>
    StateMachineProcesser::declaredStates{
    /*StateMachineProcesser::StateEnum::STATE_A*/   &StateA::execState,
    /*StateMachineProcesser::StateEnum::STATE_B*/   &StateB::execState
};

// clang-format on

void StateMachineProcesser::runStateMachine()
{
    stateFunc* exec = declaredStates[currentState];
    if (!endStateMachine && exec)
    {
        exec();
    }
}

void StateMachineProcesser::setNextState(StateEnum nextState) { currentState = nextState; }

void StateMachineProcesser::setEndStateMachine(bool value) { endStateMachine = value; }

bool StateMachineProcesser::getEndStateMachine() { return endStateMachine; }

}  // namespace StateMachineProcesser