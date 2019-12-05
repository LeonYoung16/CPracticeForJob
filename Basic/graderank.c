#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n=0;
    scanf("%d", &n);
    char **name;
    char **SID;
    int *grade;
    name = (char**)malloc(sizeof(char*)*n);
    for(int i=0; i<n; i++)
    {
        name[i] = (char*)malloc(sizeof(char)*11);
    }

    SID = (char**)malloc(sizeof(char*)*n);
    for(int i=0; i<n; i++)
    {
        SID[i] = (char*)malloc(sizeof(char)*11);
    }

    grade = (int*)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++)
    {
        scanf("%s %s %d", name[i], SID[i], &grade[i]);
    }

    int maxgrade = grade[0], mingrade = grade[0];
    char *maxname, *minname;
    maxname = name[0];
    minname = name[0];
    char *maxSID, *minSID;
    maxSID = SID[0];
    minSID = SID[0];

    for(int i=1; i<n; i++)
    {  
        if(grade[i] > maxgrade)
        {
            maxname = name[i];
            maxSID = SID[i];
            maxgrade = grade[i];
        }
        if(grade[i] < mingrade)
        {
            minname = name[i];
            minSID = SID[i];
            mingrade = grade[i];
        }
    }

    
    printf("%s %s\n", maxname, maxSID);
    printf("%s %s", minname, minSID);

    return 0;

}