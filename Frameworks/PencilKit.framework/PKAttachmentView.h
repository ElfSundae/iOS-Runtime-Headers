/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKAttachmentView : UIView {
    NSArray * _additionalStrokes;
    bool  _contentHidden;
    PKDrawing * _drawing;
    NSMutableDictionary * _offscreenTiles;
    UIView * _tileContainerView;
    NSMutableDictionary * _tiles;
}

@property (nonatomic, retain) NSArray *additionalStrokes;
@property (nonatomic) bool contentHidden;
@property (nonatomic, copy) PKDrawing *drawing;
@property (nonatomic, readonly) double drawingScale;
@property (nonatomic, readonly) bool isAtEndOfDocument;
@property (nonatomic, readonly) NSMutableDictionary *offscreenTiles;
@property (nonatomic, retain) UIView *tileContainerView;
@property (nonatomic, readonly) UIView *tileMaskView;
@property (nonatomic, readonly) NSMutableDictionary *tiles;

- (void).cxx_destruct;
- (id)additionalStrokes;
- (bool)contentHidden;
- (bool)disableTileAnimations;
- (id)drawing;
- (void)drawingDidChange;
- (void)drawingDidEraseStrokes;
- (double)drawingScale;
- (void)drawingWillBegin;
- (void)fingerDrawingEnabledDidChange;
- (void)fullyRendered;
- (double)heightFromDrawing:(id)arg1 delta:(double)arg2;
- (bool)hitByTouchLocation:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)hitChrome:(struct CGPoint { double x1; double x2; })arg1 isStylus:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 drawing:(id)arg2;
- (bool)isAtEndOfDocument;
- (void)layoutSubviews;
- (id)offscreenTiles;
- (void)pixelAlignForContentScale:(double)arg1 enclosingScrollView:(id)arg2;
- (void)setAdditionalStrokes:(id)arg1;
- (void)setContentHidden:(bool)arg1;
- (void)setDrawing:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTileContainerView:(id)arg1;
- (id)tileContainerView;
- (id)tileMaskView;
- (id)tiles;
- (void)updateDrawingHeight:(double)arg1;
- (void)updateDrawingHeight:(double)arg1 notifyDrawingDidChange:(bool)arg2;
- (void)updateFrameForTextContainer;
- (void)updateTileContainerViewFrame;
- (bool)wantsFullyRendered;

@end
