/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLSystemSound : NSObject {
    BOOL  _shouldDisposeOfSoundID;
    NSURL * _soundFileURL;
    unsigned long  _soundID;
    NSURL * _vibrationPatternFileURL;
}

@property (nonatomic, readonly) NSURL *soundFileURL;
@property (nonatomic, readonly) unsigned long soundID;
@property (nonatomic, readonly) NSURL *vibrationPatternFileURL;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithSoundFileURL:(id)arg1 soundID:(unsigned long)arg2 vibrationPatternFileURL:(id)arg3;
- (id)soundFileURL;
- (unsigned long)soundID;
- (id)vibrationPatternFileURL;

@end
