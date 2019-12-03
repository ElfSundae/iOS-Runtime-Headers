/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIFocusRingManager : NSObject <_UIGeometryChangeObserver> {
    NSMutableDictionary * _focusRingStateForClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *focusRingStateForClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)manager;
+ (void)moveRingToFocusItem:(id)arg1;
+ (void)moveRingToFocusItem:(id)arg1 forClient:(id)arg2;
+ (void)removeRingFromFocusItem:(id)arg1;
+ (void)removeRingFromFocusItem:(id)arg1 forClient:(id)arg2;
+ (Class)shapeLayerClassForClient:(id)arg1;
+ (void)updateRingForFocusItem:(id)arg1;
+ (void)updateRingForFocusItem:(id)arg1 forClient:(id)arg2;

- (void).cxx_destruct;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (void)_removeActiveFocusLayersForClient:(id)arg1;
- (void)_updateFocusLayerFrames;
- (id)_viewToAddFocusLayerForItem:(id)arg1;
- (id)activeFocusLayersForClient:(id)arg1;
- (id)activeFocusLayersToItemsForClient:(id)arg1;
- (void)addFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (void)addParentFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (void)addSelectedFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (void)addSelectedParentFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (id)focusRingStateForClient;
- (void)setFocusRingStateForClient:(id)arg1;

@end
