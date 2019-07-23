/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableActionDataSource : NSObject {
    struct __CFDictionary { } *_actionGroupingsByProperty;
    struct __CFDictionary { } *_actionsByProperty;
    NSMutableArray *_bottomActions;
    struct __CFSet { } *_hiddenActions;
    struct __CFDictionary { } *_inlineActionsByProperty;
    NSMutableArray *_topActions;
}

- (int)actionCountForActionGrouping:(int)arg1;
- (int)actionCountForProperty:(int)arg1 withActionGrouping:(int)arg2;
- (id)actionForProperty:(int)arg1 withActionGrouping:(int)arg2 atIndex:(int)arg3;
- (struct __CFDictionary { }*)actionGroupingsByProperty;
- (id)actionWithActionGrouping:(int)arg1 atIndex:(int)arg2;
- (struct __CFDictionary { }*)actionsByProperty;
- (id)actionsForProperty:(int)arg1 withActionGrouping:(int)arg2;
- (id)actionsForProperty:(int)arg1 withActionGroupingAtIndex:(int)arg2;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(int)arg4 target:(id)arg5 selector:(SEL)arg6 property:(int)arg7 actionGrouping:(int)arg8 ordering:(int)arg9;
- (id)bottomActions;
- (void)dealloc;
- (int)groupingCountForProperty:(int)arg1;
- (struct __CFArray { }*)groupingsForProperty:(int)arg1;
- (BOOL)hasActionWithTarget:(id)arg1 selector:(SEL)arg2 matchProperty:(BOOL)arg3 property:(int)arg4 inArray:(id)arg5 outActions:(id*)arg6 outIndex:(int*)arg7;
- (BOOL)hasActionWithTarget:(id)arg1 selector:(SEL)arg2 property:(int)arg3 actionGrouping:(int)arg4 ordering:(int)arg5 outActions:(id*)arg6 outIndex:(int*)arg7;
- (struct __CFArray { }*)indexesOfActionsForProperty:(int)arg1 withActionGrouping:(int)arg2;
- (struct __CFDictionary { }*)inlineActionsByProperty;
- (BOOL)isActionHidden:(id)arg1;
- (id)newActionsForProperty:(int)arg1;
- (void)removeAction:(id)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5;
- (void)setAction:(id)arg1 hidden:(BOOL)arg2;
- (id)topActions;

@end
