/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchNotificationChangesURLRequest : CKDURLRequest {
    BOOL  _moreComing;
    NSMutableArray * _resultChangedNotifications;
    NSData * _resultServerChangeTokenData;
    unsigned int  _resultsLimit;
    NSData * _serverChangeTokenData;
    BOOL  _wantsChanges;
}

@property (nonatomic) BOOL moreComing;
@property (nonatomic, readonly) NSArray *resultChangedNotifications;
@property (nonatomic, retain) NSData *resultServerChangeTokenData;
@property (nonatomic) unsigned int resultsLimit;
@property (nonatomic, retain) NSData *serverChangeTokenData;
@property (nonatomic) BOOL wantsChanges;

- (void).cxx_destruct;
- (id)initWithServerChangeTokenData:(id)arg1;
- (BOOL)moreComing;
- (int)operationType;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (id)resultChangedNotifications;
- (id)resultServerChangeTokenData;
- (unsigned int)resultsLimit;
- (id)serverChangeTokenData;
- (void)setMoreComing:(BOOL)arg1;
- (void)setResultServerChangeTokenData:(id)arg1;
- (void)setResultsLimit:(unsigned int)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)setWantsChanges:(BOOL)arg1;
- (BOOL)wantsChanges;

@end
