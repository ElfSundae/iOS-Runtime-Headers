/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSObservance : NSObject {
    <VSObservanceDelegate> * _delegate;
    NSString * _keyPath;
    id  _object;
    bool  _observing;
    unsigned long long  _options;
}

@property (nonatomic) <VSObservanceDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly) id object;
@property (getter=isObserving, nonatomic) bool observing;
@property (nonatomic, readonly) unsigned long long options;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3;
- (bool)isObserving;
- (id)keyPath;
- (id)object;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned long long)options;
- (void)setDelegate:(id)arg1;
- (void)setObserving:(bool)arg1;
- (void)startObserving;
- (void)stopObserving;

@end
