#pragma once
#include <array>
#include <cstdint>

namespace StateMachineProcesser {

enum StateEnum : size_t
{
    STATE_A = 0,
    STATE_B = 1
};

constexpr size_t NUMBER_STATES = 2;

class StateMachineProcesser
{
public:
    using stateFunc = void();
    static void runStateMachine();
    static void setNextState(StateEnum nextState);
    static void setEndStateMachine(bool value = true);
    static bool getEndStateMachine();

private:
    static inline bool endStateMachine = false;
    static inline StateEnum currentState = StateEnum::STATE_A;

    static const std::array<stateFunc*, NUMBER_STATES> declaredStates;
};

}  // namespace StateMachineProcesser
