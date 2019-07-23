/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardModalSegueTemplate : UIStoryboardSegueTemplate {
    int _modalPresentationStyle;
    int _modalTransitionStyle;
    BOOL _useDefaultModalPresentationStyle;
    BOOL _useDefaultModalTransitionStyle;
}

@property (nonatomic) int modalPresentationStyle;
@property (nonatomic) int modalTransitionStyle;
@property (nonatomic) BOOL useDefaultModalPresentationStyle;
@property (nonatomic) BOOL useDefaultModalTransitionStyle;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)modalPresentationStyle;
- (int)modalTransitionStyle;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)arg1;
- (void)setModalPresentationStyle:(int)arg1;
- (void)setModalTransitionStyle:(int)arg1;
- (void)setUseDefaultModalPresentationStyle:(BOOL)arg1;
- (void)setUseDefaultModalTransitionStyle:(BOOL)arg1;
- (BOOL)useDefaultModalPresentationStyle;
- (BOOL)useDefaultModalTransitionStyle;

@end
