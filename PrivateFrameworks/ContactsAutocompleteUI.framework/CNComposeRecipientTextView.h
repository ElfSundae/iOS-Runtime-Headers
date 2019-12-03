/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

@interface CNComposeRecipientTextView : CNComposeHeaderView <CNComposeRecipientAtomDelegate, CNRecipientDraggingDelegate, NSLayoutManagerDelegate, UITextViewDelegate> {
    UIButton * _addButton;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _addButtonFrame;
    UIView * _atomContainerView;
    NSMutableDictionary * _atomLayoutOptionsByRecipient;
    NSMutableDictionary * _atomPresentationOptionsByRecipient;
    long long  _atomViewAnimationDepth;
    NSMutableArray * _atomViews;
    UIFont * _baseFont;
    NSTimer * _collapsableUpdateTimer;
    bool  _collapsedStateInitialized;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentTextRect;
    bool  _didIgnoreFirstResponderResign;
    CNComposeDragSource * _dragSource;
    CNComposeDropTarget * _dropTarget;
    bool  _editable;
    bool  _enabled;
    bool  _expandRecipientsInNamedGroups;
    bool  _expanded;
    int  _hideLastAtomComma;
    UIColor * _inactiveTextColor;
    UITextView * _inactiveTextView;
    bool  _indicatesUnsafeRecipientsWhenCollapsed;
    bool  _isTextFieldCollapsed;
    long long  _maxRecipients;
    bool  _notifyDelegateOfSizeChange;
    bool  _parentIsClosing;
    _CNAtomTextAttachment * _placeholderAttachment;
    NSArray * _properties;
    NSMutableArray * _recipientsBeingRemoved;
    bool  _separatorHidden;
    bool  _showsAddButtonWhenExpanded;
    _CNAtomTextView * _textView;
    bool  _textViewExclusionPathsAreValid;
    double  _trailingButtonMidlineInsetFromLayoutMargin;
    UIColor * _typingTextColor;
    NSUndoManager * _undoManager;
    bool  _usingActiveAppearance;
}

@property (nonatomic, readonly) UIButton *addButton;
@property (nonatomic, copy) NSArray *addresses;
@property (nonatomic, readonly) UIView *atomContainerView;
@property (nonatomic, retain) UIFont *baseFont;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNComposeRecipientTextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didIgnoreFirstResponderResign;
@property (nonatomic) bool editable;
@property (nonatomic) bool enabled;
@property (nonatomic) bool expandRecipientsInNamedGroups;
@property (nonatomic) bool expanded;
@property (readonly) unsigned long long hash;
@property (nonatomic) int hideLastAtomComma;
@property (nonatomic, retain) UIColor *inactiveTextColor;
@property (nonatomic) bool indicatesUnsafeRecipientsWhenCollapsed;
@property (nonatomic) long long maxRecipients;
@property (nonatomic, readonly) unsigned long long numberOfRowsOfTextInField;
@property (nonatomic, readonly) double offsetForRowWithTextField;
@property (nonatomic, retain) _CNAtomTextAttachment *placeholderAttachment;
@property (nonatomic, copy) NSArray *recipients;
@property (getter=isSeparatorHidden, nonatomic) bool separatorHidden;
@property (nonatomic) bool showsAddButtonWhenExpanded;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) UITextView *textView;
@property (nonatomic) double trailingButtonMidlineInsetFromLayoutMargin;
@property (nonatomic, retain) UIColor *typingTextColor;
@property (nonatomic, readonly, copy) NSArray *uncommentedAddresses;
@property (nonatomic) bool usingActiveAppearance;

+ (id)defaultFont;

- (void).cxx_destruct;
- (void)_addAddressAtomSubview:(id)arg1;
- (void)_addButtonTapped:(id)arg1;
- (id)_atomAttachmentForRecipient:(id)arg1;
- (unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1;
- (id)_atomViewAtCharacterIndex:(unsigned long long)arg1;
- (id)_attributedStringWithAtomizedRecipients;
- (id)_baseAttributes;
- (void)_beginAtomViewAnimations;
- (bool)_canAddAdditionalAtoms;
- (bool)_delegateRespondsToSizeChange;
- (void)_didRemoveRecipient:(id)arg1;
- (void)_ensureAddButton;
- (void)_ensureInactiveTextView;
- (bool)_hasUnsafeRecipients;
- (void)_insertAtomAttachment:(id)arg1 andReplaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_insertAtomAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2;
- (void)_invalidateAtomPresentationOptionsCache;
- (void)_invalidateTextContainerExclusionPaths;
- (bool)_isAddButtonVisible;
- (bool)_isTextViewCollapsed;
- (void)_longPressGestureRecognized:(id)arg1;
- (void)_notifyDelegateOfNewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_notifyDelegateOfSizeChange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_placeholderAttachmentRange;
- (id)_placeholderAttachmentWithStaticWidth;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeForComposeRecipientAtom:(id)arg1;
- (void)_recomputeTextContainerExclusionPaths;
- (void)_removeAddressAtomSubview:(id)arg1;
- (void)_removeAllRecipients;
- (void)_resetSelectionState;
- (void)_setAddButtonVisible:(bool)arg1 animated:(bool)arg2;
- (void)_setTextViewIsCollapsed:(bool)arg1 animated:(bool)arg2;
- (void)_setValue:(id)arg1 forAtomLayoutOption:(id)arg2 withRecipient:(id)arg3;
- (bool)_shouldAnimateAtomViewChanges;
- (bool)_shouldEmbedLabelInTextView;
- (void)_tapGestureRecognized:(id)arg1;
- (id)_textContainerExclusionPathsWithAddButton:(bool)arg1;
- (bool)_textViewContainsAtomizedRecipients;
- (id)_toString;
- (void)_updateAddButtonVisibility;
- (void)_updateInactiveTextView;
- (bool)_useRightToLeftLayout;
- (id)_userEnteredTextWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (id)_valueForAtomLayoutOption:(id)arg1 withRecipient:(id)arg2;
- (void)addAddress:(id)arg1;
- (id)addButton;
- (void)addRecipient:(id)arg1;
- (void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(bool)arg3;
- (id)addresses;
- (id)atomContainerView;
- (void)atomTextView:(id)arg1 didChangeWritingDirection:(long long)arg2;
- (void)atomTextViewDidBecomeFirstResponder:(id)arg1;
- (void)atomTextViewDidResignFirstResponder:(id)arg1;
- (id)atomViewForRecipient:(id)arg1;
- (id)atomViewsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)baseFont;
- (bool)becomeFirstResponder;
- (void)clearText;
- (void)composeRecipientAtomDisambiguate:(id)arg1;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (bool)containsAddress:(id)arg1;
- (void)dealloc;
- (void)deselectComposeRecipientAtom:(id)arg1;
- (bool)didIgnoreFirstResponderResign;
- (void)dragEnteredAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dragExited;
- (void)dragMovedToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)dragPreviewForDraggedItem:(id)arg1 withContainer:(id)arg2;
- (void)dropItems:(id)arg1;
- (bool)editable;
- (bool)enabled;
- (bool)expandRecipientsInNamedGroups;
- (bool)expanded;
- (bool)finishEnteringRecipient;
- (bool)hasContent;
- (int)hideLastAtomComma;
- (id)inactiveTextColor;
- (unsigned long long)indexOfRecipientForInsertionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)indicatesUnsafeRecipientsWhenCollapsed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 dragDropDelegate:(id)arg2;
- (void)invalidateAtomPresentationOptions;
- (void)invalidateAtomPresentationOptionsForRecipient:(id)arg1;
- (bool)isFirstResponder;
- (bool)isSeparatorHidden;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(bool)arg3;
- (void)layoutSubviews;
- (long long)maxRecipients;
- (unsigned long long)numberOfRowsOfTextInField;
- (double)offsetForRowWithTextField;
- (void)parentDidClose;
- (void)parentWillClose;
- (id)placeholderAttachment;
- (id)recipients;
- (void)reflow;
- (void)refreshPreferredContentSize;
- (void)removeRecipient:(id)arg1;
- (void)selectComposeRecipientAtom:(id)arg1;
- (id)selectedAtoms;
- (void)setAddresses:(id)arg1;
- (void)setBaseFont:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEditable:(bool)arg1;
- (void)setEditable:(bool)arg1 animated:(bool)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setExpandRecipientsInNamedGroups:(bool)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHideLastAtomComma:(int)arg1;
- (void)setInactiveTextColor:(id)arg1;
- (void)setIndicatesUnsafeRecipientsWhenCollapsed:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxRecipients:(long long)arg1;
- (void)setPlaceholderAttachment:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSeparatorHidden:(bool)arg1;
- (void)setShowsAddButtonWhenExpanded:(bool)arg1;
- (void)setTrailingButtonMidlineInsetFromLayoutMargin:(double)arg1;
- (void)setTypingTextColor:(id)arg1;
- (void)setUsingActiveAppearance:(bool)arg1;
- (void)setUsingActiveAppearance:(bool)arg1 animated:(bool)arg2;
- (void)settrailingButtonMidlineInsetFromLayoutMargin:(double)arg1;
- (bool)showsAddButtonWhenExpanded;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (double)textFieldOffsetForNumberOfRowsToScroll:(unsigned long long)arg1 numberOfRowsAboveField:(long long)arg2;
- (id)textView;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (double)trailingButtonMidlineInsetFromLayoutMargin;
- (id)typingTextColor;
- (id)uncommentedAddresses;
- (id)undoManager;
- (bool)usingActiveAppearance;

@end
