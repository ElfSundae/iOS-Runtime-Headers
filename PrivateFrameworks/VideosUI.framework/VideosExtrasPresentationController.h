/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosExtrasPresentationController : UIPresentationController {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _extrasMenuBarFrame;
    UIView * _extrasMenuBarView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } extrasMenuBarFrame;
@property (nonatomic, retain) UIView *extrasMenuBarView;

- (void).cxx_destruct;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extrasMenuBarFrame;
- (id)extrasMenuBarView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 extrasMenuBarView:(id)arg3 extrasmenuBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)setExtrasMenuBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setExtrasMenuBarView:(id)arg1;

@end
