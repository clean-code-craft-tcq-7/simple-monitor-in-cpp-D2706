int vitalsOk(float temperature, float pulseRate, float spo2) {
return vital_temp(temperature) && vital_pulse(pulseRate) && vital_Spo2(spo2);
}
 
int vital_temp(float temperature) {
  if (temperature > 102 || temperature < 95) {
    cout << "Temperature is critical!\n";
    delay();
      return 0;
    }
    return 1;
  }
  int vital_pulse(float pulseRate) {
  if (pulseRate < 60 || pulseRate > 100) {
    cout << "Pulse Rate is out of range!\n";
    delay();
    return 0;
    }
    return 1;
  }
  int vital_Spo2(float spo2) {
    if (spo2 < 90) {
    cout << "Oxygen Saturation out of range!\n";
    delay();
    return 0;
    }
  return 1;
  }
void wait_time() {
for (int i = 0; i < 6; i++) {
      cout << "\r* " << flush;
      sleep_for(seconds(1));
      cout << "\r *" << flush;
      sleep_for(seconds(1));
    }
}
