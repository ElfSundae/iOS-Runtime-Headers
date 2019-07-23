/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRecentsInputViewController : UITableViewController {
    NSString * _addNewString;
    NSString * _clearAllString;
    int  _containingEffectStyle;
    UILabel * _headerLabel;
    NSLayoutConstraint * _heightConstraint;
    NSString * _previouslyUsedString;
    <UIRecentsInputViewControllerDelegate> * _recentInputDelegate;
    UILexicon * _recentInputs;
    NSLayoutConstraint * _widthConstraint;
}

@property (nonatomic, retain) NSString *addNewString;
@property (nonatomic, retain) NSString *clearAllString;
@property (nonatomic) int containingEffectStyle;
@property (nonatomic, retain) UILabel *headerLabel;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) NSString *previouslyUsedString;
@property (nonatomic) <UIRecentsInputViewControllerDelegate> *recentInputDelegate;
@property (nonatomic, retain) UILexicon *recentInputs;
@property (nonatomic, retain) NSLayoutConstraint *widthConstraint;

- (void).cxx_destruct;
- (id)_uiktest_FocusedCellLabel;
- (id)_uiktest_UnfocusedCellBackgroundView;
- (id)_uiktest_UnfocusedCellLabel;
- (id)addNewString;
- (id)clearAllString;
- (int)containingEffectStyle;
- (void)didSelectButtonAtIndexPath:(id)arg1;
- (void)ensureConstraints;
- (id)headerLabel;
- (id)heightConstraint;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)preferredFocusedView;
- (id)previouslyUsedString;
- (id)recentInputDelegate;
- (id)recentInputs;
- (void)scrollViewDidChangeContentSize:(id)arg1;
- (void)setAddNewString:(id)arg1;
- (void)setClearAllString:(id)arg1;
- (void)setContainingEffectStyle:(int)arg1;
- (void)setHeaderLabel:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setPreviouslyUsedString:(id)arg1;
- (void)setRecentInputDelegate:(id)arg1;
- (void)setRecentInputs:(id)arg1;
- (void)setWidthConstraint:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTableViewWidth;
- (void)viewDidLoad;
- (id)widthConstraint;

@end
