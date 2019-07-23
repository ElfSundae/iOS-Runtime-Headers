/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface ChartUpdater : YQLRequest {
    StockChartData * _currentChartData;
    <ChartUpdaterDelegate> * _delegate;
    int  _interval;
    Stock * _stock;
    id /* block */  _updateCompletionHandler;
}

@property (nonatomic) <ChartUpdaterDelegate> *delegate;
@property (readonly) int interval;

+ (id)_rangeStringForInterval:(int)arg1;

- (void).cxx_destruct;
- (id)aggregateDictionaryDomain;
- (void)cancel;
- (id)dataSeries;
- (id)delegate;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (int)interval;
- (void)parseData:(id)arg1;
- (void)parseDataSeriesDictionary:(id)arg1;
- (void)parseDataSeriesDictionary:(id)arg1 interval:(int)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)updateChartForStock:(id)arg1 interval:(int)arg2;
- (BOOL)updateChartForStock:(id)arg1 interval:(int)arg2 withCompletion:(id /* block */)arg3;

@end
