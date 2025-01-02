#include "PIController.hpp"

PIController::PIController(double Kp, double Ki) : _Kp(Kp), _Ki(Ki), _previous_error(0.0), _integral(0.0) {}

void PIController::set(double Kp, double Ki) {
    _Kp = Kp;
    _Ki = Ki;
}

double PIController::compute(double desired, double current_value) {
    double error = desired - current_value;
    _integral += error;
    double output = (_Kp * error) + (_Ki * _integral);
    _previous_error = error;
    return output;
}

void PIController::reset() {
    _previous_error = 0.0;
    _integral = 0.0;
}

