/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
 */

@interface IAMEvent : NSObject <IAMEventProtocol> {
    NSString * _name;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, copy) NSDictionary *payload;
@property (nonatomic, readonly, copy) NSString *source;
@property (readonly) Class superclass;
@property (nonatomic) long long type;
@property (nonatomic, readonly, copy) id value;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 type:(long long)arg2;
- (bool)matchesWithKey:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
