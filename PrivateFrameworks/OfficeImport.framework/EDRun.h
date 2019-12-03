/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDRun : NSObject <EDKeyedObject> {
    unsigned long long  mCharIndex;
    NSArray * mEffects;
    unsigned long long  mFontIndex;
    EDResources * mResources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)runWithCharIndex:(unsigned long long)arg1 font:(id)arg2 effects:(id)arg3 resources:(id)arg4;
+ (id)runWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3;
+ (id)runWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 effects:(id)arg3 resources:(id)arg4;
+ (id)runWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3;
+ (id)runWithResources:(id)arg1;

- (void).cxx_destruct;
- (void)adjustIndex:(unsigned long long)arg1;
- (unsigned long long)charIndex;
- (id)description;
- (id)effects;
- (id)font;
- (unsigned long long)fontIndex;
- (unsigned long long)hash;
- (id)initWithCharIndex:(unsigned long long)arg1 font:(id)arg2 effects:(id)arg3 resources:(id)arg4;
- (id)initWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3;
- (id)initWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 effects:(id)arg3 resources:(id)arg4;
- (id)initWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3;
- (id)initWithResources:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRun:(id)arg1;
- (long long)key;
- (void)overrideFont:(id)arg1;
- (void)setCharIndex:(unsigned long long)arg1;
- (void)setFont:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;

@end
