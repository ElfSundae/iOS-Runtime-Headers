/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedCell : UICollectionViewCell <UIGestureRecognizerDelegate> {
    UITapGestureRecognizer *__tapGestureRecognizer;
    <PUFeedCellDelegate> *_delegate;
    struct CGPoint { 
        float x; 
        float y; 
    } _edgeParallaxOffset;
    NSIndexPath *_indexPath;
    struct CGPoint { 
        float x; 
        float y; 
    } _parallaxOffset;
    NSString *_representedElementKind;
    BOOL _tappable;
}

@property (setter=_setTapGestureRecognizer:, nonatomic, retain) UITapGestureRecognizer *_tapGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUFeedCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGPoint { float x1; float x2; } edgeParallaxOffset;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSIndexPath *indexPath;
@property (nonatomic) struct CGPoint { float x1; float x2; } parallaxOffset;
@property (nonatomic, retain) NSString *representedElementKind;
@property (readonly) Class superclass;
@property (getter=isTappable, nonatomic) BOOL tappable;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectWithAspectRatio:(float)arg1 fillingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 parallaxOffset:(struct CGPoint { float x1; float x2; })arg3 edgeParallaxOffset:(struct CGPoint { float x1; float x2; })arg4;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)_setTapGestureRecognizer:(id)arg1;
- (id)_tapGestureRecognizer;
- (void)_updateTapGestureRecognizer;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (struct CGPoint { float x1; float x2; })edgeParallaxOffset;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)indexPath;
- (BOOL)isTappable;
- (struct CGPoint { float x1; float x2; })parallaxOffset;
- (id)representedElementKind;
- (void)setDelegate:(id)arg1;
- (void)setEdgeParallaxOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setIndexPath:(id)arg1;
- (void)setParallaxOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRepresentedElementKind:(id)arg1;
- (void)setTappable:(BOOL)arg1;
- (BOOL)shouldRecognizerTap:(id)arg1;

@end