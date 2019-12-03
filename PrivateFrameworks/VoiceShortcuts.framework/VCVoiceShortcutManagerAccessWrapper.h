/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCVoiceShortcutManagerAccessWrapper : NSObject <VCVoiceShortcutManagerXPCInterface, WFOutOfProcessWorkflowControllerDelegate> {
    VCAccessSpecifier * _accessSpecifier;
    VCCoreDuetListener * _coreDuetListener;
    WFOutOfProcessWorkflowController * _outOfProcessWorkflowController;
    id /* block */  _runShortcutCompletionHandler;
    NSSet * _syncDataHandlers;
    VCVoiceShortcutManager * _voiceShortcutManager;
}

@property (nonatomic, readonly, copy) VCAccessSpecifier *accessSpecifier;
@property (nonatomic, readonly) VCCoreDuetListener *coreDuetListener;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFOutOfProcessWorkflowController *outOfProcessWorkflowController;
@property (nonatomic, copy) id /* block */ runShortcutCompletionHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSSet *syncDataHandlers;
@property (nonatomic, readonly) VCVoiceShortcutManager *voiceShortcutManager;

- (void).cxx_destruct;
- (id)accessSpecifier;
- (void)addVoiceShortcut:(id)arg1 phrase:(id)arg2 completion:(id /* block */)arg3;
- (void)checkTriggerStateWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)checkTriggerStateWithKeyPath:(id)arg1 completion:(id /* block */)arg2;
- (id)coreDuetListener;
- (void)deleteTriggerWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteVoiceShortcutWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)describeSyncStateIncludingDeleted:(bool)arg1 completion:(id /* block */)arg2;
- (void)fireTriggerWithIdentifier:(id)arg1 force:(bool)arg2 completion:(id /* block */)arg3;
- (void)generateSingleUseTokenForWorkflowIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getConfiguredTriggerDescriptionsWithCompletion:(id /* block */)arg1;
- (void)getNumberOfVoiceShortcutsWithCompletion:(id /* block */)arg1;
- (void)getShareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getSiriPodcastsDatabaseURLWithCompletion:(id /* block */)arg1;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getVoiceShortcutWithPhrase:(id)arg1 completion:(id /* block */)arg2;
- (void)getVoiceShortcutsForAppWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getVoiceShortcutsWithCompletion:(id /* block */)arg1;
- (void)hasRunEventsInTheLast5DaysWithCompletion:(id /* block */)arg1;
- (id)initWithVoiceShortcutManager:(id)arg1 coreDuetListener:(id)arg2 accessSpecifier:(id)arg3 syncDataHandlers:(id)arg4;
- (void)obliterateShortcuts:(id /* block */)arg1;
- (id)outOfProcessWorkflowController;
- (void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(bool)arg3;
- (void)refreshTriggerWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)requestDataMigration:(id /* block */)arg1;
- (void)requestSyncToWatchWithForceReset:(bool)arg1 completion:(id /* block */)arg2;
- (id /* block */)runShortcutCompletionHandler;
- (void)runShortcutWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)runShortcutWithName:(id)arg1 completion:(id /* block */)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setOutOfProcessWorkflowController:(id)arg1;
- (void)setRunShortcutCompletionHandler:(id /* block */)arg1;
- (void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2;
- (void)startRunningWorkflow:(id)arg1 completion:(id /* block */)arg2;
- (id)syncDataHandlers;
- (void)unregisterTriggerWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)updateShortcutsVocabularyWithCompletion:(id /* block */)arg1;
- (void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 shortcut:(id)arg3 completion:(id /* block */)arg4;
- (void)validateVoiceShortcutPhrases:(id)arg1 completion:(id /* block */)arg2;
- (id)voiceShortcutManager;

@end
