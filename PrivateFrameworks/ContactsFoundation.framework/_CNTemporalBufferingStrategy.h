/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNTemporalBufferingStrategy : NSObject <_CNBufferingStrategy> {
    double  _interval;
    <CNScheduler> * _scheduler;
    <CNCancelable> * _sendToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) <CNCancelable> *sendToken;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)buffer:(id)arg1 didReceiveResults:(id)arg2 forObserver:(id)arg3;
- (void)bufferDidSendResults:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 scheduler:(id)arg2;
- (id)sendToken;
- (void)setSendToken:(id)arg1;

@end
