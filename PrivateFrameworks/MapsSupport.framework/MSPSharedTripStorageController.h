/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPSharedTripStorageController : NSObject {
    <MSPSharedTripStorageDelegate> * _delegate;
    NSMutableDictionary * _receiverRules;
    NSMutableDictionary * _senderRules;
    MSPGroupSessionStorage * _senderSession;
    NSMutableDictionary * _sharedTripGroupSessionInfo;
}

@property (nonatomic) <MSPSharedTripStorageDelegate> *delegate;
@property (nonatomic, retain) NSMutableDictionary *receiverRules;
@property (nonatomic, retain) NSMutableDictionary *senderRules;
@property (nonatomic, retain) MSPGroupSessionStorage *senderSession;
@property (nonatomic, retain) NSMutableDictionary *sharedTripGroupSessionInfo;

- (void).cxx_destruct;
- (void)_loadSenderSession;
- (void)_loadStoredSessions;
- (id)_rulesPath;
- (void)_saveReceivingRules;
- (void)_saveSenderSession;
- (void)_saveSendingRules;
- (void)_saveStoredSessions;
- (id)_senderRulesPath;
- (id)_storingPath;
- (id)_storingSenderPath;
- (void)addNewSession:(id)arg1 originator:(id)arg2 receivingHandle:(id)arg3 receivingAccountIdentifier:(id)arg4;
- (void)dealloc;
- (id)delegate;
- (id)groupSessionInfoForKey:(id)arg1;
- (id)init;
- (id)receiverRules;
- (id)receivingRulesForIdentifier:(id)arg1;
- (void)receivingRulesTouched;
- (void)removeSession:(id)arg1;
- (id)senderRules;
- (id)senderSession;
- (id)sendingRulesForIdentifier:(id)arg1;
- (void)sendingRulesTouched;
- (void)setDelegate:(id)arg1;
- (void)setReceiverRules:(id)arg1;
- (void)setSenderRules:(id)arg1;
- (void)setSenderSession:(id)arg1;
- (void)setSharedTripGroupSessionInfo:(id)arg1;
- (id)sharedTripGroupSessionInfo;
- (void)updateGroupSessionStorageWithState:(id)arg1;

@end
