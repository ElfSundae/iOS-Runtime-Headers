/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXActionActivityManager : NSObject <SXActionActivityManager> {
    NSMutableDictionary * _activityProviders;
}

@property (nonatomic, readonly) NSMutableDictionary *activityProviders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityGroupForAction:(id)arg1;
- (id)activityProviderForAction:(id)arg1;
- (id)activityProviders;
- (id)init;
- (id)previewActivityForAction:(id)arg1;
- (void)registerActionActivityProvider:(id)arg1 actionType:(id)arg2;

@end
