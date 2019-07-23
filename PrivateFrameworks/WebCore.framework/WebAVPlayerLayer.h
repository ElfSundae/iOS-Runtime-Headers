/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVPlayerLayer : CALayer {
    struct RetainPtr<WebAVPlayerController> { 
        void *m_ptr; 
    }  _avPlayerController;
    struct RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::DumbPtrTraits<WebCore::VideoFullscreenInterfaceAVKit> > { 
        struct VideoFullscreenInterfaceAVKit {} *m_ptr; 
    }  _fullscreenInterface;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _modelVideoLayerFrame;
    NSDictionary * _pixelBufferAttributes;
    bool  _readyForDisplay;
    struct CGSize { 
        double width; 
        double height; 
    }  _videoDimensions;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _videoGravity;
    struct RetainPtr<CALayer> { 
        void *m_ptr; 
    }  _videoSublayer;
}

@property (nonatomic) struct VideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Mode { unsigned int x_4_1_1; } x4; struct Mode { unsigned int x_5_1_1; } x5; /* Warning: unhandled struct encoding: '{Ref<WebCore::PlaybackSessionInterfaceAVKit' */ struct x6; }*fullscreenInterface; /* unknown property attribute:  WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}BBBBBBBBBBBBBBBBBBBBBBB} */
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } modelVideoLayerFrame;
@property (nonatomic, copy) NSDictionary *pixelBufferAttributes;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (getter=isReadyForDisplay, nonatomic) bool readyForDisplay;
@property struct CGSize { double x1; double x2; } videoDimensions;
@property (nonatomic, retain) NSString *videoGravity;
@property (nonatomic, retain) CALayer *videoSublayer;

+ (id)keyPathsForValuesAffectingVideoRect;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (struct VideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Mode { unsigned int x_4_1_1; } x4; struct Mode { unsigned int x_5_1_1; } x5; struct Ref<WebCore::PlaybackSessionInterfaceAVKit, WTF::DumbPtrTraits<WebCore::PlaybackSessionInterfaceAVKit> > { struct PlaybackSessionInterfaceAVKit {} *x_6_1_1; } x6; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x_7_1_1; } x7; struct RetainPtr<WebAVPlayerViewController> { void *x_8_1_1; } x8; struct WeakPtr<WebCore::VideoFullscreenModel> { struct RefPtr<WTF::WeakReference<WebCore::VideoFullscreenModel>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::VideoFullscreenModel> > > { struct WeakReference<WebCore::VideoFullscreenModel> {} *x_1_2_1; } x_9_1_1; } x9; struct WeakPtr<WebCore::VideoFullscreenChangeObserver> { struct RefPtr<WTF::WeakReference<WebCore::VideoFullscreenChangeObserver>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::VideoFullscreenChangeObserver> > > { struct WeakReference<WebCore::VideoFullscreenChangeObserver> {} *x_1_2_1; } x_10_1_1; } x10; }*)fullscreenInterface;
- (id)init;
- (bool)isReadyForDisplay;
- (void)layoutSublayers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })modelVideoLayerFrame;
- (id)pixelBufferAttributes;
- (id)playerController;
- (void)resolveBounds;
- (void)setFullscreenInterface:(struct VideoFullscreenInterfaceAVKit { int (**x1)(); int (**x2)(); struct atomic<unsigned int> { unsigned int x_3_1_1; } x3; struct Mode { unsigned int x_4_1_1; } x4; struct Mode { unsigned int x_5_1_1; } x5; struct Ref<WebCore::PlaybackSessionInterfaceAVKit, WTF::DumbPtrTraits<WebCore::PlaybackSessionInterfaceAVKit> > { struct PlaybackSessionInterfaceAVKit {} *x_6_1_1; } x6; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x_7_1_1; } x7; struct RetainPtr<WebAVPlayerViewController> { void *x_8_1_1; } x8; struct WeakPtr<WebCore::VideoFullscreenModel> { struct RefPtr<WTF::WeakReference<WebCore::VideoFullscreenModel>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::VideoFullscreenModel> > > { struct WeakReference<WebCore::VideoFullscreenModel> {} *x_1_2_1; } x_9_1_1; } x9; struct WeakPtr<WebCore::VideoFullscreenChangeObserver> { struct RefPtr<WTF::WeakReference<WebCore::VideoFullscreenChangeObserver>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::VideoFullscreenChangeObserver> > > { struct WeakReference<WebCore::VideoFullscreenChangeObserver> {} *x_1_2_1; } x_10_1_1; } x10; }*)arg1;
- (void)setModelVideoLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPixelBufferAttributes:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setReadyForDisplay:(bool)arg1;
- (void)setVideoDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setVideoGravity:(id)arg1;
- (void)setVideoSublayer:(id)arg1;
- (struct CGSize { double x1; double x2; })videoDimensions;
- (id)videoGravity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoRect;
- (id)videoSublayer;

@end
