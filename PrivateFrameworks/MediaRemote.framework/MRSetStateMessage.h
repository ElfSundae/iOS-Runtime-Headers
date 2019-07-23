/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSetStateMessage : MRProtocolMessage {
    NSDictionary * _nowPlayingInfo;
    void * _playbackQueue;
    NSArray * _supportedCommands;
}

@property (nonatomic, readonly) NSString *displayID;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSDictionary *nowPlayingInfo;
@property (nonatomic, readonly) void*playbackQueue;
@property (nonatomic, readonly) unsigned int playbackState;
@property (nonatomic, readonly) NSArray *supportedCommands;

- (void)dealloc;
- (id)displayID;
- (id)displayName;
- (id)initWithNowPlayingState:(id)arg1;
- (id)nowPlayingInfo;
- (void*)playbackQueue;
- (unsigned int)playbackState;
- (id)supportedCommands;
- (unsigned int)type;

@end
