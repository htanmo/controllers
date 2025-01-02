#include "PDController.hpp"

PDController::PDController(double Kp, double Kd) : _Kp(Kp), _Kd(Kd), _previous_error(0.0) {}

void PDController::set(double Kp, double Kd) {
    _Kp = Kp;
    _Kd = Kd;
}

double PDController::compute(double desired, double current_value) {
    double error = desired - current_value;
    double derivative = error - _previous_error;
    double output = (_Kp * error) + (_Kd * derivative);
    _previous_error = error;
    return output;
}

void PDController::reset() {
    _previous_error = 0.0;
}

