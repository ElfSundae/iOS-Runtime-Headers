/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGLayerHostView : UIView {
    _UIRemoteView * _remoteView;
    BKSTouchDeliveryPolicyAssertion * _touchDeliveryPolicyAssertion;
}

@property (nonatomic, retain) PGHostedWindowHostingHandle *hostedWindowHostingHandle;
@property (nonatomic) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } layerHostTransform;

- (void).cxx_destruct;
- (void)_manageSharingOfTouchesBetweenClientAndHostContext;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)hostedWindowHostingHandle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })layerHostTransform;
- (void)setHostedWindowHostingHandle:(id)arg1;
- (void)setLayerHostTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;

@end
