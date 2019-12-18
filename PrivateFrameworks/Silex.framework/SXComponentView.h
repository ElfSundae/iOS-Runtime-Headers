/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentView : UIView <SXAXAssistiveTechStatusChangeListener, SXComponentInteractable, SXTextCanvasRenderSource, SXTransitionableComponentView, UIGestureRecognizerDelegate> {
    <SXDOMObjectProviding> * _DOMObjectProvider;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _absoluteFrame;
    bool  _allowViewHierarchyRemoval;
    bool  _animationsAndBehaviorsEnabled;
    UIView * _backgroundView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _backgroundViewFrame;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _borderInsets;
    <SXComponent> * _component;
    <SXComponentHosting> * _componentHost;
    unsigned long long  _componentIndex;
    <SXComponentLayout> * _componentLayout;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _componentLayoutMargins;
    <SXComponentStyle> * _componentStyle;
    <SXComponentStyleRenderer> * _componentStyleRenderer;
    <SXComponentStyleRendererFactory> * _componentStyleRendererFactory;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    UIView * _contentView;
    SXColumnLayout * _documentColumnLayout;
    SXFillView * _fillView;
    bool  _hasAnimation;
    bool  _hasBehaviors;
    bool  _hasRenderedComponentStyle;
    bool  _hasRenderedContents;
    UIView * _highlightView;
    bool  _highlighted;
    bool  _isDraggable;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalFrame;
    struct { 
        bool size; 
        bool position; 
    }  _presentationChanges;
    <SXPresentationDelegate> * _presentationDelegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _presentationFrame;
    long long  _presentationState;
    bool  _requiresThoroughFrameCalculations;
    SXUnitConverter * _unitConverter;
    SXViewport * _viewport;
    long long  _visibilityState;
}

@property (nonatomic, readonly) <SXDOMObjectProviding> *DOMObjectProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } absoluteFrame;
@property (nonatomic) bool allowViewHierarchyRemoval;
@property (nonatomic) bool animationsAndBehaviorsEnabled;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } backgroundViewFrame;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderInsets;
@property (nonatomic, readonly) <SXComponent> *component;
@property (nonatomic) <SXComponentHosting> *componentHost;
@property (nonatomic) unsigned long long componentIndex;
@property (nonatomic, readonly) <SXComponentLayout> *componentLayout;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } componentLayoutMargins;
@property (nonatomic, retain) <SXComponentStyle> *componentStyle;
@property (nonatomic, readonly) <SXComponentStyleRenderer> *componentStyleRenderer;
@property (nonatomic, readonly) <SXComponentStyleRendererFactory> *componentStyleRendererFactory;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SXColumnLayout *documentColumnLayout;
@property (nonatomic) SXFillView *fillView;
@property (nonatomic) bool hasAnimation;
@property (nonatomic) bool hasBehaviors;
@property (nonatomic) bool hasRenderedComponentStyle;
@property (nonatomic, readonly) bool hasRenderedContents;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *highlightView;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) bool isDraggable;
@property (nonatomic, readonly) bool isTransitionable;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } originalFrame;
@property (nonatomic) struct { bool x1; bool x2; } presentationChanges;
@property (nonatomic, readonly) <SXPresentationDelegate> *presentationDelegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } presentationFrame;
@property (nonatomic) long long presentationState;
@property (nonatomic) bool requiresThoroughFrameCalculations;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitionContainerFrame;
@property (nonatomic, readonly) UIView *transitionContainerView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitionContentFrame;
@property (nonatomic, readonly) UIView *transitionContentView;
@property (nonatomic, readonly) bool transitionViewIsVisible;
@property (nonatomic, readonly) bool transitionViewShouldFadeInContent;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitionVisibleFrame;
@property (nonatomic, readonly) SXUnitConverter *unitConverter;
@property (nonatomic, readonly) SXViewport *viewport;
@property (nonatomic) long long visibilityState;

- (void).cxx_destruct;
- (id)DOMObjectProvider;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })absoluteFrame;
- (bool)allowHierarchyRemoval;
- (bool)allowViewHierarchyRemoval;
- (void)animationDidFinish:(id)arg1;
- (void)animationDidStart:(id)arg1;
- (bool)animationsAndBehaviorsEnabled;
- (void)assistiveTechnologyStatusDidChange;
- (id)backgroundView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundViewFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderInsets;
- (id)classification;
- (id)component;
- (id)componentHost;
- (unsigned long long)componentIndex;
- (id)componentLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })componentLayoutMargins;
- (id)componentStyle;
- (id)componentStyleRenderer;
- (id)componentStyleRendererFactory;
- (void)configure;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)contentView;
- (id)contentViewForBehavior:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)didApplyBehavior:(id)arg1;
- (void)didMoveToWindow;
- (void)didReceiveMemoryWarning;
- (void)discardContents;
- (id)documentColumnLayout;
- (id)fillView;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureShouldBegin:(id)arg1;
- (bool)hasAnimation;
- (bool)hasBehaviors;
- (bool)hasRenderedComponentStyle;
- (bool)hasRenderedContents;
- (id)highlightView;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4;
- (void)invalidateComponentStyle;
- (bool)isDraggable;
- (bool)isHighlighted;
- (bool)isTransitionable;
- (void)loadComponent:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originalFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originalFrameForContentView:(id)arg1 behavior:(id)arg2;
- (void)prepareComponentStyleRendererForStyle:(id)arg1;
- (void)prepareForTransitionType:(unsigned long long)arg1;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; })arg1;
- (struct { bool x1; bool x2; })presentationChanges;
- (id)presentationDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationFrame;
- (long long)presentationState;
- (void)provideInfosLayoutTo:(id)arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)renderComponentStyle;
- (void)renderContents;
- (void)renderContentsIfNeeded;
- (bool)requiresThoroughFrameCalculations;
- (void)restoreBehavior;
- (void)setAbsoluteFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAllowViewHierarchyRemoval:(bool)arg1;
- (void)setAnimationsAndBehaviorsEnabled:(bool)arg1;
- (void)setBackgroundViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBorderInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setComponentHost:(id)arg1;
- (void)setComponentIndex:(unsigned long long)arg1;
- (void)setComponentLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setComponentStyle:(id)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDocumentColumnLayout:(id)arg1;
- (void)setFillView:(id)arg1;
- (void)setHasAnimation:(bool)arg1;
- (void)setHasBehaviors:(bool)arg1;
- (void)setHasRenderedComponentStyle:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOriginalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPresentationChanges:(struct { bool x1; bool x2; })arg1;
- (void)setPresentationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPresentationState:(long long)arg1;
- (void)setRequiresThoroughFrameCalculations:(bool)arg1;
- (void)setVisibilityState:(long long)arg1;
- (void)setupComponentStyleRendererForStyle:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContainerFrame;
- (id)transitionContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContentFrame;
- (id)transitionContentView;
- (bool)transitionViewIsVisible;
- (bool)transitionViewShouldFadeInContent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionVisibleFrame;
- (id)unitConverter;
- (void)updateAllowHierarchyRemovalWithComponent:(id)arg1 componentStyle:(id)arg2;
- (bool)userInteractable;
- (bool)usesThumbnailWithImageIdentifier:(id)arg1;
- (id)viewport;
- (long long)visibilityState;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (void)willPresentComponentWithChanges:(struct { bool x1; bool x2; })arg1;

@end
