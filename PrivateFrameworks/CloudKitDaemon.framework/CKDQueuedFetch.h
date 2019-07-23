/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDQueuedFetch : NSObject {
    BOOL  _allowsBackgroundNetworking;
    BOOL  _allowsCellularAccess;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completionHandler;
    NSMutableDictionary * _completionHandlersByItemID;
    CKDClientContext * _context;
    NSString * _deviceIdentifier;
    BOOL  _isFinished;
    unsigned int  _lastCompletionHandlerCount;
    NSDate * _lastRequestDate;
    NSOperationQueue * _operationQueue;
    CKDClientProxy * _proxy;
    int  _qos;
    int  _scope;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _sourceApplicationSecondaryIdentifier;
    NSDate * _startDate;
    BOOL  _useEncryption;
    int  _usesBackgroundSession;
}

@property (nonatomic) BOOL allowsBackgroundNetworking;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSMutableDictionary *completionHandlersByItemID;
@property (nonatomic) CKDClientContext *context;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) unsigned int lastCompletionHandlerCount;
@property (nonatomic, retain) NSDate *lastRequestDate;
@property (nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) CKDClientProxy *proxy;
@property (nonatomic) int qos;
@property (nonatomic) int scope;
@property (nonatomic, readonly) BOOL shouldStart;
@property (nonatomic, retain) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, retain) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) BOOL useEncryption;
@property (nonatomic) int usesBackgroundSession;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addCallbackForItemWithID:(id)arg1 callback:(id /* block */)arg2;
- (id)allItemIDs;
- (BOOL)allowsBackgroundNetworking;
- (BOOL)allowsCellularAccess;
- (id)callbackQueue;
- (id)callbacksForItemWithID:(id)arg1;
- (BOOL)canBeUsedForOperation:(id)arg1;
- (id /* block */)completionHandler;
- (id)completionHandlersByItemID;
- (id)context;
- (id)description;
- (id)deviceIdentifier;
- (id)fetchOperationForItemIDs:(id)arg1;
- (void)finishFetchOperationWithError:(id)arg1;
- (id)init;
- (id)initWithOperation:(id)arg1 context:(id)arg2 operationQueue:(id)arg3;
- (BOOL)isFinished;
- (unsigned int)lastCompletionHandlerCount;
- (id)lastRequestDate;
- (int)numberOfCallbacks;
- (id)operationInfo;
- (Class)operationInfoClass;
- (id)operationQueue;
- (void)performCallbacksForItemWithID:(id)arg1 withItem:(id)arg2 error:(id)arg3;
- (id)proxy;
- (int)qos;
- (void)removeCallbacksForItemWithID:(id)arg1;
- (int)scope;
- (void)setAllowsBackgroundNetworking:(BOOL)arg1;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandlersByItemID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setIsFinished:(BOOL)arg1;
- (void)setLastCompletionHandlerCount:(unsigned int)arg1;
- (void)setLastRequestDate:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setProxy:(id)arg1;
- (void)setQos:(int)arg1;
- (void)setScope:(int)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setUseEncryption:(BOOL)arg1;
- (void)setUsesBackgroundSession:(int)arg1;
- (BOOL)shouldStart;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (void)start;
- (id)startDate;
- (BOOL)useEncryption;
- (int)usesBackgroundSession;

@end
