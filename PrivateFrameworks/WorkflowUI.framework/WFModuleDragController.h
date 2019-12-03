/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFModuleDragController : WFComponentDragController {
    NSArray * _actions;
    WFAction * _sourceAction;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, retain) WFModuleModel *model;
@property (nonatomic, readonly) WFAction *sourceAction;

+ (id)componentForModel:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)actions;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (id)initWithGestureRecognizer:(id)arg1 sourceAction:(id)arg2;
- (void)loadView;
- (void)reset;
- (void)setActions:(id)arg1;
- (long long)sizeRangeFlexibility;
- (id)sourceAction;
- (void)updateCurrentViewControllers;

@end
