#pragma once

class PDController {
  public:
    PDController(double Kp, double Kd);
    void set(double Kp, double Kd);
    double compute(double desired, double current_value);
    void reset();

  private:
    double _Kp, _Kd;
    double _previous_error;
};

