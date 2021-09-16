# Stepin_EmbeddedC_casestudy


| Build                                                                                                                                                                                                    | Cppcheck                                                                                                                                                                                                         | Codacy                                                                                                                                                                                                                                                                                                 |
|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|[![Compile-Linux](https://github.com/vinayaka-sm/Stepin_EmbeddedC_casestudy/actions/workflows/Compile.yml/badge.svg)](https://github.com/vinayaka-sm/Stepin_EmbeddedC_casestudy/actions/workflows/Compile.yml) | [![Cppcheck](https://github.com/vinayaka-sm/Stepin_EmbeddedC_casestudy/actions/workflows/Codequality.yml/badge.svg)](https://github.com/vinayaka-sm/Stepin_EmbeddedC_casestudy/actions/workflows/Codequality.yml)| [![Codacy Badge](https://app.codacy.com/project/badge/Grade/1fd3efcbf39547c68fae388675712727)](https://www.codacy.com/gh/vinayaka-sm/Stepin_EmbeddedC_casestudy/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=vinayaka-sm/Stepin_EmbeddedC_casestudy&amp;utm_campaign=Badge_Grade) |

![codequality](https://www.code-inspector.com/project/28812/score/svg)

![codegrade](https://www.code-inspector.com/project/28812/status/svg)

## Output

### Requirements not met

 Case1: When both the Seat Switch and HeaterSwitch turned off                  

![case1](https://user-images.githubusercontent.com/57322769/133645212-f78104c4-b9ea-4b8e-9624-91f78b65f22d.png) 

Case2: When Seat Switch is on and Heater Switch is OFF

![case2](https://user-images.githubusercontent.com/57322769/133645215-214dd3c0-8651-417a-a1f8-a2f83772e531.png)

Case 3: When Seat switch is OFF and Heater Switch is ON

![case3](https://user-images.githubusercontent.com/57322769/133652006-160f6547-dda1-49af-816e-1065d5fb4f5f.png)

Case4: When both the switches are ON

![case4](https://user-images.githubusercontent.com/57322769/133645220-76e9c3ea-f97c-446f-8529-a4bd68d911ea.png) 

### Both Switches ON

| Duty Cycle | Output                              | 
|------------|-------------------------------------|
| 20%        | ![20](https://user-images.githubusercontent.com/57322769/133645222-3ddde51a-e634-4c18-9dd8-ef50cb6a59e2.png) | 
| 40%        | ![40](https://user-images.githubusercontent.com/57322769/133645202-3eef8e2d-1bef-427d-b15e-d0aa27fa822f.png) | 
| 70%        | ![70](https://user-images.githubusercontent.com/57322769/133645206-9f92c0a2-edae-456c-bcdd-4f7597c6e4aa.png) | 
| 95%        |![90](https://user-images.githubusercontent.com/57322769/133645208-51a9b7a5-84e9-442b-99d6-79434a237a15.png) | 
