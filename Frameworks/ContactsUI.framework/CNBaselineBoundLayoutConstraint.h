/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNBaselineBoundLayoutConstraint : CNBoundLayoutConstraint {
    float  _baselineConstant;
    BOOL  _ignoreAccessibilitySizes;
}

@property BOOL ignoreAccessibilitySizes;

+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 textAttributesObject:(id)arg6 keyPath:(id)arg7 baselineConstant:(float)arg8;

- (void)_boundValueDidChange;
- (BOOL)ignoreAccessibilitySizes;
- (void)setIgnoreAccessibilitySizes:(BOOL)arg1;

@end
