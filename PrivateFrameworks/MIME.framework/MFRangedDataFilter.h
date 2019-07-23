/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFRangedDataFilter : MFBaseFilterDataConsumer {
    unsigned int _consumedLength;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
}

@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } range;

+ (id)rangedFilterWithConsumer:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (id)rangedFilterWithConsumers:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;

- (int)appendData:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end