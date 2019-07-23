/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationTerminationAssertionService : NSObject {
    <FBApplicationTerminationAssertionServiceDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    FBApplicationTerminationAssertionServiceServer *_server;
    NSMutableDictionary *_terminationAssertionsByBundleID;
}

@property (nonatomic) <FBApplicationTerminationAssertionServiceDelegate> *delegate;

+ (id)sharedInstance;

- (void)_queue_addTerminationAssertion:(id)arg1;
- (void)_queue_continueAcquisition:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_queue_removeTerminationAssertion:(id)arg1;
- (id)_requestPluginHoldForAppInfo:(id)arg1;
- (void)addTerminationAssertion:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)canAcquireTerminationAssertion:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)removeTerminationAssertion:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (id)terminationAssertionsForBundleID:(id)arg1;
- (id)terminationAssertionsForBundleID:(id)arg1 withReason:(id)arg2;

@end
