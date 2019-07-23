/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventAttendeesEditViewController : EKEditItemViewController {
    BOOL  _appendOnly;
    BOOL  _cancelTapped;
    BOOL  _disableShowingButtons;
    EKEvent * _event;
    EKEventAttendeePicker * _picker;
}

@property (nonatomic) BOOL appendOnly;
@property (nonatomic, copy) NSArray *attendees;
@property (nonatomic) BOOL disableShowingButtons;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (id)_attendeeFromRecipient:(id)arg1;
- (void)_cancelTapped:(id)arg1;
- (void)_doneTapped:(id)arg1;
- (id)_firstInvalidRecipientAddress;
- (id)_recipientFromAttendee:(id)arg1;
- (BOOL)appendOnly;
- (id)attendees;
- (BOOL)disableShowingButtons;
- (BOOL)editItemShouldBeAskedForInjectableViewController;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4;
- (BOOL)presentModally;
- (void)setAppendOnly:(BOOL)arg1;
- (void)setAttendees:(id)arg1;
- (void)setDisableShowingButtons:(BOOL)arg1;
- (void)setSearchAccountID:(id)arg1;
- (BOOL)validateAllowingAlert:(BOOL)arg1;
- (void)viewDidLoad;

@end
