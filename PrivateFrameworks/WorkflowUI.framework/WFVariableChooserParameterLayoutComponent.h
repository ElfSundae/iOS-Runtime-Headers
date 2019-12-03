/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFVariableChooserParameterLayoutComponent : CKCompositeComponent {
    WFTextTokenChooser * _chooser;
    bool  _chooserCanClear;
    CKComponent * _controlComponent;
    <WFComponentNavigationContext> * _navigationContext;
    WFParameter * _parameter;
    id /* block */  _updateBlock;
    WFVariable * _variable;
    <WFVariableProvider> * _variableProvider;
    <WFVariableUIDelegate> * _variableUIDelegate;
}

+ (id)newWithLabel:(id)arg1 labelsToAlignTo:(id)arg2 parameter:(id)arg3 variable:(id)arg4 updateBlock:(id /* block */)arg5 options:(struct WFParameterComponentOptions { bool x1; bool x2; bool x3; id x4; id x5; bool x6; })arg6 chooserCanClear:(bool)arg7 variableProvider:(id)arg8 variableUIDelegate:(id)arg9 navigationContext:(id)arg10 controlResistance:(const struct WFCompressionResistance { int x1; double x2; }*)arg11 controlComponent:(id)arg12;

- (void).cxx_destruct;
- (void)presentTokenChooser:(id)arg1;

@end
