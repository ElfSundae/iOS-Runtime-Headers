/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUIKeyboardLayoutFactory : NSObject {
    TUIKBGraphSerialization * _decoder;
    NSMutableDictionary * _internalCache;
    void * _layoutsLibraryHandle;
}

@property (retain) TUIKBGraphSerialization *decoder;
@property (retain) NSMutableDictionary *internalCache;
@property (nonatomic, readonly) void*layoutsLibraryHandle;

+ (id)layoutsFileName;
+ (id)sharedKeyboardFactory;

- (void)dealloc;
- (id)decoder;
- (id)init;
- (id)internalCache;
- (id)keyboardPrefixForWidth:(float)arg1 andEdge:(BOOL)arg2;
- (id)keyboardWithName:(id)arg1 inCache:(id)arg2;
- (void*)layoutsLibraryHandle;
- (void)setDecoder:(id)arg1;
- (void)setInternalCache:(id)arg1;

@end
