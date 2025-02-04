# Basic tests for the infection class
pandemic_flu <- infection(
  name = "pandemic_influenza",
  r0 = 1.3, infectious_period = 5,
  preinfectious_period = 3
)

test_that("Initialisation of the infection class", {
  expect_s3_class(
    pandemic_flu, "infection"
  )
  expect_named(
    pandemic_flu,
    c("name", "r0", "infectious_period", "preinfectious_period")
  )
  expect_type(
    pandemic_flu$name, "character"
  )
  expect_type(
    pandemic_flu$r0, "double"
  )
  expect_type(
    pandemic_flu$infectious_period, "double"
  )
  expect_length(
    pandemic_flu$infectious_period, 1L
  )
  expect_length(
    pandemic_flu$preinfectious_period,
    length(pandemic_flu$preinfectious_period)
  )
  expect_snapshot(
    print(pandemic_flu)
  )
})

test_that("Errors in infection initialisation", {
  expect_error(
    infection(r0 = 1.3, infectious_period = 5, preinfectious_period = c(3, 4)),
    regex = "Error: All infection parameters must be the same length!"
  )
})
