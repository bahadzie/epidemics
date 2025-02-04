% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/input_check_helpers.R
\name{assert_intervention}
\alias{assert_intervention}
\title{Assert properties of a \code{intervention} object}
\usage{
assert_intervention(x, population)
}
\arguments{
\item{x}{A \link{intervention} object.}

\item{population}{An optional argument which is a \link{population} object.
When present, this is used to check whether the intervention object \code{x} has
corresponding values of \code{contact_reduction} for each demographic group in
\code{population}.}
}
\value{
Silently returns the \code{intervention} object \code{x}.
Primarily called for its side effects of throwing errors when \code{x} does not
meet certain requirements.
}
\description{
Assert that objects of the \code{intervention} class have the properties expected
by an epidemic model. See \code{\link[=intervention]{intervention()}} and \code{\link[=epidemic]{epidemic()}}, as well as model
details to check the intervention properties required by each model. This
function is for internal use in argument checking functions.
}
\keyword{internal}
