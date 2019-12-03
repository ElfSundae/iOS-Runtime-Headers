/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

@interface SUICApplicationStateHelper : NSObject <FBSDisplayLayoutObserver> {
    BKSApplicationStateMonitor * _appStateMonitor;
    NSMutableDictionary * _foregroundAppInfos;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appInfoDictionariesForDisplayLayout:(id)arg1 completion:(id /* block */)arg2;
- (id)_foregroundAppInfosFor:(long long)arg1;
- (void)_handleApplicationStateUpdate:(id)arg1;
- (void)_updateForAppInfoDictionaries:(id)arg1;
- (void)_updateForAppInfoDictionaries:(id)arg1 displayType:(id)arg2;
- (void)dealloc;
- (id)foregroundAppInfos;
- (id)foregroundAppInfosForCarPlay;
- (id)init;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;

@end
