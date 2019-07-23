/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionTaskMetrics : NSURLSessionTaskMetrics <NSSecureCoding> {
    unsigned int  _redirectCount;
    NSDateInterval * _taskInterval;
    NSArray * _transactionMetrics;
}

+ (BOOL)supportsSecureCoding;

- (id)_initWithTask:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)redirectCount;
- (void)setRedirectCount:(unsigned int)arg1;
- (void)setTaskInterval:(id)arg1;
- (void)setTransactionMetrics:(id)arg1;
- (id)taskInterval;
- (id)transactionMetrics;

@end
