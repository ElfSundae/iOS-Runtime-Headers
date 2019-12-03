/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDNowPlayingObserver : NSObject {
    NSString * _bundleIdentifier;
    NSHashTable * _observers;
    unsigned int  _playbackState;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) unsigned int playbackState;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_notifyObservers;
- (void)addObserver:(id)arg1;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)init;
- (unsigned int)playbackState;
- (void)playbackStateChanged:(id)arg1;
- (unsigned int)queryPlaybackState;
- (void)removeObserver:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setPlaybackState:(unsigned int)arg1;

@end
