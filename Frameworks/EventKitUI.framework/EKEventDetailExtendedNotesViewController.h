/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailExtendedNotesViewController : UIViewController <EKEditItemViewControllerProtocol> {
    UITextView * _textView;
}

@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL useCustomBackButton;

- (void).cxx_destruct;
- (id)_textView;
- (id)init;
- (void)loadView;
- (id)notes;
- (void)setNotes:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;

@end
