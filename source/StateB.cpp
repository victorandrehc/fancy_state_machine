/*
 * Zühlke Engineering (Austria) GmbH
 * Handelskai 92, A-1200 Vienna
 *
 */

#include "StateB.h"

#include "StateMachineProcesser.h"
#include "iostream"

void StateB::execState()
{
    std::cout << "state B" << std::endl;
    if (data == 0)
    {
        data++;
        StateMachineProcesser::StateMachineProcesser::setNextState(StateMachineProcesser::StateEnum::STATE_A);
        return;
    }
    StateMachineProcesser::StateMachineProcesser::setEndStateMachine(true);
}
