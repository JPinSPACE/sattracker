#ifndef SATTRACKER_
#define SATTRACKER_

// Stores raw output from two-line element
typedef struct {
	// Line 1
	uint32_t sat_num;
	char     classification;
	uint16_t launch_year;
	uint16_t launch_num;
	char     launch_piece;
	uint16_t epoch_year;
	float    epoch_day;
	float    first_time_derivative;
	float    second_time_derivative;
	float    bstar_drag_term;
	// Omit 0 (Ephemeris type)
	uint16_t elmt_set_number;
	uint8_t  checksum;

	// Line 2
	float    inclination;
	float    ascending_node;
	float    eccentricity;
	float    arg_of_perigee;
	float    mean_anomaly;
	float    mean_motion;
	uint32_t rev_num_at_epoch;
	// Omit second checksum
} TwoLineElmt;



#endif // SATTRACKER_
