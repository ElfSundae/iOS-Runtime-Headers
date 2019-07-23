/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _canMultitap;
    BOOL  _diacriticForwardCompose;
    BOOL  _hasAccentKey;
    BOOL  _hasCandidateKey;
    NSString * _inputMode;
    BOOL  _interfaceIdiomIsPad;
    BOOL  _isAlphabeticPlane;
    NSString * _layoutTag;
    int  _userInterfaceIdiom;
}

@property (nonatomic) BOOL canMultitap;
@property (nonatomic) BOOL diacriticForwardCompose;
@property (nonatomic) BOOL hasAccentKey;
@property (nonatomic) BOOL hasCandidateKey;
@property (nonatomic, copy) NSString *inputMode;
@property (nonatomic) BOOL interfaceIdiomIsPad;
@property (nonatomic) BOOL isAlphabeticPlane;
@property (nonatomic, copy) NSString *layoutTag;
@property (nonatomic) int userInterfaceIdiom;

+ (BOOL)supportsSecureCoding;

- (BOOL)canMultitap;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)diacriticForwardCompose;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAccentKey;
- (BOOL)hasCandidateKey;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)inputMode;
- (BOOL)interfaceIdiomIsPad;
- (BOOL)isAlphabeticPlane;
- (BOOL)isEqual:(id)arg1;
- (id)layoutTag;
- (void)setCanMultitap:(BOOL)arg1;
- (void)setDiacriticForwardCompose:(BOOL)arg1;
- (void)setHasAccentKey:(BOOL)arg1;
- (void)setHasCandidateKey:(BOOL)arg1;
- (void)setInputMode:(id)arg1;
- (void)setInterfaceIdiomIsPad;
- (void)setInterfaceIdiomIsPad:(BOOL)arg1;
- (void)setIsAlphabeticPlane:(BOOL)arg1;
- (void)setLayoutTag:(id)arg1;
- (void)setUserInterfaceIdiom:(int)arg1;
- (int)userInterfaceIdiom;

@end
