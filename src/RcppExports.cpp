// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/epidemics.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// epidemic_default_cpp
Rcpp::List epidemic_default_cpp(const Rcpp::List& population, const double& beta, const double& alpha, const double& gamma, const Rcpp::List& intervention, const Rcpp::List& vaccination, const double& time_end, const double& increment);
RcppExport SEXP _epidemics_epidemic_default_cpp(SEXP populationSEXP, SEXP betaSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP interventionSEXP, SEXP vaccinationSEXP, SEXP time_endSEXP, SEXP incrementSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type population(populationSEXP);
    Rcpp::traits::input_parameter< const double& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const double& >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type intervention(interventionSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type vaccination(vaccinationSEXP);
    Rcpp::traits::input_parameter< const double& >::type time_end(time_endSEXP);
    Rcpp::traits::input_parameter< const double& >::type increment(incrementSEXP);
    rcpp_result_gen = Rcpp::wrap(epidemic_default_cpp(population, beta, alpha, gamma, intervention, vaccination, time_end, increment));
    return rcpp_result_gen;
END_RCPP
}
// epidemic_vacamole_cpp
Rcpp::List epidemic_vacamole_cpp(const Rcpp::List& population, const double& beta, const double& beta_v, const double& alpha, const double& omega, const double& omega_v, const double& eta, const double& eta_v, const double& gamma, const Rcpp::List& intervention, const Rcpp::List& vaccination, const double& time_end, const double& increment);
RcppExport SEXP _epidemics_epidemic_vacamole_cpp(SEXP populationSEXP, SEXP betaSEXP, SEXP beta_vSEXP, SEXP alphaSEXP, SEXP omegaSEXP, SEXP omega_vSEXP, SEXP etaSEXP, SEXP eta_vSEXP, SEXP gammaSEXP, SEXP interventionSEXP, SEXP vaccinationSEXP, SEXP time_endSEXP, SEXP incrementSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type population(populationSEXP);
    Rcpp::traits::input_parameter< const double& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const double& >::type beta_v(beta_vSEXP);
    Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const double& >::type omega(omegaSEXP);
    Rcpp::traits::input_parameter< const double& >::type omega_v(omega_vSEXP);
    Rcpp::traits::input_parameter< const double& >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< const double& >::type eta_v(eta_vSEXP);
    Rcpp::traits::input_parameter< const double& >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type intervention(interventionSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type vaccination(vaccinationSEXP);
    Rcpp::traits::input_parameter< const double& >::type time_end(time_endSEXP);
    Rcpp::traits::input_parameter< const double& >::type increment(incrementSEXP);
    rcpp_result_gen = Rcpp::wrap(epidemic_vacamole_cpp(population, beta, beta_v, alpha, omega, omega_v, eta, eta_v, gamma, intervention, vaccination, time_end, increment));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_epidemics_epidemic_default_cpp", (DL_FUNC) &_epidemics_epidemic_default_cpp, 8},
    {"_epidemics_epidemic_vacamole_cpp", (DL_FUNC) &_epidemics_epidemic_vacamole_cpp, 13},
    {NULL, NULL, 0}
};

RcppExport void R_init_epidemics(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
