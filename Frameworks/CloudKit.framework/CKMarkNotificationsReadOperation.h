/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKMarkNotificationsReadOperation : CKOperation {
    NSMutableDictionary *_errorsByNotificationID;
    id /* block */ _markNotificationsReadCompletionBlock;
    NSArray *_notificationIDs;
    NSMutableArray *_notificationIDsMarkedRead;
}

@property (nonatomic, retain) NSMutableDictionary *errorsByNotificationID;
@property (nonatomic, copy) id /* block */ markNotificationsReadCompletionBlock;
@property (nonatomic, copy) NSArray *notificationIDs;
@property (nonatomic, retain) NSMutableArray *notificationIDsMarkedRead;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (unsigned long long)activityStart;
- (id)errorsByNotificationID;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithNotificationIDsToMarkRead:(id)arg1;
- (id /* block */)markNotificationsReadCompletionBlock;
- (id)notificationIDs;
- (id)notificationIDsMarkedRead;
- (void)performCKOperation;
- (void)setErrorsByNotificationID:(id)arg1;
- (void)setMarkNotificationsReadCompletionBlock:(id /* block */)arg1;
- (void)setNotificationIDs:(id)arg1;
- (void)setNotificationIDsMarkedRead:(id)arg1;

@end
