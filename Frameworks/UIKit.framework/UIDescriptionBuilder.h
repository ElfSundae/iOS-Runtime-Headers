/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDescriptionBuilder : NSObject {
    NSMutableString * _descriptionString;
    NSObject * _object;
    NSString * _separator;
}

@property (nonatomic, retain) NSMutableString *descriptionString;
@property (nonatomic) NSObject *object;
@property (nonatomic, copy) NSString *separator;
@property (nonatomic, readonly) NSString *string;

+ (id)descriptionBuilderWithObject:(id)arg1;
+ (id)descriptionForObject:(id)arg1 keys:(id)arg2;
+ (id)descriptionForObject:(id)arg1 namesAndObjects:(id)arg2;

- (void).cxx_destruct;
- (id)appendKey:(id)arg1;
- (id)appendKeys:(id)arg1;
- (id)appendName:(id)arg1 boolValue:(BOOL)arg2;
- (id)appendName:(id)arg1 doubleValue:(double)arg2;
- (id)appendName:(id)arg1 intValue:(int)arg2;
- (id)appendName:(id)arg1 integerValue:(int)arg2;
- (id)appendName:(id)arg1 object:(id)arg2;
- (id)appendName:(id)arg1 pointerValue:(void*)arg2;
- (id)appendName:(id)arg1 selector:(SEL)arg2;
- (id)appendName:(id)arg1 unsignedInteger:(unsigned int)arg2;
- (id)appendNamesAndObjects:(id)arg1;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (id)descriptionString;
- (id)initWithObject:(id)arg1;
- (id)object;
- (id)separator;
- (void)setDescriptionString:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setSeparator:(id)arg1;
- (id)string;
- (void)tryAppendKey:(id)arg1;

@end
