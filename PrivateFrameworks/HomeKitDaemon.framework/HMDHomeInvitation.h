/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeInvitation : NSObject <HMFTimerDelegate, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    id /* block */  _expirationHandler;
    HMDHome * _home;
    HMHomeInvitationData * _invitationData;
    int  _invitationState;
    id /* block */  _resolutionHandler;
    HMFTimer * _timer;
}

@property (getter=isAccepted, nonatomic, readonly) BOOL accepted;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeclined, nonatomic, readonly) BOOL declined;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) id /* block */ expirationHandler;
@property (getter=isExpired, nonatomic, readonly) BOOL expired;
@property (readonly) unsigned int hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, retain) HMHomeInvitationData *invitationData;
@property (nonatomic) int invitationState;
@property (getter=isPending, nonatomic, readonly) BOOL pending;
@property (nonatomic, copy) id /* block */ resolutionHandler;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMFTimer *timer;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_clearTimer;
- (void)_configureTimer;
- (void)_resolve:(BOOL)arg1;
- (void)accept;
- (id)clientQueue;
- (void)decline;
- (id)describeWithFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id /* block */)expirationHandler;
- (void)expire;
- (id)home;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 invitationData:(id)arg2;
- (id)initWithInvitationData:(id)arg1 forHome:(id)arg2;
- (id)invitationData;
- (int)invitationState;
- (BOOL)isAccepted;
- (BOOL)isDeclined;
- (BOOL)isExpired;
- (BOOL)isPending;
- (id /* block */)resolutionHandler;
- (void)setClientQueue:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setExpirationHandler:(id /* block */)arg1;
- (void)setHome:(id)arg1;
- (void)setInvitationData:(id)arg1;
- (void)setInvitationState:(int)arg1;
- (void)setResolutionHandler:(id /* block */)arg1;
- (void)setTimer:(id)arg1;
- (id)startDate;
- (id)timer;
- (void)timerDidFire:(id)arg1;
- (void)updateInvitationState:(int)arg1;
- (void)updateTimer:(unsigned int)arg1 clientQueue:(id)arg2;

@end
