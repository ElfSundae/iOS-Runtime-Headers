/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSKVO1Adaptor : _NSConcreteObservation {
    BOOL  emitsChanges;
    NSObservableKeyPath * kp;
}

- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned int)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void*)arg7;
- (void)_setEmitsChanges:(BOOL)arg1;
- (void)finishObserving;
- (id)initWithObservable:(id)arg1 observer:(id)arg2 keyPath:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)remove;

@end
