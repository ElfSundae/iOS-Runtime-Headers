/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedTVViewController : UIViewController <PXChangeObserver> {
    PXMemoriesFeedUIViewController * _memoriesFeedController;
    PXMemoriesSpecManager * _specManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXMemoriesFeedUIViewController *memoriesFeedController;
@property (nonatomic, readonly) UIScrollView *ppt_scrollView;
@property (nonatomic, readonly) PXMemoriesSpecManager *specManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_specDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)memoriesFeedController;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)ppt_scrollView;
- (void)setMemoriesFeedController:(id)arg1;
- (id)specManager;
- (void)viewDidLoad;

@end
