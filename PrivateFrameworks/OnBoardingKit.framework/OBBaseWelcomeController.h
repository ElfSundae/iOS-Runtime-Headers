/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBBaseWelcomeController : UIViewController {
    unsigned long long  _templateType;
}

@property (nonatomic) unsigned long long templateType;

- (void)_applyChromelessToBar:(long long)arg1 navigationItem:(id)arg2;
- (void)_presentationStyleValidationCheck;
- (double)autoScrollEdgeTransitionDistance;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })directionalLayoutMargins;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })insetsForTemplateType:(unsigned long long)arg1;
- (void)loadView;
- (long long)navigationBarScrollToEdgeBehavior;
- (id)navigationItem;
- (void)setTemplateType:(unsigned long long)arg1;
- (unsigned long long)templateType;
- (void)updateDirectionalLayoutMargins;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
