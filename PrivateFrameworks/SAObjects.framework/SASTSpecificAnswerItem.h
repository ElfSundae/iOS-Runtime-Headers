/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTSpecificAnswerItem : AceObject <SASTTemplateItem>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) SAUIDecoratedText *decoratedFooter;
@property (nonatomic, retain) SAUIDecoratedText *decoratedValue;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *footer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;

+ (id)specificAnswerItem;
+ (id)specificAnswerItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)decoratedFooter;
- (id)decoratedValue;
- (id)encodedClassName;
- (id)footer;
- (id)groupIdentifier;
- (void)setDecoratedFooter:(id)arg1;
- (void)setDecoratedValue:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
