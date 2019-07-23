/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKReferenceNode : SKNode {
    bool  _hasResolvedURL;
    NSString * _referenceFileName;
    NSURL * _referenceURL;
    SKNode * _resolvedNode;
}

@property (nonatomic, retain) NSString *referenceFileName;
@property (nonatomic, retain) NSURL *referenceURL;

+ (id)nodeWithFileNamed:(id)arg1;
+ (id)referenceNodeWithFileNamed:(id)arg1;
+ (id)referenceNodeWithURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_resolveReferenceNode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)didLoadReferenceNode:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileNamed:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)referenceFileName;
- (id)referenceURL;
- (void)resolveNodeFromArchiveData:(id)arg1;
- (void)resolveReferenceNode;
- (id)resolvedNode;
- (void)setReferenceFileName:(id)arg1;
- (void)setReferenceURL:(id)arg1;

@end
