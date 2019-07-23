/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWKAutocorrectionContext : NSObject {
    NSString * _contextAfterSelection;
    NSString * _contextBeforeSelection;
    NSString * _markedText;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeInMarkedText;
    NSString * _selectedText;
}

@property (nonatomic, copy) NSString *contextAfterSelection;
@property (nonatomic, copy) NSString *contextBeforeSelection;
@property (nonatomic, copy) NSString *markedText;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeInMarkedText;
@property (nonatomic, copy) NSString *selectedText;

- (id)contextAfterSelection;
- (id)contextBeforeSelection;
- (void)dealloc;
- (id)markedText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeInMarkedText;
- (id)selectedText;
- (void)setContextAfterSelection:(id)arg1;
- (void)setContextBeforeSelection:(id)arg1;
- (void)setMarkedText:(id)arg1;
- (void)setRangeInMarkedText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSelectedText:(id)arg1;

@end
