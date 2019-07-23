/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDTrafficLogger : NSObject {
    NSString * _requestID;
    int  _sequenceNumber;
}

@property (nonatomic, retain) NSString *requestID;
@property (nonatomic) int sequenceNumber;

- (void).cxx_destruct;
- (void)_logObject:(id)arg1 ofType:(unsigned int)arg2;
- (void)finishRequestLog;
- (id)initWithRequestID:(id)arg1;
- (void)logPartialRequestObjectData:(id)arg1;
- (void)logPartialResponseObjectData:(id)arg1;
- (void)logRequest:(id)arg1 toURL:(id)arg2 withMethod:(id)arg3;
- (void)logResponse:(id)arg1;
- (void)logResponseConfiguration:(unsigned int)arg1 withMessageClassString:(id)arg2;
- (id)requestID;
- (int)sequenceNumber;
- (void)setRequestID:(id)arg1;
- (void)setSequenceNumber:(int)arg1;
- (BOOL)shouldLog;

@end
