/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWKDocumentContext : NSObject {
    NSAttributedString * _annotatedText;
    NSObject * _contextAfter;
    NSObject * _contextBefore;
    NSObject * _markedText;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectedRangeInMarkedText;
    NSObject * _selectedText;
    NSMutableDictionary * _selectionRects;
}

@property (nonatomic, readonly) NSString *_contextAfterString;
@property (nonatomic, readonly) NSString *_contextBeforeString;
@property (nonatomic, readonly) NSString *_markedTextString;
@property (nonatomic, readonly) NSString *_selectedTextString;
@property (nonatomic, retain) NSMutableDictionary *_selectionRects;
@property (nonatomic, copy) NSAttributedString *annotatedText;
@property (nonatomic, copy) NSObject *contextAfter;
@property (nonatomic, copy) NSObject *contextBefore;
@property (nonatomic, copy) NSObject *markedText;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } markedTextRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRangeInMarkedText;
@property (nonatomic, copy) NSObject *selectedText;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedTextRange;

- (id)_contextAfterString;
- (id)_contextBeforeString;
- (id)_markedTextString;
- (id)_selectedTextString;
- (id)_selectionRects;
- (void)addTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)annotatedText;
- (id)characterRectsForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)closestCharacterIndexForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)contextAfter;
- (id)contextBefore;
- (void)dealloc;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })deltaForSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)enumerateLayoutRects:(id /* block */)arg1;
- (id)init;
- (id)markedText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })markedTextRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeContainedWithinRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)resetTextRects;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRangeInMarkedText;
- (id)selectedText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedTextRange;
- (void)setAnnotatedText:(id)arg1;
- (void)setContextAfter:(id)arg1;
- (void)setContextBefore:(id)arg1;
- (void)setMarkedText:(id)arg1;
- (void)setSelectedRangeInMarkedText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSelectedText:(id)arg1;
- (void)set_selectionRects:(id)arg1;
- (id)stringContainedWithinRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
