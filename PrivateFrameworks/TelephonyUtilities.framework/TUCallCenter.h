/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallCenter : NSObject {
    TUAudioDeviceController * _audioDeviceController;
    TUCallServicesInterface * _callServicesInterface;
    CNContactStore * _contactStore;
    id /* block */  _disconnectCallPreflight;
    struct CGSize { 
        float width; 
        float height; 
    }  _localLandscapeAspectRatio;
    struct CGSize { 
        float width; 
        float height; 
    }  _localPortraitAspectRatio;
    TUCallProviderManager * _providerManager;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) TUCall *activeVideoCall;
@property (getter=isAddCallAllowed, nonatomic, readonly) BOOL addCallAllowed;
@property (getter=isAmbiguous, nonatomic, readonly) BOOL ambiguous;
@property (nonatomic, readonly) BOOL anyCallIsEndpointOnCurrentDevice;
@property (nonatomic, readonly) BOOL anyCallIsHostedOnCurrentDevice;
@property (nonatomic, retain) TUAudioDeviceController *audioDeviceController;
@property (nonatomic, readonly) unsigned int callCountOnDefaultPairedDevice;
@property (nonatomic, readonly, copy) NSArray *callGroupsOnDefaultPairedDevice;
@property (nonatomic, retain) TUCallServicesInterface *callServicesInterface;
@property (nonatomic, readonly, copy) NSArray *callsHostedElsewhere;
@property (nonatomic, readonly, copy) NSArray *callsHostedOrAnEndpointElsewhere;
@property (nonatomic, readonly, copy) NSArray *callsOnDefaultPairedDevice;
@property (nonatomic, readonly, copy) NSArray *callsWithAnEndpointElsewhere;
@property (nonatomic, readonly) BOOL canMergeCalls;
@property (nonatomic, readonly, copy) NSArray *conferenceParticipantCalls;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, readonly) unsigned int currentAudioAndVideoCallCount;
@property (nonatomic, readonly, copy) NSArray *currentAudioAndVideoCalls;
@property (nonatomic, readonly) unsigned int currentCallCount;
@property (nonatomic, readonly, copy) NSArray *currentCallGroups;
@property (nonatomic, readonly, copy) NSArray *currentCalls;
@property (nonatomic, readonly) TUCall *currentVideoCall;
@property (nonatomic, readonly) unsigned int currentVideoCallCount;
@property (nonatomic, readonly, copy) NSArray *currentVideoCalls;
@property (nonatomic, copy) id /* block */ disconnectCallPreflight;
@property (nonatomic, readonly, copy) NSArray *displayedCalls;
@property (getter=isEndAndAnswerAllowed, nonatomic, readonly) BOOL endAndAnswerAllowed;
@property (nonatomic, readonly) BOOL hasCurrentAudioCalls;
@property (nonatomic, readonly) BOOL hasCurrentCalls;
@property (nonatomic, readonly) BOOL hasCurrentVideoCalls;
@property (getter=isHoldAndAnswerAllowed, nonatomic, readonly) BOOL holdAndAnswerAllowed;
@property (nonatomic, readonly) TUCall *incomingCall;
@property (nonatomic, readonly, copy) NSArray *incomingCalls;
@property (nonatomic, readonly) TUCall *incomingVideoCall;
@property (nonatomic) struct CGSize { float x1; float x2; } localLandscapeAspectRatio;
@property (nonatomic) struct CGSize { float x1; float x2; } localPortraitAspectRatio;
@property (nonatomic, retain) TUCallProviderManager *providerManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)callCenterWithQueue:(id)arg1;
+ (id)displayedCallFromCalls:(id)arg1;
+ (BOOL)isInCallServiceProcess;
+ (const void*)sharedAddressBook;
+ (id)sharedContactStore;
+ (id)sharedInstance;
+ (id)sharedInstanceWithQueue:(id)arg1 daemonDelegate:(id)arg2 shouldRegister:(BOOL)arg3;

- (void).cxx_destruct;
- (id)_allCalls;
- (unsigned int)_callGroupCountForCall:(id)arg1 withCall:(id)arg2;
- (id)_callGroupsFromCalls:(id)arg1;
- (BOOL)_canDialWithRequest:(id)arg1 shouldUseRelay:(BOOL*)arg2;
- (id)_dial:(id)arg1 callID:(int)arg2 provider:(id)arg3 video:(BOOL)arg4 sourceIdentifier:(id)arg5 dialType:(int)arg6;
- (id)_dial:(id)arg1 callID:(int)arg2 service:(int)arg3 sourceIdentifier:(id)arg4 dialType:(int)arg5;
- (id)_dialWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)_existingCallsAllowDialRequest:(id)arg1 allowVoiceWithData:(BOOL)arg2;
- (BOOL)_isCallingAvailableOnSecondaryDeviceWithRelayCallingAvailability:(int)arg1 isProviderAvailable:(BOOL)arg2 isRelayAllowed:(BOOL)arg3 shouldUseRelay:(BOOL*)arg4;
- (void)_preflightDisconnectForCalls:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)activeVideoCall;
- (BOOL)allCallsAreOfService:(int)arg1;
- (BOOL)allCallsPassTest:(id /* block */)arg1;
- (void)answerCall:(id)arg1;
- (void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2;
- (void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2 wantsHoldMusic:(BOOL)arg3;
- (void)answerCallWithHoldMusic:(id)arg1;
- (void)answerWithRequest:(id)arg1;
- (BOOL)anyCallIsEndpointOnCurrentDevice;
- (BOOL)anyCallIsHostedOnCurrentDevice;
- (BOOL)anyCallPassesTest:(id /* block */)arg1;
- (id)audioAndVideoCallsWithStatus:(int)arg1;
- (id)audioDeviceController;
- (id)audioOrVideoCallWithStatus:(int)arg1;
- (unsigned int)callCountOnDefaultPairedDevice;
- (id)callGroupsOnDefaultPairedDevice;
- (id)callPassingTest:(id /* block */)arg1;
- (id)callPassingTest:(id /* block */)arg1 sortedUsingComparator:(id /* block */)arg2;
- (id)callPassingTest:(id /* block */)arg1 withOptions:(unsigned int)arg2;
- (id)callServicesClientCapabilities;
- (id)callServicesInterface;
- (id)callWithCallUUID:(id)arg1;
- (id)callWithStatus:(int)arg1;
- (id)callWithUniqueProxyIdentifier:(id)arg1;
- (id)callsHostedElsewhere;
- (id)callsHostedOrAnEndpointElsewhere;
- (id)callsOnDefaultPairedDevice;
- (id)callsPassingTest:(id /* block */)arg1;
- (id)callsPassingTest:(id /* block */)arg1 returningNilForEmpty:(BOOL)arg2;
- (id)callsWithAnEndpointElsewhere;
- (id)callsWithGroupUUID:(id)arg1;
- (id)callsWithStatus:(int)arg1;
- (BOOL)canDialWithRequest:(id)arg1;
- (BOOL)canGroupCall:(id)arg1 withCall:(id)arg2;
- (BOOL)canMergeCalls;
- (id)conferenceCall;
- (id)conferenceParticipantCalls;
- (id)contactStore;
- (unsigned int)countOfCallsPassingTest:(id /* block */)arg1;
- (unsigned int)currentAudioAndVideoCallCount;
- (id)currentAudioAndVideoCalls;
- (unsigned int)currentCallCount;
- (id)currentCallGroups;
- (id)currentCalls;
- (id)currentVideoCall;
- (unsigned int)currentVideoCallCount;
- (id)currentVideoCalls;
- (void)dealloc;
- (id)debugDescription;
- (id)dial:(id)arg1 callID:(int)arg2 service:(int)arg3;
- (id)dial:(id)arg1 service:(int)arg2;
- (id)dialEmergency:(id)arg1;
- (id)dialEmergency:(id)arg1 sourceIdentifier:(id)arg2;
- (id)dialVoicemail;
- (id)dialVoicemailWithSourceIdentifier:(id)arg1;
- (id)dialWithRequest:(id)arg1;
- (void)dialWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)disconnectAllCalls;
- (void)disconnectCall:(id)arg1;
- (void)disconnectCall:(id)arg1 withReason:(int)arg2;
- (id /* block */)disconnectCallPreflight;
- (void)disconnectCurrentCallAndActivateHeld;
- (id)displayedCall;
- (id)displayedCallFromCalls:(id)arg1;
- (id)displayedCalls;
- (void)endActiveAndAnswerCall:(id)arg1;
- (void)endActiveOrHeldAndAnswerCall:(id)arg1;
- (void)endHeldAndAnswerCall:(id)arg1;
- (void)enteredBackgroundForAllCalls;
- (void)enteredForegroundForCall:(id)arg1;
- (void)enumerateCallsInvokingBlock:(id /* block */)arg1 forCallsPassingTest:(id /* block */)arg2;
- (void)enumerateCallsWithOptions:(unsigned int)arg1 invokingBlock:(id /* block */)arg2 forCallsPassingTest:(id /* block */)arg3;
- (BOOL)existingCallsHaveMultipleProviders;
- (id)frontmostAudioOrVideoCall;
- (id)frontmostCall;
- (void)groupCall:(id)arg1 withOtherCall:(id)arg2;
- (BOOL)hasCurrentAudioCalls;
- (BOOL)hasCurrentCalls;
- (BOOL)hasCurrentVideoCalls;
- (void)holdActiveAndAnswerCall:(id)arg1;
- (void)holdCall:(id)arg1;
- (id)incomingCall;
- (id)incomingCalls;
- (id)incomingVideoCall;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (BOOL)isAddCallAllowed;
- (BOOL)isAmbiguous;
- (BOOL)isEndAndAnswerAllowed;
- (BOOL)isHardPauseAvailable;
- (BOOL)isHoldAllowed;
- (BOOL)isHoldAndAnswerAllowed;
- (BOOL)isMergeable;
- (BOOL)isSendToVoicemailAllowed;
- (BOOL)isSwappable;
- (BOOL)isTakingCallsPrivateAllowed;
- (void)launchAppForDialRequest:(id)arg1 completion:(id /* block */)arg2;
- (struct CGSize { float x1; float x2; })localLandscapeAspectRatio;
- (struct CGSize { float x1; float x2; })localPortraitAspectRatio;
- (id)providerManager;
- (void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)pullHostedCallsFromPairedHostDevice;
- (void)pullRelayingCallsFromClient;
- (void)pushHostedCallsToPairedClientDevice;
- (void)pushRelayingCallsToHost;
- (void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1;
- (id)queue;
- (void)registerWithCompletionHandler:(id /* block */)arg1;
- (void)resumeCall:(id)arg1;
- (void)sendFieldModeDigits:(id)arg1;
- (void)setAudioDeviceController:(id)arg1;
- (void)setCallServicesInterface:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setDisconnectCallPreflight:(id /* block */)arg1;
- (void)setLocalLandscapeAspectRatio:(struct CGSize { float x1; float x2; })arg1;
- (void)setLocalPortraitAspectRatio:(struct CGSize { float x1; float x2; })arg1;
- (void)setProviderManager:(id)arg1;
- (void)setQueue:(id)arg1;
- (BOOL)shouldPreferRelayOverDirectSecondaryCallingForProvider:(id)arg1;
- (void)swapCalls;
- (void)ungroupCall:(id)arg1;
- (void)unholdCall:(id)arg1;
- (void)updateCall:(id)arg1 withAnswerRequest:(id)arg2;
- (id)videoCallWithStatus:(int)arg1;

@end
