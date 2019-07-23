/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKDisplayLink : NSObject {
    float  _averageFrameTime;
    id /* block */  _block;
    CADisplayLink * _caDisplayLink;
    bool  _callbackAlreadyInProgress;
    id  _client;
    CADisplay * _display;
    int  _frameCount;
    double  _frameCountBeginTime;
    BOOL  _paused;
    float  _preferredFramesPerSecond;
    double  _previousFrameTime;
    NSTimer * _timer;
}

@property (nonatomic, retain) CADisplay *display;
@property (getter=isPaused, nonatomic) BOOL paused;
@property (nonatomic) int preferredFramesPerSecond;

+ (id)displayLinkWithDisplay:(id)arg1 handler:(id /* block */)arg2 client:(id)arg3;

- (void).cxx_destruct;
- (void)_caDisplayLinkCallback;
- (bool)_callbackAlreadyInProgress;
- (void)_callbackForNextFrame:(double)arg1;
- (void)_setCallbackAlreadyInProgress:(bool)arg1;
- (void)_setup;
- (void)_teardown;
- (void)dealloc;
- (id)display;
- (id)init;
- (id)initWithDisplay:(id)arg1 handler:(id /* block */)arg2 client:(id)arg3;
- (void)invalidate;
- (BOOL)isPaused;
- (int)preferredFramesPerSecond;
- (void)setDisplay:(id)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setPreferredFramesPerSecond:(int)arg1;

@end
