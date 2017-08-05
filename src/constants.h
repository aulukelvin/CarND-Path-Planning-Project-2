#ifndef CONSTANTS
#define CONSTANTS

#define VEHICLE_RADIUS 1.5              // meters

#define PREVIOUS_PATH_POINTS_TO_KEEP 10

#define TRACK_LENGTH 6945.554           // meters

#define N_SAMPLES = 50
#define DT = 0.2                        // seconds

#define SIGMA_S = {10.0, 4.0, 2.0}      // s, s_dot, s_double_dot
#define SIGMA_D = {1.0, 1.0, 1.0}
#define SIGMA_T = 2.0

#define MAX_INSTANTANEOUS_JERK = 10     // m/s/s/s
#define MAX_INSTANTANEOUS_ACCEL= 10     // m/s/s

#define EXPECTED_JERK_IN_ONE_SEC = 2    // m/s/s
#define EXPECTED_ACC_IN_ONE_SEC = 1     // m/s

#define SPEED_LIMIT = 22                // m/s

// cost function weights

#define TIME_DIFF_COST_WEIGHT 10
#define TRAJ_DIFF_COST_WEIGHT 10
#define COLLISION_COST_WEIGHT 9999
#define BUFFER_COST_WEIGHT 10
#define SPEED_LIMIT_COST_WEIGHT 1000
#define EFFICIENCY_COST_WEIGHT 100
#define MAX_ACCEL_COST_WEIGHT 1000
#define AVG_ACCEL_COST_WEIGHT 100
#define MAX_JERK_COST_WEIGHT 1000
#define AVG_JERK_COST_WEIGHT 100

#endif