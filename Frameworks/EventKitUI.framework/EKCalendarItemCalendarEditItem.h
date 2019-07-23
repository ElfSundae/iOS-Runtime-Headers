/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem {
    unsigned int _entityType;
}

- (BOOL)_shouldShowSourceForCalendar:(id)arg1;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned int)arg2;
- (BOOL)editItemViewControllerSave:(id)arg1;
- (id)init;
- (id)initWithEntityType:(unsigned int)arg1;
- (BOOL)requiresReconfigurationOnSave;
- (BOOL)shouldAppearWithVisibility:(int)arg1;

@end
