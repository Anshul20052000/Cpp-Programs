#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    cout<<"First Come First Serve[FCFS] CPU Scheduling Algorithm "<<endl<<endl;
    string process_name[10];
    int arrival[10],burst[10],waiting[10],turnaround[10],start[10],completion[10];
    int n;
    float total_waiting_time = 0, total_turnaround_time = 0;
    cout<<"Enter the Number of Processes : ";
    cin>>n;
    cout<<"Enter the Process Name, Arrival Time and Burst Time of the Processes : \n"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Process "<<i+1<<endl;
        cout<<" Enter Process Name : ";
        cin>>process_name[i];
        cout<<" Enter Arrival Time : ";
        cin>>arrival[i];
        cout<<" Enter Burst Time : ";
        cin>>burst[i];
        cout<<endl;
    }

    cout<<"Order of Processes what you have Entered : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<process_name[i]<<" > ";
    }
    cout<<"!!!"<<endl<<endl;
    //Arranging Processes in its Ascending Order...
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arrival[j]<arrival[i])
            {
                int temp;
                temp = arrival[i];
                arrival[i] = arrival[j];
                arrival[j] = temp;

                temp = burst[i];
                burst[i] = burst[j];
                burst[j] = temp;

                string tempc;
                tempc = process_name[i];
                process_name[i] = process_name[j];
                process_name[j] = tempc;
            }
        }
    }
    cout<<"Order of Processes in Ascending Order : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<process_name[i]<<" > ";
    }
    cout<<"!!!"<<endl<<endl;

    //Calculation of waiting, Turnaround, Completion and Start Time of the Processes.
    for(int i=0;i<n;i++)
    {
        if(i==0 || arrival[i]>completion[i-1])
        {
            start[i] = arrival[i];
        }
        else
        {
            start[i] = completion[i-1];
        }
        completion[i] = start[i] + burst[i];
        turnaround[i] = completion[i] - arrival[i];
        waiting[i] = turnaround[i] - burst[i];
    }

    //Display of the Calculated Entities
    cout<<"  Process Name   | Arrival Time  |  Burst Time   |   Start Time  |  Completion   |  Turnaround   | Waiting Time  |"<<endl;
    cout<<"                 |               |               |               |               |               |               |"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<".   "<<process_name[i]<<"\t |   "<<arrival[i]<<"\t\t |   "<<burst[i]<<"\t\t |   "<<start[i]<<"\t\t |   "<<completion[i]<<"\t\t |   "<<turnaround[i]<<"\t\t |   "<<waiting[i]<<"\t\t |"<<endl;
        total_turnaround_time += turnaround[i];
        total_waiting_time += waiting[i];
    }
    cout<<"Average Turnaround Time : "<<(total_turnaround_time/n)<<endl;
    cout<<"Average Waiting Time : "<<(total_waiting_time/n)<<endl;
    return 0;
}
