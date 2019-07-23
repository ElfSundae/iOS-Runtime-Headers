/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInputManagerLoader : NSObject {
    NSMutableDictionary * _activeInputManagers;
    NSMutableDictionary * _availableInputManagers;
    TIKeyboardInputManagerLoaderSyncHelper * _helper;
    NSXPCConnection * _interactingConnection;
    NSMutableDictionary * _lastUsedDate;
    TIKeyboardInputManagerBase * _mostRecentlyRequested;
}

@property (nonatomic) NSXPCConnection *interactingConnection;
@property (nonatomic, retain) TIKeyboardInputManagerBase *mostRecentlyRequested;

+ (id)sharedLoader;

- (id)activeInputModeIdentifiers;
- (void)cacheInputManager:(id)arg1;
- (void)dealloc;
- (bool)hasActiveInputManagers;
- (id)init;
- (id)inputManagerForInputMode:(id)arg1 withClass:(Class)arg2;
- (id)interactingConnection;
- (id)mostRecentlyRequested;
- (void)reduceCacheToSize:(unsigned long long)arg1;
- (id)resourceInputModes;
- (void)setInteractingConnection:(id)arg1;
- (void)setMostRecentlyRequested:(id)arg1;
- (void)startSyncHelper;

@end
