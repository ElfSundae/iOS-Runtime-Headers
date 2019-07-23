/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTTestResultsConnection : NSObject <ASTConnection, ASTTestResultHandling> {
    <ASTConnectionStatusDelegate> * _delegate;
    id /* block */  _didReceiveResponse;
    int  _networkDisconnectedRetryCount;
    NSURLRequest * _request;
    BOOL  _retryOnNetworkDisconnected;
    unsigned int  _rootOfTrust;
    NSString * _sessionID;
    int  _state;
    NSNumber * _testId;
    NSDictionary * _testResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASTConnectionStatusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didReceiveResponse;
@property (readonly) unsigned int hash;
@property (nonatomic) int networkDisconnectedRetryCount;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic) BOOL retryOnNetworkDisconnected;
@property (nonatomic, readonly) unsigned int rootOfTrust;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *testId;
@property (nonatomic, retain) NSDictionary *testResults;

- (void).cxx_destruct;
- (id)delegate;
- (id /* block */)didReceiveResponse;
- (id)generateRequest;
- (id)initWithTestResults:(id)arg1 sessionID:(id)arg2;
- (int)networkDisconnectedRetryCount;
- (id)request;
- (BOOL)retryOnNetworkDisconnected;
- (unsigned int)rootOfTrust;
- (id)sessionID;
- (void)setDelegate:(id)arg1;
- (void)setDidReceiveResponse:(id /* block */)arg1;
- (void)setNetworkDisconnectedRetryCount:(int)arg1;
- (void)setRequest:(id)arg1;
- (void)setRetryOnNetworkDisconnected:(BOOL)arg1;
- (void)setSessionID:(id)arg1;
- (void)setState:(int)arg1;
- (void)setTestResults:(id)arg1;
- (int)state;
- (id)testId;
- (id)testResults;

@end
