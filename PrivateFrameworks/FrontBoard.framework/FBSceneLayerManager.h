/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneLayerManager : NSObject <BSDescriptionProviding> {
    NSString * _identifier;
    NSOrderedSet * _layers;
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSOrderedSet *layers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateObserversWithBlock:(id /* block */)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (void)_observer_didRepositionLayer:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)_observer_didStartTrackingLayers;
- (void)_observer_didStopTrackingLayers;
- (void)_observer_willStartTrackingLayers;
- (void)_setLayers:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)layerWithContextID:(unsigned int)arg1;
- (id)layers;
- (void)removeObserver:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
