/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface RMHeading : NSObject {
    struct CGPDFNode { } * _node;
    struct CGPDFPage { } * _page;
    struct { 
        int location; 
        int length; 
    }  _textRange;
}

@property (readonly) struct CGPDFPage { }*page;
@property struct { int x1; int x2; } textRange;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)initWithNode:(struct CGPDFNode { }*)arg1 onPage:(struct CGPDFPage { }*)arg2;
- (struct CGPDFPage { }*)page;
- (void)setTextRange:(struct { int x1; int x2; })arg1;
- (struct { int x1; int x2; })textRange;

@end
