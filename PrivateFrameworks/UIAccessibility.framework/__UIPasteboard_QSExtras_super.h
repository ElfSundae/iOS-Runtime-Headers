/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface __UIPasteboard_QSExtras_super : UIAccessibilitySafeCategory

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

+ (Class)safeCategoryBaseClass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)generalPasteboard;
+ (id)pasteboardWithName:(id)arg1 create:(bool)arg2;
+ (id)pasteboardWithUniqueName;

- (id)URL;
- (id)URLs;
- (void)addItems:(id)arg1;
- (long long)changeCount;
- (id)color;
- (id)colors;
- (bool)containsPasteboardTypes:(id)arg1;
- (bool)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)image;
- (id)images;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (id)items;
- (long long)numberOfItems;
- (id)pasteboardTypes;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (void)setItems:(id)arg1;
- (void)setStrings:(id)arg1;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (id)string;
- (id)strings;
- (id)valueForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

@end
