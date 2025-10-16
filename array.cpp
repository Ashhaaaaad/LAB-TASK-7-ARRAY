#include <stdio.h>

int main(){
    int pass_marks[10], fail_marks[10];
    int passcount = 0, failcount = 0;
    int marks, n = 10;
    int pass_sum = 0, fail_sum = 0;
    float passavg = 0, failavg = 0;

    printf("--- Quiz Mark Entry for Section BAI-1B (Max %d Students) ---\n", n);
    printf("--- Entry should be between [0-10] and 5 marks to pass ---\n");
    
    for(int studentered = 0; studentered < n; studentered++){
        printf("Enter marks for student #%d: ", studentered + 1);
        scanf("%d", &marks);
        
        if(marks == -1){
            printf("Program break!\n");
            break;
        }
        else if(marks >= 5 && marks <= 10){
            pass_marks[passcount++] = marks;
            pass_sum += marks;
        }
        else if(marks >= 0 && marks < 5){
            fail_marks[failcount++] = marks;
            fail_sum += marks;
        }
        else{
            printf("Incorrect input! Output ignored!\n");
            studentered--;
        }
    }

    printf("\n--- RESULT COLLECTION DONE ---\n");
    printf("Total number of marks entered: %d\n", passcount + failcount);

    printf("\nPassing students marks:\n");
    for(int j = 0; j < passcount; j++){
        printf("Student #%d: %d\n", j+1, pass_marks[j]);
    }
    printf("Total number of students passed: %d\n", passcount);
    passavg = (passcount > 0) ? ((float)pass_sum / passcount) : 0;
    printf("Pass average is: %.2f\n", passavg);

    printf("\nFailing students marks:\n");
    for(int j = 0; j < failcount; j++){
        printf("Student #%d: %d\n", j+1, fail_marks[j]);
    }
    printf("Total number of students failed: %d\n", failcount);
    failavg = (failcount > 0) ? ((float)fail_sum / failcount) : 0;
    printf("Fail average is: %.2f\n", failavg);

    return 0;
}

