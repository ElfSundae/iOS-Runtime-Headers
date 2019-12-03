/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFTextInputParameterSummaryEditor : WFModuleSummaryEditor <WFVariableTypingContext, WFVariableUIDelegate> {
    bool  _hasChangedText;
    bool  _isPickingMagicVariable;
    WFVariableStringParameterState * _stagedState;
    NSTextAttachment * _textAttachmentToEdit;
    WFVariableInputCoordinator * _variableCoordinator;
}

@property (nonatomic, readonly) NSArray *currentVariables;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasChangedText;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPickingMagicVariable;
@property (nonatomic, readonly) WFVariableStringParameterState *stagedState;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTextAttachment *textAttachmentToEdit;
@property (nonatomic, retain) WFVariableInputCoordinator *variableCoordinator;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)cancelEditingWithCompletionHandler:(id /* block */)arg1;
- (void)configureVariableAttachmentForInsertion:(id)arg1;
- (void)copyVariableString;
- (id)currentVariables;
- (bool)doneButtonNeededForInputTraits:(id)arg1 allowMultipleLines:(bool)arg2;
- (bool)hasChangedText;
- (void)insertVariable:(id)arg1;
- (bool)isPickingMagicVariable;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(id /* block */)arg3 goBackHandler:(id /* block */)arg4 scrolledAwayHandler:(id /* block */)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (void)setIsPickingMagicVariable:(bool)arg1;
- (void)setTextAttachmentToEdit:(id)arg1;
- (void)setVariableCoordinator:(id)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(bool)arg2 variableProvider:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)sourceViewTintColorDidChange;
- (id)stagedState;
- (id)stateByReplacingVariableFromInitialState:(id)arg1 withVariable:(id)arg2;
- (id)textAttachmentToEdit;
- (void)textEntryDidCopyWithOriginalBlock:(id /* block */)arg1;
- (void)textEntryDidCutWithOriginalBlock:(id /* block */)arg1;
- (void)textEntryDidFinish;
- (void)textEntryDidPasteWithOriginalBlock:(id /* block */)arg1;
- (void)textEntryTextDidChange:(id)arg1;
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(bool*)arg2;
- (id)variableCoordinator;
- (bool)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)arg1;

@end
