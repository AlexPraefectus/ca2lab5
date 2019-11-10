# Compute Architecture course lab5 [![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)

### Author: Oleksandr Korienev, IV-7210

## Possible options

| Long name | short name  | argument requirements |
| ----------|-------------|-----------------------|
| --add     | -a          | no argument           |
| --delete  | -d          | no argument           |
| --verbose | -v          | no argument           |
| --create  | -c          | required_argument     |
| --file    | -f          | required argument     |

## Make targets

| Target                     |  Description                        |
|----------------------------|-------------------------------------|
| compile                    | compiles project into executable    |
|                            | located in `build` directory        |
| run                        | run program without any arguments   |
| clean                      | clean `build` directory             |
| run_only_long_no_repeats   | all options are passed in `--opt`   |
|                            | form, no options are repeated       |
| run_only_short_no_repeats  | all options are passed in `-opt`    |
|                            | form, no options are repeated       |
| run_mixed_w_repeats        | options are passed in both forms    |
|                            | some options are repeated           |