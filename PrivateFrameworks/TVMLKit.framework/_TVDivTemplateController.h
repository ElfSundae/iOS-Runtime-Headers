/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVDivTemplateController : _TVBgImageLoadingViewController {
    TVImageProxy * _backgroundImageProxy;
    UIImageView * _backgroundImageView;
    _TVOrganizerView * _contentView;
    NSArray * _viewControllers;
    IKViewElement * _viewElement;
}

@property (nonatomic, retain) TVImageProxy *backgroundImageProxy;
@property (nonatomic, retain) UIImageView *backgroundImageView;
@property (nonatomic, retain) _TVOrganizerView *contentView;
@property (nonatomic, copy) NSArray *viewControllers;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (id)_backgroundImageProxy;
- (struct CGSize { double x1; double x2; })_backgroundImageProxySize;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (void)_updateContentView;
- (id)backgroundImageProxy;
- (id)backgroundImageView;
- (id)contentView;
- (id)init;
- (void)loadView;
- (void)setBackgroundImageProxy:(id)arg1;
- (void)setBackgroundImageView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)setViewElement:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (id)viewControllers;
- (void)viewDidLayoutSubviews;
- (id)viewElement;

@end
