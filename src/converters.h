#ifndef CONVERTERS_H
#define CONVERTERS_H

// length conversions

double mi_to_ft(double miles);
double ft_to_mi(double feet);
double in_to_ft(double inches);
double ft_to_in(double feet);

double ft_to_m(double feet);
double m_to_ft(double meters);

double km_to_m(double kilometers);
double m_to_km(double meters);
double cm_to_m(double centimeters);
double m_to_cm(double meters);
double mm_to_m(double millimeters);
double m_to_mm(double meters);
double um_to_m(double micrometers);
double m_to_um(double meters);
double nm_to_m(double nanometers);
double m_to_nm(double meters);

// temperature conversions

double r_to_f(double rankine);
double f_to_r(double fahrenheit);

double f_to_c(double fahrenheit);
double c_to_f(double celsius);

double k_to_c(double kelvin);
double c_to_k(double celsius);

// area conversion

double mi2_to_ft2(double mile);
double ft2_to_mi2(double foot);
double yd2_to_ft2(double yard);
double ft2_to_yd2(double foot);
double acre_to_ft2(double acre);
double ft2_to_acre(double foot);

double ft2_to_m2(double foot);
double m2_to_ft2(double meter);

double km2_to_m2(double kilometer);
double m2_to_km2(double meter);
double cm2_to_m2(double centimeter);
double m2_to_cm2(double meter);

// mass conversion

double oz_to_lbf(double ounce);
double lbf_to_oz(double pound);

double lbf_to_kg(double pound);
double kg_to_lbf(double kilogram);

double g_to_kg(double gram);
double kg_to_g(double kilogram);
double mg_to_kg(double milligram);
double kg_to_mg(double kilogram);

// time conversions

double min_to_s(double minute);
double s_to_min(double second);
double hr_to_s(double hour);
double s_to_hr(double second);
double day_to_s(double day);
double s_to_day(double second);
double week_to_s(double week);
double s_to_week(double second);

#endif