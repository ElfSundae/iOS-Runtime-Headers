/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSEditableListController : PSListController {
    BOOL  _editable;
    BOOL  _editingDisabled;
}

- (id)_editButtonBarItem;
- (void)_setEditable:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateNavigationBar;
- (void)didLock;
- (void)editDoneTapped;
- (BOOL)editable;
- (id)init;
- (BOOL)performDeletionActionForSpecifier:(id)arg1;
- (void)setEditButtonEnabled:(BOOL)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setEditingButtonHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showController:(id)arg1 animate:(BOOL)arg2;
- (void)suspend;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end
