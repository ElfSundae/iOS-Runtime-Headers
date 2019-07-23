/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicSearchNavigationController : MusicNavigationController <SKUINavigationControllerDelegate, UINavigationControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)automaticallyInstallAccountBarButtonItem;
+ (bool)automaticallyInstallSearchBarButtonItem;

- (void)_applyPresentingInsetsToViewControllers:(id)arg1;
- (void)_handleScrollingTabBarControllerPaletteWasAttachedNotification:(id)arg1;
- (void)_handleScrollingTabBarControllerPaletteWasDetachedNotification:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)jsNavigationDocumentForNavigationController:(id)arg1 inContext:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
