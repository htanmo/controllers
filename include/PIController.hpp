#pragma once

class PIController {
  public:
    PIController(double Kp, double Ki);
    void set(double Kp, double Ki);
    double compute(double desired, double current_value);
    void reset();

  private:
    double _Kp, _Ki;
    double _previous_error;
    double _integral;
};

