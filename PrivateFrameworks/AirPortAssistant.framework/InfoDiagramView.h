/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface InfoDiagramView : UIView <InfoDiagramCablingAnchorDelegate> {
    UIView * animatingCablingFrameView;
    AUImageView * broadbandImageView;
    AULabel * broadbandLabel;
    UIView * fixedCablingFrameView;
    AUImageView * insetImageView;
    AULabel * internetLabel;
    AULabel * portLabel;
    AUImageView * replacementBaseImageView;
    AULabel * replacementBaseLabel;
    unsigned int  replacementProductID;
    int  sizeClass;
    unsigned int  wanBaseProductID;
    AUImageView * wanConnectedBaseImageView;
    AULabel * wanConnectedBaseLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (struct CGPoint { float x1; float x2; })broadbandInPoint;
- (struct CGPoint { float x1; float x2; })broadbandOutPoint;
- (void)commonInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 wanConnectedBaseProductID:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 wanConnectedBaseProductID:(unsigned int)arg2 replacementProductID:(unsigned int)arg3;
- (struct CGPoint { float x1; float x2; })internetPoint;
- (void)setWANConnectedBaseLabelString:(id)arg1;
- (void)startAnimatingCablingLayer;
- (void)stopAnimatingCablingLayer;
- (struct CGPoint { float x1; float x2; })swapArcControlPoint;
- (struct CGPoint { float x1; float x2; })swapArcControlPoint1;
- (struct CGPoint { float x1; float x2; })swapArcControlPoint2;
- (struct CGPoint { float x1; float x2; })swapArcLineEndPoint;
- (struct CGPoint { float x1; float x2; })swapArcLineStartPoint;
- (struct CGPoint { float x1; float x2; })wanConnectedBaseWANPoint;

@end
