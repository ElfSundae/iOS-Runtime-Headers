/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalDisjointDateRange : NSObject <NSCopying, NSSecureCoding> {
    NSMutableSet *_distinctRanges;
}

@property (nonatomic, copy) NSMutableSet *distinctRanges;

+ (id)disjointRangeWithDistinctRanges:(id)arg1;
+ (id)disjointRangeWithSingleRange:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addDisjointRange:(id)arg1;
- (id)addRange:(id)arg1;
- (BOOL)containsDate:(id)arg1;
- (BOOL)containsRange:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)distinctRanges;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDistinctRanges:(id)arg1;
- (id)intersectionWithDisjointRange:(id)arg1;
- (id)intersectionWithRange:(id)arg1;
- (BOOL)intersectsRange:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setDistinctRanges:(id)arg1;
- (id)sortedDistinctRanges;
- (id)subtractDisjointRange:(id)arg1;
- (id)subtractRange:(id)arg1;
- (double)totalDuration;

@end
