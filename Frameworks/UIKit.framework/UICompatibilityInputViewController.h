/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICompatibilityInputViewController : UIInputViewController <_UIKBDelegateAwareInputController> {
    UIKeyboard * _deferredSystemView;
    UIKeyboardInputMode * _incomingExtensionInputMode;
    double  _incomingExtensionInputModeTime;
    UIViewController * _inputController;
    UIKeyboardInputMode * _inputMode;
    double  _lastSuspendedTime;
    double  _resetInputModeTime;
    BOOL  _shouldRegenerateSizingConstraints;
    BOOL  _shouldSuppressRemoteInputController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIViewController *inputController;
@property (readonly) Class superclass;

+ (BOOL)_requiresProxyInterface;
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;
+ (id)deferredInputModeControllerWithKeyboard:(id)arg1;
+ (id)inputSnapshotViewForInputMode:(id)arg1 orientation:(int)arg2;
+ (id)inputViewControllerWithView:(id)arg1;

- (id)_compatView;
- (id)_compatibilityController;
- (id)_initAsDeferredController;
- (id)_keyboard;
- (id)_keyboardForThisViewController;
- (id)_systemViewControllerForInputMode:(id)arg1;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;
- (void)addSnapshotViewForInputMode:(id)arg1;
- (void)assertCurrentInputModeIfNecessary;
- (id)childCompatibilityController;
- (void)dealloc;
- (void)didFinishTranslation;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)didSuspend:(id)arg1;
- (void)finishSplitTransition:(BOOL)arg1;
- (void)generateCompatibleSizeConstraintsIfNecessary;
- (id)inputController;
- (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;
- (void)killIncomingExtension;
- (void)loadView;
- (id)preferredFocusedItem;
- (void)rebuildChildConstraints;
- (void)removeSnapshotView;
- (void)resetInputMode;
- (void)resetInputModeInMainThread;
- (void)setInputController:(id)arg1;
- (void)setInputMode:(id)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)shouldUpdateInputMode:(id)arg1;
- (void)takeSnapshotView;
- (void)tearDownInputController;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willBeginTranslation;
- (void)willResume:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
