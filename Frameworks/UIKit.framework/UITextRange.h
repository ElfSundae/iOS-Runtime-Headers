/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextRange : NSObject

@property (getter=isEmpty, nonatomic, readonly) BOOL empty;
@property (nonatomic, readonly) UITextPosition *end;
@property (getter=_isCaret, nonatomic, readonly) BOOL isCaret;
@property (getter=_isImpl, nonatomic, readonly) UITextRangeImpl *isImpl;
@property (getter=_isRanged, nonatomic, readonly) BOOL isRanged;
@property (nonatomic, readonly) UITextPosition *start;

- (BOOL)_isCaret;
- (id)_isImpl;
- (BOOL)_isRanged;
- (id)end;
- (BOOL)isEmpty;
- (id)start;

@end