# apollo
In my exploration of the finance world and taming of my own personal finances, I've struggled to find the necessary data and a free tool capable of helping me analyse that data satisfactorally. So, I've decided to develop my own to automate a lot of the calculations. Additionally, I thought it would be good if this tool was capable of providing insights into the performance of my own portfolio as a whole to analyse the effect of market diversification. 

Below is a preliminary feature list, which will be revised as I find information that may be helpful in forming my own opinions. My plan is to develop this incrementally, getting basic charting functionality working first and refining from there. Feedback and suggestions are welcome.

apollo is being developed in Qt 5.11.1

## v1.0 Features
- Chart and compare historical data of selected stocks
- Compare stock trends against common indices
- Compose portfolio
- Calculate/Compare portfolio performance/position
- Break down portfolio into constitutent stocks
- Trend analysis tools (Simple/Exponential Moving Average)
- Graph Query and Refinement
	- Display individual data point values
	- Zoom in/out to relevant period
	- Specify time period for analysis
- Add to database
- Import database


## Planned features
- Compound interest calculator with variable inputs
	- Deposit frequency calculator for desired position
- NPV Adjustments to series data
	- Real growth calculations
- Annualised return calculations
- CGT discount calculations
- Portfolio allocation specification
	- Rebalance notifications
	- Theoretical performance
- API functionality
	- Automatic data fetching
		- Price data
		- NAV, Dividend Payment Schedule etc
- Different charting options
- Stock performance information for selected trend line
	- Standard deviation
	- Sharpe's ratio
	- etc
