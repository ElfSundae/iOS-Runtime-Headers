/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICalloutBar : UIView {
    int m_arrowDirection;
    float m_availableSpaceOnLeft;
    float m_availableSpaceOnRight;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_controlFrame;
    NSDictionary *m_currentAppearOrFadeContext;
    int m_currentPage;
    NSMutableArray *m_currentSystemButtons;
    id m_delegate;
    BOOL m_didPromptForReplace;
    NSMutableArray *m_extraButtons;
    NSArray *m_extraItems;
    BOOL m_fadeAfterCommand;
    double m_fadedTime;
    BOOL m_ignoreFade;
    UICalloutBarButton *m_nextButton;
    UICalloutBarBackground *m_overlay;
    int m_pageCount;
    struct CGPoint { 
        float x; 
        float y; 
    } m_pointAboveControls;
    struct CGPoint { 
        float x; 
        float y; 
    } m_pointBelowControls;
    struct CGPoint { 
        float x; 
        float y; 
    } m_pointLeftOfControls;
    struct CGPoint { 
        float x; 
        float y; 
    } m_pointRightOfControls;
    UICalloutBarButton *m_previousButton;
    BOOL m_recalcVisibleItems;
    NSMutableArray *m_rectsToEvade;
    NSArray *m_replacements;
    id m_responderTarget;
    BOOL m_showAllReplacements;
    BOOL m_suppressesAppearance;
    float m_supressedHorizontalMovementX;
    BOOL m_supressesHorizontalMovement;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_supressesHorizontalMovementFrame;
    NSArray *m_systemButtonDescriptions;
    int m_targetDirection;
    BOOL m_targetHorizontal;
    struct CGPoint { 
        float x; 
        float y; 
    } m_targetPoint;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_targetRect;
    NSString *m_untruncatedString;
}

@property (nonatomic) int arrowDirection;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } controlFrame;
@property (nonatomic, retain) NSDictionary *currentAppearOrFadeContext;
@property (nonatomic) id delegate;
@property (nonatomic, copy) NSArray *extraItems;
@property (nonatomic) struct CGPoint { float x1; float x2; } pointAboveControls;
@property (nonatomic) struct CGPoint { float x1; float x2; } pointBelowControls;
@property (nonatomic) struct CGPoint { float x1; float x2; } pointLeftOfControls;
@property (nonatomic) struct CGPoint { float x1; float x2; } pointRightOfControls;
@property (nonatomic, readonly) NSArray *rectsToEvade;
@property (nonatomic, copy) NSArray *replacements;
@property (nonatomic) UIResponder *responderTarget;
@property (nonatomic) BOOL showAllReplacements;
@property (nonatomic) BOOL suppressesAppearance;
@property (nonatomic) BOOL supressesHorizontalMovement;
@property (nonatomic) int targetDirection;
@property (nonatomic) BOOL targetHorizontal;
@property (nonatomic) struct CGPoint { float x1; float x2; } targetPoint;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } targetRect;
@property (nonatomic, copy) NSString *untruncatedString;
@property (nonatomic, readonly) BOOL visible;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (void)_releaseSharedInstance;
+ (id)activeCalloutBar;
+ (void)fadeSharedCalloutBar;
+ (void)hideSharedCalloutBar;
+ (id)sharedCalloutBar;
+ (BOOL)sharedCalloutBarIsVisible;

- (void).cxx_destruct;
- (void)_endOngoingAppearOrFadeAnimations;
- (void)_fadeAfterCommand:(SEL)arg1;
- (void)_showNextItems:(id)arg1;
- (void)_showPreviousItems:(id)arg1;
- (BOOL)_touchesInsideShouldHideCalloutBar;
- (BOOL)_updateVisibleItemsAnimated:(BOOL)arg1;
- (void)addRectToEvade:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)adjustFrameToAvoidDividerOnArrow;
- (void)appear;
- (void)appearAnimationDidStopWithContext:(id)arg1;
- (void)applicationDidAddDeactivationReason:(id)arg1;
- (int)arrowDirection;
- (void)buttonHighlighted:(id)arg1 highlighted:(BOOL)arg2;
- (BOOL)calculateControlFrameForCalloutSize:(struct CGSize { float x1; float x2; })arg1 below:(BOOL)arg2;
- (BOOL)calculateControlFrameForCalloutSize:(struct CGSize { float x1; float x2; })arg1 right:(BOOL)arg2;
- (BOOL)calculateControlFrameInsideTargetRect:(struct CGSize { float x1; float x2; })arg1;
- (void)clearEvadeRects;
- (void)clearReplacements;
- (void)clearSupressesHorizontalMovementFrame;
- (void)configureButtons:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })controlFrame;
- (id)currentAppearOrFadeContext;
- (void)dealloc;
- (id)delegate;
- (id)extraItems;
- (void)fadeAnimationDidStopWithContext:(id)arg1 finished:(BOOL)arg2;
- (BOOL)hasReplacements;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })pointAboveControls;
- (struct CGPoint { float x1; float x2; })pointBelowControls;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })pointLeftOfControls;
- (struct CGPoint { float x1; float x2; })pointRightOfControls;
- (BOOL)recentlyFaded;
- (BOOL)rectClear:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)rectsToEvade;
- (void)removeFromSuperview;
- (id)replacements;
- (void)resetPage;
- (id)responderTarget;
- (void)setArrowDirection:(int)arg1;
- (void)setControlFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCurrentAppearOrFadeContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtraItems:(id)arg1;
- (BOOL)setFrameForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPointAboveControls:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPointBelowControls:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPointLeftOfControls:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPointRightOfControls:(struct CGPoint { float x1; float x2; })arg1;
- (void)setReplacements:(id)arg1;
- (void)setResponderTarget:(id)arg1;
- (void)setShowAllReplacements:(BOOL)arg1;
- (void)setSuppressesAppearance:(BOOL)arg1;
- (void)setSupressesHorizontalMovement:(BOOL)arg1;
- (void)setTargetDirection:(int)arg1;
- (void)setTargetHorizontal:(BOOL)arg1;
- (void)setTargetPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 arrowDirection:(int)arg2;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 pointBelowControls:(struct CGPoint { float x1; float x2; })arg2 pointAboveControls:(struct CGPoint { float x1; float x2; })arg3;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 pointLeftOfControls:(struct CGPoint { float x1; float x2; })arg2 pointRightOfControls:(struct CGPoint { float x1; float x2; })arg3;
- (void)setUntruncatedString:(id)arg1;
- (void)show;
- (BOOL)showAllReplacements;
- (BOOL)suppressesAppearance;
- (float)supressHorizontalXMovementIfNeededForPoint:(struct CGPoint { float x1; float x2; })arg1 proposedX:(float)arg2;
- (BOOL)supressesHorizontalMovement;
- (int)targetDirection;
- (id)targetForAction:(SEL)arg1;
- (BOOL)targetHorizontal;
- (struct CGPoint { float x1; float x2; })targetPoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetRect;
- (int)textEffectsVisibilityLevel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textEffectsWindowBoundsWithoutStatusBar;
- (id)untruncatedString;
- (void)update;
- (void)updateAnimated:(BOOL)arg1;
- (void)updateForCurrentPage;
- (BOOL)visible;

// Image: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak

+ (Class)safeCategoryBaseClass;

- (void)buttonPressed:(id)arg1;
- (void)fade;
- (void)hide;
- (void)updateAvailableButtons;

@end
