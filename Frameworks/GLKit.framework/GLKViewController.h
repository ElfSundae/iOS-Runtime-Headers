/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKViewController : UIViewController <GLKViewDelegate, NSCoding> {
    <GLKViewControllerDelegate> * _delegate;
    CADisplayLink * _displayLink;
    GLKDisplayLinkMessenger * _displayLinkMessenger;
    BOOL  _displayLinkPaused;
    BOOL  _firstResumeOccurred;
    int  _framesDisplayed;
    int  _framesPerSecond;
    BOOL  _lastDrawOccurred;
    BOOL  _lastResumeOccurred;
    BOOL  _lastUpdateOccurred;
    BOOL  _pauseOnWillResignActive;
    int  _preferredFramesPerSecond;
    BOOL  _resumeOnDidBecomeActive;
    UIScreen * _screen;
    int  _screenFramesPerSecond;
    double  _timeSinceFirstResume;
    double  _timeSinceFirstResumeStartTime;
    double  _timeSinceLastDraw;
    double  _timeSinceLastDrawPreviousTime;
    double  _timeSinceLastResume;
    double  _timeSinceLastResumeStartTime;
    double  _timeSinceLastUpdate;
    double  _timeSinceLastUpdatePreviousTime;
    int (* _updateIMP;
    BOOL  _viewIsVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GLKViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, retain) GLKDisplayLinkMessenger *displayLinkMessenger;
@property (nonatomic) BOOL displayLinkPaused;
@property (nonatomic) BOOL firstResumeOccurred;
@property (nonatomic, readonly) int framesDisplayed;
@property (nonatomic, readonly) int framesPerSecond;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL lastDrawOccurred;
@property (nonatomic) BOOL lastResumeOccurred;
@property (nonatomic) BOOL lastUpdateOccurred;
@property (nonatomic) BOOL pauseOnWillResignActive;
@property (getter=isPaused, nonatomic) BOOL paused;
@property (nonatomic) int preferredFramesPerSecond;
@property (nonatomic) BOOL resumeOnDidBecomeActive;
@property (nonatomic, retain) UIScreen *screen;
@property (nonatomic) int screenFramesPerSecond;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeSinceFirstResume;
@property (nonatomic) double timeSinceFirstResumeStartTime;
@property (nonatomic, readonly) double timeSinceLastDraw;
@property (nonatomic) double timeSinceLastDrawPreviousTime;
@property (nonatomic, readonly) double timeSinceLastResume;
@property (nonatomic) double timeSinceLastResumeStartTime;
@property (nonatomic, readonly) double timeSinceLastUpdate;
@property (nonatomic) double timeSinceLastUpdatePreviousTime;
@property (nonatomic) int (*updateIMP;
@property (nonatomic) BOOL viewIsVisible;

- (int)_calculateScreenFramesPerSecond:(id)arg1;
- (void)_configureNotifications;
- (void)_createDisplayLinkForScreen:(id)arg1;
- (void)_initCommon;
- (void)_pauseByNotification;
- (void)_resumeByNotification;
- (void)_updateAndDraw;
- (void)_updateScreenIfChanged;
- (void)dealloc;
- (id)delegate;
- (id)displayLink;
- (id)displayLinkMessenger;
- (BOOL)displayLinkPaused;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)firstResumeOccurred;
- (int)framesDisplayed;
- (int)framesPerSecond;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isPaused;
- (BOOL)lastDrawOccurred;
- (BOOL)lastResumeOccurred;
- (BOOL)lastUpdateOccurred;
- (void)loadView;
- (BOOL)pauseOnWillResignActive;
- (int)preferredFramesPerSecond;
- (BOOL)resumeOnDidBecomeActive;
- (id)screen;
- (int)screenFramesPerSecond;
- (void)setDelegate:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setDisplayLinkMessenger:(id)arg1;
- (void)setDisplayLinkPaused:(BOOL)arg1;
- (void)setFirstResumeOccurred:(BOOL)arg1;
- (void)setLastDrawOccurred:(BOOL)arg1;
- (void)setLastResumeOccurred:(BOOL)arg1;
- (void)setLastUpdateOccurred:(BOOL)arg1;
- (void)setPauseOnWillResignActive:(BOOL)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setPreferredFramesPerSecond:(int)arg1;
- (void)setResumeOnDidBecomeActive:(BOOL)arg1;
- (void)setScreen:(id)arg1;
- (void)setScreenFramesPerSecond:(int)arg1;
- (void)setTimeSinceFirstResumeStartTime:(double)arg1;
- (void)setTimeSinceLastDrawPreviousTime:(double)arg1;
- (void)setTimeSinceLastResumeStartTime:(double)arg1;
- (void)setTimeSinceLastUpdatePreviousTime:(double)arg1;
- (void)setUpdateIMP:(int (*)arg1;
- (void)setView:(id)arg1;
- (void)setViewIsVisible:(BOOL)arg1;
- (double)timeSinceFirstResume;
- (double)timeSinceFirstResumeStartTime;
- (double)timeSinceLastDraw;
- (double)timeSinceLastDrawPreviousTime;
- (double)timeSinceLastResume;
- (double)timeSinceLastResumeStartTime;
- (double)timeSinceLastUpdate;
- (double)timeSinceLastUpdatePreviousTime;
- (int (*)updateIMP;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewDidUnload;
- (BOOL)viewIsVisible;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
