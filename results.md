Lottery Scheduler Test Results:

1. Project/Output Overview
- the primary objective of this project was to confirm that the lottery
scheduler allocates CPU time based upon the number of tickets thatg are 
assigned to the process.

In this case, Child A had 10 tickets, Child B had 20 tickets, and Child C
had 30 tickets.

2. Execution Results
- Running testlottery on xv6 got me the results below:
	Child with 20 tickets finished
	Child with 30 tickets finished
	Child with 10 tickets finished

3. Analysis
- Even though Child C with 30 tickets had the highest probability of being 
selected any given time with a 50% margin on the total, Child B with 20
tickets finished first, then Child C with 30 tickets finished next. This 
test was ran 3 more times to see differences and Child C with 30 tickets
remained selected first for all three while Child B and C were flip flopping 
spots between the two.
