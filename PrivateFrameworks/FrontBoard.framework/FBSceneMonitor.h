/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneMonitor : NSObject <FBSceneLayerManagerObserver, FBSceneManagerInternalObserver, FBSceneMonitorDelegate> {
    <FBSceneMonitorDelegate> *_delegate;
    FBSSceneClientSettingsDiffInspector *_diffInspector;
    FBSMutableSceneSettings *_effectiveSettings;
    NSMutableSet *_externalSceneIDs;
    BOOL _invalidated;
    BOOL _isSynchronizing;
    FBSSceneSettings *_lastCommitSettings;
    BOOL _monitorClientSettings;
    BOOL _monitorEffectiveSettings;
    BOOL _monitorPairing;
    BOOL _monitorSceneCommits;
    BOOL _monitorSettings;
    NSMutableDictionary *_monitorsBySceneID;
    NSMutableSet *_pairedExternalSceneIDs;
    FBScene *_scene;
    NSString *_sceneID;
    FBSMutableSceneSettings *_sceneSettings;
    NSMutableDictionary *_updateContextsByTransactionID;
    BOOL _updateExternalScenesAfterSync;
    BOOL _updateSettingsAfterSync;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSceneMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) FBSSceneSettings *effectiveSceneSettings;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) FBScene *scene;
@property (nonatomic, readonly, copy) NSString *sceneID;
@property (nonatomic, readonly, retain) FBSSceneSettings *sceneSettings;
@property (readonly) Class superclass;

- (void)_updateAllSceneStateIgnoringDelegate;
- (void)_updateEffectiveSceneSettings:(BOOL)arg1;
- (void)_updateExternalScenes:(BOOL)arg1;
- (void)_updateScenePairingState:(BOOL)arg1;
- (void)_updateSceneSettings:(BOOL)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)effectiveSceneSettings;
- (id)initWithScene:(id)arg1;
- (id)initWithSceneID:(id)arg1;
- (void)invalidate;
- (BOOL)isPairedWithExternalSceneID:(id)arg1;
- (id)scene;
- (id)sceneID;
- (void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned int)arg3;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned int)arg3;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1;
- (void)sceneMonitor:(id)arg1 effectiveSceneSettingsDidChangeWithDiff:(id)arg2;
- (id)sceneSettings;
- (void)setDelegate:(id)arg1;

@end
