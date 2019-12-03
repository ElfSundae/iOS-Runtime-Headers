/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVWeaklyObservedObjectClientBlockKVONotifier : NSObject <AVKVONotifier> {
    id /* block */  _block;
    AVCallbackContextRegistry * _callbackContextRegistry;
    void * _callbackContextToken;
    NSString * _keyPath;
    NSObject * _observer;
    unsigned long long  _options;
    NSObject<AVWeakObservable> * _unsafeUnretainedObject;
    AVWeakReference * _weakReferenceToObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)callbackDidFireWithChangeDictionary:(id)arg1;
- (void)cancelCallbacks;
- (void)dealloc;
- (id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned long long)arg5 block:(id /* block */)arg6;
- (void)start;

@end
