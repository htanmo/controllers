#pragma once

class PIDController {
  public:
    PIDController(double Kp, double Ki, double Kd);
    void set(double Kp, double Ki, double Kd);
    double compute(double desired, double current_value);
    void reset();

  private:
    double _Kp, _Ki, _Kd;
    double _previous_error;
    double _integral;
};
