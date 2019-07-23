/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardAssistantBar : _UIGroupedBar {
    BOOL _hideAssistantBar;
    BOOL _shouldShow;
    UIKeyboardBIUImageGenerator *m_BIUImageGenerator;
    UITextInputAssistantItem *m_currentAssistantItem;
    UITextInputAssistantItem *m_defaultAssistantItem;
    UIBarButtonItemGroup *m_dismissGroup;
    BOOL m_isLandscape;
    BOOL m_lightKeyboard;
    BOOL m_needsDismissButton;
    UIBarButtonItemGroup *m_predictionGroup;
    NSLayoutConstraint *m_predictionWidthConstraint;
    BOOL m_show;
    BOOL m_useLargeButton;
}

@property (nonatomic) BOOL hideAssistantBar;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) BOOL show;

+ (id)activeInstance;
+ (float)assistantBarHeight;
+ (id)sharedInstance;

- (id)BIUGenerator;
- (SEL)action:(int)arg1;
- (float)assistantBarHeight;
- (float)assistantBarHeightForOrientation:(int)arg1;
- (float)assistantBarWidth;
- (void)assistantBold;
- (void)assistantCopy;
- (void)assistantCut;
- (void)assistantDismiss;
- (void)assistantItalic;
- (void)assistantPaste;
- (void)assistantRedo;
- (void)assistantUnderline;
- (void)assistantUndo;
- (id)barButtonItem:(unsigned int)arg1;
- (BOOL)canPerformAction:(int)arg1;
- (id)currentAssistantItem;
- (void)dealloc;
- (id)defaultAssistantItem;
- (void)dimKeys:(id)arg1;
- (BOOL)disabledByPrediction;
- (BOOL)enabled;
- (void)executeAction:(int)arg1;
- (BOOL)hasCustomButtons;
- (BOOL)hasItems;
- (BOOL)hideAssistantBar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)newAssistantItemWithDefaultItems;
- (void)setHideAssistantBar:(BOOL)arg1;
- (void)setInputAssistantButtonItems;
- (void)setInputAssistantButtonItemsForResponder:(id)arg1;
- (void)setShouldShow:(BOOL)arg1;
- (void)setShow:(BOOL)arg1;
- (BOOL)shouldShow;
- (BOOL)show;
- (BOOL)showSwitch;
- (float)sideBarWidthForOrientation:(int)arg1;
- (BOOL)statisticForCalloutBarButtonSelection:(id)arg1;
- (void)statisticForShortcutBarHideWithSwitcher;
- (void)updateBar;
- (void)updateBar:(BOOL)arg1;
- (void)updateButtons;

@end
