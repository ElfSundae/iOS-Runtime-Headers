/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAnomalyManager : NSObject {
    <CMAnomalyDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * fAppQueue;
    CMAnomalyEvent * fLastDispatchedEvent;
    CMAnomalyEvent * fLastReceivedEvent;
    struct CLConnectionClient { id x1; struct CLCallbackDropManager { int (**x_2_1_1)(); struct shared_ptr<int> { int *x_2_2_1; struct __shared_weak_count {} *x_2_2_2; } x_2_1_2; } x2; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; struct CLConnectionClientNotificationContext {} *x4; } * fLocationdConnection;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    bool  fRegisteredForNotification;
}

@property (nonatomic) <CMAnomalyDelegate> *delegate;

+ (bool)isAnomalyDetectionAvailable;

- (void)_registerForAnomalyDetection:(bool)arg1;
- (void)_sendRegistrationForAnomalyEvent:(id)arg1;
- (void)ackAnomalyEvent:(id)arg1 withResolution:(long long)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)resolveAnomalyEvent:(id)arg1 withResolution:(long long)arg2;
- (void)respondToAnomalyEvent:(id)arg1 withResponse:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)startAnomalyDetection;
- (void)stopAnomalyDetection;

@end
