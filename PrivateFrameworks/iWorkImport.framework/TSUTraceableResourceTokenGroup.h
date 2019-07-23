/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUTraceableResourceTokenGroup : NSObject <TSUTraceableResourceToken> {
    <TSUTraceableResourceToken> * _token1;
    <TSUTraceableResourceToken> * _token2;
}

@property (nonatomic, readonly) NSArray *acquireCallStack;
@property (nonatomic, readonly) NSObject *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *intent;
@property (nonatomic, readonly) NSArray *relinquishCallStack;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeout;

- (void).cxx_destruct;
- (id)acquireCallStack;
- (id)context;
- (id)init;
- (id)initWithToken1:(id)arg1 token2:(id)arg2;
- (id)intent;
- (void)pauseTimeout;
- (id)relinquishCallStack;
- (void)resumeTimeout;
- (double)timeout;

@end
