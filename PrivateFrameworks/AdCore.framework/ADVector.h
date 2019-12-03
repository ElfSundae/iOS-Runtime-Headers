/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADVector : NSObject <NSSecureCoding> {
    NSArray * _vector;
    NSString * _version;
}

@property (nonatomic, retain) NSArray *vector;
@property (nonatomic, retain) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cosineSimilarity:(id)arg1;
- (id)dictionaryRepresentation;
- (float)dotProduct:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithVersion:(id)arg1 andArray:(id)arg2;
- (float)magnitude;
- (id)scalarMultiply:(float)arg1;
- (void)setVector:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)vector;
- (id)vectorAdd:(id)arg1;
- (id)vectorSubtract:(id)arg1;
- (id)version;

@end
