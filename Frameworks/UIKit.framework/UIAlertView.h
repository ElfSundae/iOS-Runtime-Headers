/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertView : UIView {
    BOOL __currentlyRunningModal;
    NSMutableArray *_actions;
    UIAlertController *_alertController;
    BOOL _alertControllerShouldDismiss;
    int _alertViewStyle;
    int _cancelIndex;
    id _context;
    int _defaultButtonIndex;
    id _delegate;
    BOOL _dismissingAlertController;
    UIViewController *_externalViewControllerForPresentation;
    int _firstOtherButtonIndex;
    BOOL _handlingAlertActionShouldDismiss;
    BOOL _hasPreparedAlertActions;
    BOOL _isPresented;
    NSString *_message;
    _UIAlertControllerShimPresenter *_presenter;
    UIAlertView *_retainedSelf;
    BOOL _runsModal;
    NSString *_subtitle;
}

@property (setter=_setCurrentlyRunningModal:, nonatomic) BOOL _currentlyRunningModal;
@property (nonatomic) int alertViewStyle;
@property (nonatomic) int cancelButtonIndex;
@property (nonatomic) id delegate;
@property (getter=_externalViewControllerForPresentation, setter=_setExternalViewControllerForPresentation:, nonatomic, retain) UIViewController *externalViewControllerForPresentation;
@property (nonatomic, readonly) int firstOtherButtonIndex;
@property (nonatomic) BOOL groupsTextFields;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) int numberOfButtons;
@property (nonatomic) BOOL showsOverSpringBoardAlerts;
@property (nonatomic, copy) NSString *title;
@property (getter=isVisible, nonatomic, readonly) BOOL visible;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_alertViewForSessionWithRemoteViewController:(id)arg1;
+ (id)_alertViewForWindow:(id)arg1;
+ (id)_alertWindow;
+ (BOOL)_isAlertControllerShimClass;
+ (id)_remoteAlertViewWithBlock:(id /* block */)arg1;
+ (void)_setSpringBoardAlertDisplayingOverApplicationAlert:(BOOL)arg1;
+ (BOOL)_springBoardAlertDisplayingOverApplicationAlert;
+ (void)applyTransformToAllAlerts:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
+ (struct CGSize { float x1; float x2; })minimumSize;

- (void).cxx_destruct;
- (id)_addButtonWithTitle:(id)arg1;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2 buttonClass:(Class)arg3;
- (id)_addButtonWithTitleText:(id)arg1;
- (id)_addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (id)_alertController;
- (void)_beginRunningModallyIfNecessary;
- (id)_buttonAtIndex:(int)arg1;
- (float)_buttonHeight;
- (BOOL)_canShowAlerts;
- (void)_changeButtonTitleAtIndex:(int)arg1 toTitle:(id)arg2;
- (int)_currentOrientation;
- (BOOL)_currentlyRunningModal;
- (id)_defaultButton;
- (id)_destructiveButton;
- (id)_dimView;
- (void)_dismissForTappedIndex:(int)arg1;
- (void)_endRunningModallyIfNecessary;
- (id)_externalViewControllerForPresentation;
- (BOOL)_isAnimating;
- (BOOL)_isSBAlert;
- (float)_maxHeight;
- (int)_maximumNumberOfTextFieldsForCurrentStyle;
- (void)_performPopup:(BOOL)arg1;
- (void)_performPresentationDismissalWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)_prepareAlertActions;
- (void)_prepareForDisplay;
- (void)_prepareToBeReplaced;
- (BOOL)_prepareToDismissForTappedIndex:(int)arg1;
- (id)_preparedAlertActionAtIndex:(unsigned int)arg1;
- (void)_presentSheetFromView:(id)arg1 above:(BOOL)arg2;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1;
- (id)_representedModalItem;
- (id)_representedModalItemView;
- (void)_setAccessoryView:(id)arg1;
- (void)_setAccessoryViewController:(id)arg1;
- (void)_setCurrentlyRunningModal:(BOOL)arg1;
- (void)_setDefaultButton:(id)arg1;
- (void)_setDestructiveButton:(id)arg1;
- (void)_setExternalViewControllerForPresentation:(id)arg1;
- (void)_setFirstOtherButtonIndex:(int)arg1;
- (void)_setIsPresented:(BOOL)arg1;
- (void)_setTextFieldsHidden:(BOOL)arg1;
- (BOOL)_shouldUseUndoStyle;
- (void)_showAnimated:(BOOL)arg1;
- (void)_showByReplacingAlert:(id)arg1 animated:(BOOL)arg2;
- (void)_showByReplacingPreviousAlertAnimated:(BOOL)arg1;
- (void)_textDidChangeInTextField:(id)arg1;
- (id)_titleLabel;
- (void)_updateButtonTitles;
- (void)_updateFirstOtherButtonEnabledState;
- (void)_updateFrameForDisplay;
- (void)_updateMessageAndSubtitle;
- (void)_useLegacyUI:(BOOL)arg1;
- (void)_useUndoStyle:(BOOL)arg1;
- (int)addButtonWithTitle:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (int)alertSheetStyle;
- (int)alertViewStyle;
- (struct CGSize { float x1; float x2; })backgroundSize;
- (int)bodyMaxLineCount;
- (id)bodyText;
- (id)bodyTextLabel;
- (id)buttonAtIndex:(int)arg1;
- (int)buttonCount;
- (id)buttonTitleAtIndex:(int)arg1;
- (int)cancelButtonIndex;
- (id)context;
- (void)dealloc;
- (id)defaultButton;
- (int)defaultButtonIndex;
- (id)delegate;
- (BOOL)dimsBackground;
- (void)dismiss;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (int)firstOtherButtonIndex;
- (BOOL)forceHorizontalButtonsLayout;
- (BOOL)groupsTextFields;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (BOOL)isBodyTextTruncated;
- (BOOL)isVisible;
- (id)keyboard;
- (void)layout;
- (void)layoutAnimated:(BOOL)arg1;
- (id)message;
- (int)numberOfButtons;
- (int)numberOfLinesInTitle;
- (int)numberOfRows;
- (void)popupAlertAnimated:(BOOL)arg1;
- (void)popupAlertAnimated:(BOOL)arg1 animationType:(int)arg2;
- (void)popupAlertAnimated:(BOOL)arg1 atOffset:(float)arg2;
- (void)presentSheetFromAboveView:(id)arg1;
- (void)presentSheetFromBehindView:(id)arg1;
- (void)presentSheetFromButtonBar:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)presentSheetToAboveView:(id)arg1;
- (void)replaceAlert:(id)arg1;
- (BOOL)requiresPortraitOrientation;
- (BOOL)runsModal;
- (void)setAlertSheetStyle:(int)arg1;
- (void)setAlertViewStyle:(int)arg1;
- (void)setBodyText:(id)arg1;
- (void)setBodyTextMaxLineCount:(int)arg1;
- (void)setCancelButtonIndex:(int)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaultButton:(id)arg1;
- (void)setDefaultButtonIndex:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimView:(id)arg1;
- (void)setDimsBackground:(BOOL)arg1;
- (void)setForceHorizontalButtonsLayout:(BOOL)arg1;
- (void)setGroupsTextFields:(BOOL)arg1;
- (void)setKeyboardShowsOnPopup:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setNumberOfRows:(int)arg1;
- (void)setRunsModal:(BOOL)arg1;
- (void)setShowsOverSpringBoardAlerts:(BOOL)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSuspendTag:(int)arg1;
- (void)setTableShouldShowMinimumContent:(BOOL)arg1;
- (void)setTaglineText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleMaxLineCount:(int)arg1;
- (void)show;
- (void)showWithAnimationType:(int)arg1;
- (BOOL)showsOverSpringBoardAlerts;
- (id)subtitle;
- (int)suspendTag;
- (BOOL)tableShouldShowMinimumContent;
- (id)tableView;
- (id)taglineTextLabel;
- (id)textField;
- (id)textFieldAtIndex:(int)arg1;
- (int)textFieldCount;
- (id)title;
- (id)titleLabel;
- (int)titleMaxLineCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRect;
- (id)window;

// Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI

- (void)showWithCompletionHandler:(id /* block */)arg1;

@end
