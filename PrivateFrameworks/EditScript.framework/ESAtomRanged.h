/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EditScript.framework/EditScript
 */

@interface ESAtomRanged : NSObject {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _editRange;
    NSString * _replacementText;
}

@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } editRange;
@property (nonatomic, retain) NSString *replacementText;

+ (id)atomWithEditRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementText:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (struct _NSRange { unsigned int x1; unsigned int x2; })editRange;
- (id)initWithEditRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementText:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEditScriptAtomRanged:(id)arg1;
- (id)replacementText;
- (void)setEditRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setReplacementText:(id)arg1;

@end
