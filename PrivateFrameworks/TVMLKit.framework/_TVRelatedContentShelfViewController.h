/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVRelatedContentShelfViewController : UIViewController <TVAppTemplateImpressionable, __TVShelfViewControllerDelegate> {
    _TVShelfViewController * _shelfViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _TVShelfViewController *shelfViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)loadView;
- (id)preferredFocusEnvironments;
- (void)setShelfViewController:(id)arg1;
- (id)shelfViewController;
- (void)shelfViewController:(id)arg1 updateRelatedView:(id)arg2;

@end
