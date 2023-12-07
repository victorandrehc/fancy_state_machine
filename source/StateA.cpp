/*
 * Zühlke Engineering (Austria) GmbH
 * Handelskai 92, A-1200 Vienna
 *
 */

#include "StateA.h"

#include "StateMachineProcesser.h"
#include "iostream"

void StateA::execState()
{
    std::cout << "state A" << std::endl;
    StateMachineProcesser::StateMachineProcesser::setNextState(StateMachineProcesser::StateEnum::STATE_B);
}
