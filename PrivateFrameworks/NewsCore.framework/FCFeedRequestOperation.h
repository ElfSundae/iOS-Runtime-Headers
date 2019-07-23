/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedRequestOperation : FCOperation {
    <FCContentContext> * _context;
    NSDictionary * _databaseLookupsByFeedID;
    unsigned int  _expectedNetworkEventCount;
    FCFeedDatabase * _feedDatabase;
    NSArray * _feedRequests;
    NSArray * _feedTransformations;
    unsigned int  _maxCount;
    unsigned int  _networkEventCount;
    int  _options;
    id /* block */  _requestCompletionHandler;
    id /* block */  _requestCompletionHandlerWithInterestToken;
    NSMutableDictionary * _resultFeedResponses;
    NSMutableArray * _resultHeldArticleAndTagRecords;
}

@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, retain) NSDictionary *databaseLookupsByFeedID;
@property (nonatomic) unsigned int expectedNetworkEventCount;
@property (nonatomic, retain) FCFeedDatabase *feedDatabase;
@property (nonatomic, copy) NSArray *feedRequests;
@property (nonatomic, copy) NSArray *feedTransformations;
@property (nonatomic) unsigned int maxCount;
@property (nonatomic) unsigned int networkEventCount;
@property (nonatomic) int options;
@property (nonatomic, copy) id /* block */ requestCompletionHandler;
@property (nonatomic, copy) id /* block */ requestCompletionHandlerWithInterestToken;
@property (nonatomic, retain) NSMutableDictionary *resultFeedResponses;
@property (nonatomic, retain) NSMutableArray *resultHeldArticleAndTagRecords;

- (void).cxx_destruct;
- (id)_failureResponseForRequest:(id)arg1 error:(id)arg2;
- (void)_gatherAllFeedResponsesWithCompletionHandler:(id /* block */)arg1;
- (void)_gatherAllOrderFeedResponsesWithCompletionHandler:(id /* block */)arg1;
- (id)context;
- (id)databaseLookupsByFeedID;
- (unsigned int)expectedNetworkEventCount;
- (id)feedDatabase;
- (id)feedRequests;
- (id)feedTransformations;
- (id)init;
- (unsigned int)maxCount;
- (unsigned int)networkEventCount;
- (void)operationWillFinishWithError:(id)arg1;
- (int)options;
- (void)performOperation;
- (void)prepareOperation;
- (id /* block */)requestCompletionHandler;
- (id /* block */)requestCompletionHandlerWithInterestToken;
- (id)resultFeedResponses;
- (id)resultHeldArticleAndTagRecords;
- (void)setContext:(id)arg1;
- (void)setDatabaseLookupsByFeedID:(id)arg1;
- (void)setExpectedNetworkEventCount:(unsigned int)arg1;
- (void)setFeedDatabase:(id)arg1;
- (void)setFeedRequests:(id)arg1;
- (void)setFeedTransformations:(id)arg1;
- (void)setMaxCount:(unsigned int)arg1;
- (void)setNetworkEventCount:(unsigned int)arg1;
- (void)setOptions:(int)arg1;
- (void)setRequestCompletionHandler:(id /* block */)arg1;
- (void)setRequestCompletionHandlerWithInterestToken:(id /* block */)arg1;
- (void)setResultFeedResponses:(id)arg1;
- (void)setResultHeldArticleAndTagRecords:(id)arg1;
- (BOOL)validateOperation;

@end
