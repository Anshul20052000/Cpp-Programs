#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    cout<<"Round Robin[RR] CPU Scheduling Algorithm "<<endl<<endl;
    string process_name[10];
    int burst[10],temp_Burst[10];
    int n,time_quantum;
    float total_estimated_time = 0,total_Burst_Time = 0;
    cout<<"Enter the Number of Processes : ";
    cin>>n;
    cout<<"Enter the Time Quantum for Round Robin Scheduling : ";
    cin>>time_quantum;
    cout<<"Enter the Process Name and Burst Time of the Processes : \n"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Process "<<i+1<<endl;
        cout<<" Enter Process Name : ";
        cin>>process_name[i];
        cout<<" Enter Burst Time : ";
        cin>>burst[i];
        total_Burst_Time += burst[i];
        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        temp_Burst[i] = burst[i];
    }

    while(total_Burst_Time != total_estimated_time)
    {
        for(int i=0;i<n;i++)
        {
            if(temp_Burst[i] > 0 && temp_Burst[i] >= time_quantum)
            {
                temp_Burst[i] -=time_quantum;
                cout<<process_name[i]<<" <- "<<time_quantum<<" TQ , Burst Time Left : "<<temp_Burst[i]<<endl;
                total_estimated_time += time_quantum;
                if(temp_Burst[i] == 0)
                {
                    cout<<process_name[i]<<" Completed its Execution..."<<endl;
                }
            }
            else
            {
                if(temp_Burst[i] != 0)
                {
                    cout<<process_name[i]<<" <- "<<temp_Burst[i]<<" TQ , Burst Time Left : 0"<<endl;
                    cout<<process_name[i]<<" Completed its Execution..."<<endl;
                    total_estimated_time += temp_Burst[i];
                    temp_Burst[i] = 0;
                }
            }
        }
        cout<<endl;
    }

    cout<<"Total Estimated Time : "<<total_estimated_time<<endl;
    return 0;
}
