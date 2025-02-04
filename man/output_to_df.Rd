% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/helpers.R
\name{output_to_df}
\alias{output_to_df}
\title{Return ODE model output as a data.table}
\usage{
output_to_df(output, model_arguments, compartments)
}
\arguments{
\item{output}{The model output, which must be a two element list (for
epidemic) models, with the names "x" and "time", where "x" represents the
condition of each compartment at each timestep in "time".}

\item{model_arguments}{A list containing the model arguments passed to
\code{\link[=epidemic]{epidemic()}}. This is scanned for information on the population passed to
the model, which must be a \code{population} object; see \code{\link[=population]{population()}}.
The \code{population} object is used to generate the names of the demographic
groups, if these are named.}

\item{compartments}{A vector for the model compartment names.}
}
\value{
A \code{data.table} with the columns "compartment", "demography_group",
"value", and "time"; these specify the epidemiological compartment, the
name of the demography group, the number of individuals of that group in the
compartment, and the model timestep, respectively.
Names for the demographic groups are generated if no names are provided in
the \code{population} object; these are of the form "demo_group_X".
}
\description{
Return ODE model output as a data.table
}
\keyword{internal}
