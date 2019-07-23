/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsInvitationBBDataProvider : NSObject <BBRemoteDataProvider> {
    NSObject<OS_dispatch_queue> * _bulletinQueue;
    NSMutableDictionary * _currentBulletinRequestsByRequestID;
    BBDataProviderConnection * _dataProviderConnection;
    BBDataProviderProxy * _dataProviderProxy;
    <HDFitnessFriendsBBDataProviderDelegate> * _delegate;
    int  notifyInviteRequestToken;
    int  notifyInviteResponseToken;
    int  notifyOfFakeSignInToken;
    int  notifyOfFakeUpgradeToken;
    int  notifyOfInviteToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDFitnessFriendsBBDataProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bulletinForInvitationFromContact:(id)arg1;
- (id)_bulletinForInvitationFromContact:(id)arg1 withTitle:(id)arg2 formatString:(id)arg3;
- (id)_bulletinForInvitationFromContactUUID:(id)arg1 title:(id)arg2 message:(id)arg3;
- (id)_fakeContact;
- (void)_migrateSectionInfo;
- (id)_newPrepopulatedBulletinRequest;
- (void)_notifyOfFakeInvitationRequest;
- (void)_notifyOfInvitationFromContact:(id)arg1;
- (void)_queue_addBulletinRequest:(id)arg1 fromContact:(id)arg2;
- (id)_queue_bulletinsToOverrideOfType:(id)arg1 forContact:(id)arg2;
- (void)_queue_removeBulletinRequestsWithType:(id)arg1 fromContact:(id)arg2;
- (void)_queue_removeBulletins:(id)arg1;
- (void)_registerForFakeBulletins;
- (void)_showFakeInvitationRequest;
- (void)_showFakeInvitationResponse;
- (void)_showFakeNeedToSignIn;
- (void)_showFakeNeedToUpgrade;
- (void)_showIncompatibleVersionForContact:(id)arg1 title:(id)arg2 formatString:(id)arg3;
- (void)_showInvitationRequestFromContact:(id)arg1;
- (void)_showInvitationResponseFromContact:(id)arg1;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (void)dataProviderDidLoad;
- (void)dealloc;
- (id)defaultSectionInfo;
- (id)delegate;
- (void)handleBulletinActionResponse:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)sectionDisplayName;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (void)setDelegate:(id)arg1;
- (void)showErrorAcceptingInviteFrom:(id)arg1;
- (void)showInviteAcceptResponseFrom:(id)arg1;
- (void)showInviteAttemptNeedToSignInFrom:(id)arg1;
- (void)showInviteAttemptNeedToUpgradeFrom:(id)arg1;
- (void)showInviteRequestFrom:(id)arg1;
- (void)showVersionTooHighForOutgoingInviteTo:(id)arg1;
- (void)showVersionTooLowForIncomingInviteFrom:(id)arg1;
- (void)showVersionTooLowForOutgoingInviteTo:(id)arg1;
- (id)sortDescriptors;
- (id)universalSectionIdentifier;
- (void)withdrawInviteRequestFrom:(id)arg1;

@end
