#include "PIDController.hpp"

PIDController::PIDController(double Kp, double Ki, double Kd)
    : _Kp(Kp), _Ki(Ki), _Kd(Kd), _previous_error(0), _integral(0) {}

double PIDController::compute(double desired, double current_value) {
    double error = desired - current_value;
    double derivative = error - _previous_error;
    _integral += error;
    double output = _Kp * error + _Ki * _integral + _Kd * derivative;
    _previous_error = error;
    return output;
}

void PIDController::set(double Kp, double Ki, double Kd) {
    _Kp = Kp;
    _Ki = Ki;
    _Kd = Kd;
}

void PIDController::reset() {
    _previous_error = 0;
    _integral = 0;
}

