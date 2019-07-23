/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult

@property (readonly) NSArray *rangeArray;
@property (readonly) NSRegularExpression *regularExpression;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;
- (id)initWithRanges:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 count:(unsigned int)arg2 regularExpression:(id)arg3;
- (id)rangeArray;
- (id)regularExpression;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (unsigned long long)resultType;

@end
