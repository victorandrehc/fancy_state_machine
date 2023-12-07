
#include "StateMachineProcesser.h"

int main()
{
    while (!StateMachineProcesser::StateMachineProcesser::getEndStateMachine())
    {
        StateMachineProcesser::StateMachineProcesser::runStateMachine();
    }
    return 0;
}
