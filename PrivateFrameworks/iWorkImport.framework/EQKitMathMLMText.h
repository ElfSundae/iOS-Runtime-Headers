/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface EQKitMathMLMText : EQKitMathMLNode <EQKitFontStyling, EQKitLayoutSchemataText, EQKitMathMLNode> {
    EQKitMathMLTokenContent * mContent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initFromXMLNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 parser:(id)arg2;
- (id)initWithContent:(id)arg1;
- (bool)isBaseFontNameUsed;
- (struct Schemata { int (**x1)(); int x2; id x3; })layoutSchemata;
- (const struct set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> > { }*)mathMLAttributes;
- (id)schemataChildren;
- (bool)schemataIsQuoted;
- (int)scriptContext;
- (int)scriptVariant;

@end
