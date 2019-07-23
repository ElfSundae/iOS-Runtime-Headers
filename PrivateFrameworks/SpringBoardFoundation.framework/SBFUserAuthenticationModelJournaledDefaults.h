/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFUserAuthenticationModelJournaledDefaults : NSObject <SBFUserAuthenticationModel> {
    <SBFUserAuthenticationModelDelegate> * _delegate;
    NSString * _journalPath;
    NSDictionary * _originalDefaultsForRollback;
    bool  _pendingWipe;
    bool  _permanentlyBlocked;
    NSObject<OS_dispatch_queue> * _persistentStateQueue;
    MCProfileConnection * _profileConnection;
    SBSecurityDefaults * _securityDefaults;
    bool  _speculativePasscodeFailureChargeOutstanding;
    double  _unblockTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFUserAuthenticationModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPermanentlyBlocked, nonatomic, readonly) bool permanentlyBlocked;
@property (readonly) Class superclass;
@property (getter=isTemporarilyBlocked, nonatomic, readonly) bool temporarilyBlocked;
@property (nonatomic, readonly) double timeUntilUnblockedSinceReferenceDate;

+ (id)_journaledDefaultsAndTypes;

- (void).cxx_destruct;
- (id)_copyLockControllerDefaults;
- (void)_evaluatePendingWipe;
- (id)_initWithJournalPath:(id)arg1 securityDefaults:(id)arg2 profileConnection:(id)arg3;
- (bool)_isDeviceWipePreferenceEnabled;
- (void)_loadLockControllerDefaults:(id)arg1;
- (void)_loadLockControllerDefaultsJournalIfNecessary;
- (void)_persistentStateQueue_beginSpeculativeFailureCharge;
- (void)_persistentStateQueue_cancelSpeculativeFailureCharge;
- (void)_persistentStateQueue_clearBlockedState;
- (void)_persistentStateQueue_evaluatePendingWipe;
- (void)_persistentStateQueue_loadLockState;
- (void)_persistentStateQueue_unlockFailedWithError:(id)arg1;
- (void)_persistentStateQueue_unlockSucceeded;
- (void)_updateLockControllerDefaultsJournal;
- (void)clearBlockedState;
- (id)delegate;
- (id)init;
- (bool)isPermanentlyBlocked;
- (bool)isTemporarilyBlocked;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeUnlockFailedWithError:(id)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)performPasswordTest:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)synchronize;
- (void)test_reloadState;
- (double)timeUntilUnblockedSinceReferenceDate;
- (id)updateLockControllerDefaultsWithBlock:(id /* block */)arg1 journaled:(bool)arg2;

@end
