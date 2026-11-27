def fcfs(processes, bursts, arrivals=None):
  bursts_time = []
  wait_time = []
  turn_time = []



  return bursts_time, wait_time, turn_time

#process id
processes = [1, 2, 3, 4, 5, 6]
#Burst time of all processes
burst_time = [5, 9, 6, 15, 6, 3]
#Arrival time of all processes
arrival_time = [0, 3, 6, 7, 8, 10]

p = processes.copy()
n = len(processes)

b,w,t = fcfs(processes, bursts_time, arrival_time)
print("process ID         : ", p)
print("Burst_시간         : ", b)
print("Waiting_시간       : ", w)
print("Turn_Around_시간   : ", t)
print("평균 waiting 시간  : ", sum(w)/n)
print("평균 turn around 시간  : ", sum(t)/n)
