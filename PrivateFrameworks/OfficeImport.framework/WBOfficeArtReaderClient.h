/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBOfficeArtReaderClient : NSObject <OABReaderClient>

+ (bool)allowOverlap:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (bool)behindText:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (BOOL)escherIsFullySupported;
+ (int)horizontalPosition:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(id)arg2;
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromObject:(id)arg1 toDrawable:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 includeText:(BOOL)arg3 state:(id)arg4;
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;
+ (id)readDrawableFromPackagePart:(id)arg1 foundInObject:(id)arg2 state:(id)arg3;
+ (void)readFrom:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1 to:(id)arg2;
+ (int)relativeHorizontalPosition:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (int)relativeVerticalPosition:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (BOOL)tablesAreAllowed;
+ (int)verticalPosition:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (double)wrapDistanceBottom:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (double)wrapDistanceLeft:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (double)wrapDistanceRight:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (double)wrapDistanceTop:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (BOOL)xmlEquivalentOfDrawableCanBeUsed;

@end
