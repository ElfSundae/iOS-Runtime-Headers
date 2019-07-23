/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextInteractionAssistant : NSObject <UIGestureRecognizerDelegate, UIResponderStandardEditActions, _UIKeyboardTextSelectionGestureControllerDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    }  _autoscrollBasePoint;
    float  _autoscrollFactor;
    int  _autoscrollRamp;
    struct CGPoint { 
        float x; 
        float y; 
    }  _autoscrollUntransformedExtentPoint;
    BOOL  _autoscrolled;
    UIGestureRecognizer * _doubleTapGesture;
    BOOL  _externalTextInput;
    NSHashTable * _gestureRecognizerViews;
    UILongPressGestureRecognizer * _highlightGesture;
    BOOL  _inGesture;
    BOOL  _isTryingToHighlightLink;
    double  _lastTapTimestamp;
    NSMutableSet * _linkGestures;
    UITapGestureRecognizer * _linkTapGesture;
    UILongPressGestureRecognizer * _loupeGesture;
    struct CGPoint { 
        float x; 
        float y; 
    }  _loupeGestureEndPoint;
    BOOL  _needsGestureUpdate;
    UIGestureRecognizer * _previewGesture;
    UIPreviewItemController * _previewItemController;
    int  _previousRepeatedGranularity;
    NSMutableArray * _recognizers;
    UIGestureRecognizer * _revealGesture;
    UITextSelectionView * _selectionView;
    UITapGestureRecognizer * _singleTapGesture;
    UILongPressGestureRecognizer * _tapAndHoldGesture;
    UITextChecker * _textChecker;
    _UIKeyboardTextSelectionController * _textSelectionController;
    _UIKeyboardBasedNonEditableTextSelectionGestureController * _textSelectionGestureController;
    UIResponder<UITextInput> * _view;
    BOOL  _willHandoffLoupeMagnifier;
}

@property (nonatomic) struct CGPoint { float x1; float x2; } autoscrollUntransformedExtentPoint;
@property (nonatomic) BOOL autoscrolled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) UIGestureRecognizer *doubleTapGesture;
@property (nonatomic, retain) UIGestureRecognizer *doubleTapGesture;
@property (nonatomic, readonly) BOOL externalTextInput;
@property (nonatomic, readonly) UIFieldEditor *fieldEditor;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL inGesture;
@property (nonatomic, readonly, retain) UILongPressGestureRecognizer *loupeGesture;
@property (nonatomic, retain) UILongPressGestureRecognizer *loupeGesture;
@property (nonatomic) struct CGPoint { float x1; float x2; } loupeGestureEndPoint;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) UITextSelectionView *selectionView;
@property (nonatomic, readonly, retain) UITapGestureRecognizer *singleTapGesture;
@property (nonatomic, retain) UITapGestureRecognizer *singleTapGesture;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIKeyboardTaskQueue *taskQueue;
@property (nonatomic, readonly) UIResponder<UITextInput> *textDocument;
@property (nonatomic, readonly) _UIKeyboardTextSelectionController *textSelectionController;
@property (nonatomic, readonly) double timestampOfLastTouchesEnded;
@property (nonatomic, readonly) UIResponder<UITextInput> *view;
@property (nonatomic, readonly) BOOL willHandoffLoupeMagnifier;

+ (int)_nextGranularityInCycle:(int)arg1;

- (void).cxx_destruct;
- (void)_addOneFingerForceGestures:(id)arg1 toView:(id)arg2;
- (id)_asText;
- (void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting;
- (id)_scrollable;
- (id)_selectionView;
- (BOOL)_shouldObscureTextInput;
- (void)activateSelection;
- (id)addDragRecognizer;
- (void)addGestureRecognizersToView:(id)arg1;
- (id)addHighlightLinkRecognizerToView:(id)arg1;
- (void)addKeyboardTextSelectionGestureRecognizersToView:(id)arg1;
- (id)addLinkTapGestureToView:(id)arg1;
- (id)addLoupeGestureRecognizer:(BOOL)arg1 toView:(id)arg2;
- (void)addNonEditableForceTextSelectionGestureRecognizersToView:(id)arg1;
- (id)addOneFingerDoubleTapRecognizer:(SEL)arg1 toView:(id)arg2;
- (id)addOneFingerDoubleTapRecognizerToView:(id)arg1;
- (id)addOneFingerTapRecognizer:(SEL)arg1 toView:(id)arg2;
- (id)addOneFingerTapRecognizerToView:(id)arg1;
- (id)addOneFingerTripleTapRecognizerToView:(id)arg1;
- (id)addPhraseBoundaryGestureRecognizerToView:(id)arg1;
- (void)addPreviewGestureRecognizerToView:(id)arg1;
- (id)addSelectionTapRecognizer:(SEL)arg1 toView:(id)arg2;
- (id)addSelectionTapRecognizerToView:(id)arg1;
- (id)addTapAndAHalfRecognizerToView:(id)arg1;
- (id)addTapAndHoldOnLinkRecognizerToView:(id)arg1;
- (id)addTwoFingerRangedSelectRecognizerToView:(id)arg1;
- (id)addTwoFingerSingleTapRecognizerToView:(id)arg1;
- (void)attach;
- (struct CGPoint { float x1; float x2; })autoscrollUntransformedExtentPoint;
- (void)autoscrollWillNotStart;
- (BOOL)autoscrolled;
- (void)beginFloatingCursorAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)canBeginDragCursor:(id)arg1;
- (void)cancelAutoscroll;
- (void)cancelInteractionWithLink;
- (void)checkEditabilityAndSetFirstResponderIfNecessary;
- (void)clearGestureRecognizers;
- (void)clearGestureRecognizers:(BOOL)arg1;
- (void)clearSelection;
- (void)confirmMarkedText:(id)arg1;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)containerAllowsSelection;
- (BOOL)containerAllowsSelectionTintOnly;
- (BOOL)containerChangesSelectionOnOneFingerTap;
- (BOOL)containerIsAtom;
- (BOOL)containerIsBrowserView;
- (BOOL)containerIsPlainStyleAtom;
- (BOOL)containerIsTextField;
- (void)deactivateSelection;
- (void)dealloc;
- (void)detach;
- (void)detach:(BOOL)arg1;
- (void)didEndGesture;
- (void)didEndScrollingOverflow;
- (void)didEndSelectionInteraction;
- (void)disableClearsOnInsertion;
- (float)distanceBetweenPoint:(struct CGPoint { float x1; float x2; })arg1 andRange:(id)arg2;
- (id)doubleTapGesture;
- (void)doubleTapInUneditable:(id)arg1;
- (void)endFloatingCursor;
- (BOOL)externalTextInput;
- (id)fieldEditor;
- (id)generatorForRange:(id)arg1 withOptions:(unsigned int)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)hasReplacements;
- (BOOL)inGesture;
- (id)initWithResponder:(id)arg1;
- (id)initWithView:(id)arg1;
- (BOOL)isInteractingWithLink;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (void)legacyTwoFingerSingleTap:(id)arg1;
- (id)linkInteractionView;
- (void)linkTapRecognizer:(id)arg1;
- (void)longDelayRecognizer:(id)arg1;
- (id)loupeGesture;
- (void)loupeGesture:(id)arg1;
- (struct CGPoint { float x1; float x2; })loupeGestureEndPoint;
- (id)loupeGestureRecognizer:(BOOL)arg1;
- (void)loupeGestureWithState:(int)arg1 atGesturePoint:(id /* block */)arg2 shouldCancel:(BOOL*)arg3;
- (void)loupeMagnifierWithState:(int)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)notifyKeyboardSelectionChanged;
- (void)oneFingerDoubleTap:(id)arg1;
- (id)oneFingerDoubleTapRecognizer:(SEL)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)oneFingerTapInUneditable:(id)arg1;
- (id)oneFingerTapRecognizer:(SEL)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (void)oneFingerTripleTap:(id)arg1;
- (id)oneFingerTripleTapRecognizer;
- (id)phraseBoundaryGestureRecognizer;
- (id)rangeForTextReplacement:(id)arg1;
- (void)rangeSelectionCanceled;
- (void)rangeSelectionEnded:(struct CGPoint { float x1; float x2; })arg1;
- (void)rangeSelectionMoved:(struct CGPoint { float x1; float x2; })arg1 withTouchPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)rangeSelectionStarted:(struct CGPoint { float x1; float x2; })arg1;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)rangedMagnifierWithState:(int)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)removeGestureRecognizersFromView:(id)arg1;
- (BOOL)requiresImmediateUpdate;
- (void)resetGestureRecognizersForLinkInteraction;
- (void)resetWillHandoffLoupeMagnifier;
- (void)resignedFirstResponder;
- (void)scheduleChineseTransliteration;
- (void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
- (void)scheduleReplacements;
- (void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned int)arg2;
- (void)scheduleReplacementsWithOptions:(unsigned int)arg1;
- (void)scrollSelectionToVisible;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (id)scrollView;
- (void)selectAll:(id)arg1;
- (void)selectWord;
- (void)selectWordWithoutShowingCommands;
- (void)selectionAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)selectionChanged;
- (BOOL)selectionRectsContainPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)selectionTapRecognizer:(SEL)arg1;
- (id)selectionView;
- (void)setAutoscrollUntransformedExtentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setAutoscrolled:(BOOL)arg1;
- (void)setDoubleTapGesture:(id)arg1;
- (void)setFirstResponderIfNecessary;
- (void)setGestureRecognizers;
- (void)setHybridSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setInGesture:(BOOL)arg1;
- (void)setLoupeGesture:(id)arg1;
- (void)setLoupeGestureEndPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSingleTapGesture:(id)arg1;
- (void)setWillHandoffLoupeMagnifier;
- (BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 toBegin:(BOOL)arg3;
- (BOOL)shouldHandleFormGestureAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (BOOL)shouldIgnoreLinkGestures;
- (BOOL)shouldSuppressSelectionCommands;
- (id)singleTapGesture;
- (void)smallDelayRecognizer:(id)arg1;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)swallowsDoubleTapWithScale:(float)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)tapAndAHalf:(id)arg1;
- (id)tapAndAHalfRecognizer;
- (BOOL)tapOnLinkWithGesture:(id)arg1;
- (id)taskQueue;
- (id)textDocument;
- (id)textSelectionController;
- (id)textSelectionView;
- (void)toggleSelectionCommands;
- (void)turnOffDrawsAsAtomIfPlainStyleAtom;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (id)twoFingerRangedSelectRecognizer;
- (id)twoFingerTapRecognizerWithTapCount:(unsigned int)arg1 action:(SEL)arg2;
- (void)updateAutoscroll:(id)arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
- (BOOL)useGesturesForEditableContent;
- (id)view;
- (BOOL)viewCouldBecomeEditable:(id)arg1;
- (void)willBeginGesture;
- (void)willBeginSelectionInteraction;
- (BOOL)willHandoffLoupeMagnifier;
- (void)willStartScrollingOverflow;

@end
