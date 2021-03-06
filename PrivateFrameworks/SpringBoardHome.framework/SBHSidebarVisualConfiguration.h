/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHSidebarVisualConfiguration : NSObject <BSDescriptionProviding, NSCopying> {
    double  _contentWidth;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _insets;
}

@property (nonatomic) double contentWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (readonly) Class superclass;

- (double)contentWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (void)setContentWidth:(double)arg1;
- (void)setInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
