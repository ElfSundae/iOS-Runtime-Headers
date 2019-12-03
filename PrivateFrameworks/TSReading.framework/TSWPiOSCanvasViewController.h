/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPiOSCanvasViewController : TSDiOSCanvasViewController <UIDragInteractionDelegate, UITextInteractionDelegate, UITextLinkInteraction, _UINonEditableTextSelectionForceGestureDelegate> {
    TSWPTwoPartAction * _delayedTapAction;
    NSMutableArray * _gestureRecognizers;
    TSWPHardPressGestureRecognizer * _hardPressGesture;
    UIGestureRecognizer * _hyperlinkGestureRecognizer;
    TSWPRep * _interactionHyperLinkRep;
    TSWPHyperlinkField * _interactionHyperlinkField;
    bool  _isInteractingWithHyperLink;
    TSWPSwipeGestureRecognizer * _leftSwipeGestureRecognizer;
    bool  _linkInteractionIsLongPress;
    TSWPLongPressGestureRecognizer * _longPressGestureRecognizer;
    TSWPSwipeGestureRecognizer * _rightSwipeGestureRecognizer;
    UITapGestureRecognizer * _secondarySingleTapGestureRecognizer;
    UITextInteraction * _textInteraction;
}

@property (nonatomic, readonly) TSUColor *backgroundColorForMagnifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TSWPHardPressGestureRecognizer *hardPressGesture;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIGestureRecognizer *hyperlinkGestureRecognizer;
@property (readonly) TSWPInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic, readonly) TSWPLongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, readonly) UITapGestureRecognizer *secondarySingleTapGestureRecognizer;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextInteraction *textInteraction;
@property (nonatomic, readonly) TSWPSwipeGestureRecognizer *textLeftSwipeGestureRecognizer;
@property (nonatomic, readonly) TSWPSwipeGestureRecognizer *textRightSwipeGestureRecognizer;

- (void)_clearSelectedRange;
- (id)_dragItemsForInteraction:(id)arg1 session:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)_hitRepAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_hyperLinkFieldAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_resetAndClearInteractions;
- (void)_resetLinkInteraction;
- (bool)_shouldAllowInteractionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3;
- (void)addSwipeGestureRecognizers;
- (id)backgroundColorForMagnifier;
- (bool)canDisplayHyperlinkUI;
- (void)cancelDelayedTapAction;
- (void)cancelInteractionWithLink;
- (void)dealloc;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)finishDelayedTapAction;
- (void)gestureSequenceDidEnd;
- (void)gestureSequenceWillBegin;
- (id)hardPressGesture;
- (bool)hasDelayedTapAction;
- (id)hyperlinkGestureRecognizer;
- (id)hyperlinkUICustomStringForURLString:(id)arg1;
- (void)hyperlinkUIDidHide;
- (bool)hyperlinkUIShouldShow;
- (bool)hyperlinkUIShouldShowCustomUI;
- (void)hyperlinkUIShowCustomUIforRep:(id)arg1 field:(id)arg2;
- (void)hyperlinkUIWillShow;
- (void)interactionDidEnd:(id)arg1;
- (bool)interactionShouldBegin:(id)arg1;
- (bool)interactionShouldBegin:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)interactionShouldSuppressSystemUI:(id)arg1;
- (void)interactionWillBegin:(id)arg1;
- (id)interactiveCanvasController;
- (bool)isInteractingWithLink;
- (id)longPressGestureRecognizer;
- (bool)mightHaveLinks;
- (bool)onlyAllowTextSwipesWhenEditing;
- (void)p_addSwipeGestureRecognizer:(id)arg1 failRequiredFor:(id)arg2;
- (void)p_endHardPressGestureRecognizer;
- (void)p_handleHardPressGestureRecognizer:(id)arg1;
- (id)p_newSwipeGestureRecognizerWithDirection:(int)arg1 numberOfTouchesRequired:(unsigned int)arg2;
- (void)removeSwipeGestureRecognizers;
- (id)secondarySingleTapGestureRecognizer;
- (void)setHardPressGesture:(id)arg1;
- (void)setTextInteraction:(id)arg1;
- (void)setUpGestureDependenciesForNewCopyOfTextGesture:(id)arg1;
- (void)setUpGestureRecognizers;
- (bool)shouldAllowSelectionGestures:(bool)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 toBegin:(bool)arg3;
- (bool)shouldHideCanvasLayerInMagnifier;
- (void)startDelayedTapAction:(id)arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)tapLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)teardown;
- (id)textInteraction;
- (id)textLeftSwipeGestureRecognizer;
- (id)textRightSwipeGestureRecognizer;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willBeginGesture;
- (bool)willInteractWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
