/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISInput : NSObject {
    NSHashTable *__changeObservers;
    BOOL __didChange;
    BOOL __isPerfomingChanges;
    BOOL _enabled;
    int _inputType;
    <ISInputObserver> *_observer;
    NSObject<OS_dispatch_queue> *_observerQueue;
    ISPlayer *_player;
    float _secondaryValue;
    int _signalID;
    float _tertiaryValue;
    float _value;
}

@property (nonatomic, readonly) NSHashTable *_changeObservers;
@property (setter=_setDidChange:, nonatomic) BOOL _didChange;
@property (setter=_setPerformingChanges:, nonatomic) BOOL _isPerfomingChanges;
@property (nonatomic) BOOL enabled;
@property (nonatomic, readonly) int inputType;
@property (nonatomic, readonly) ISPlayer *player;
@property (nonatomic, readonly) float secondaryValue;
@property (nonatomic, readonly) int signalID;
@property (nonatomic, readonly) float tertiaryValue;
@property (nonatomic, readonly) float value;

- (void).cxx_destruct;
- (id)_changeObservers;
- (BOOL)_didChange;
- (void)_invalidate;
- (BOOL)_isPerfomingChanges;
- (void)_setDidChange:(BOOL)arg1;
- (void)_setPerformingChanges:(BOOL)arg1;
- (BOOL)enabled;
- (id)init;
- (int)inputType;
- (id)observer;
- (void)performChanges:(id /* block */)arg1;
- (id)player;
- (void)playerDidChange;
- (float)secondaryValue;
- (void)setEnabled:(BOOL)arg1;
- (void)setObserver:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setSecondaryValue:(float)arg1;
- (void)setTertiaryValue:(float)arg1;
- (void)setValue:(float)arg1;
- (void)signal;
- (int)signalID;
- (float)tertiaryValue;
- (float)value;

@end
