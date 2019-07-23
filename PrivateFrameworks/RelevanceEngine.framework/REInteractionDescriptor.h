/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REInteractionDescriptor : NSObject <NSCopying, REIndentedDescription> {
    bool  _enableExploreExploit;
    float  _exploreBias;
    REFeature * _identificationFeature;
    NSString * _name;
    float  _weight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableExploreExploit;
@property (nonatomic) float exploreBias;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) REFeature *identificationFeature;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic) float weight;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (bool)enableExploreExploit;
- (float)exploreBias;
- (unsigned long long)hash;
- (id)identificationFeature;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setEnableExploreExploit:(bool)arg1;
- (void)setExploreBias:(float)arg1;
- (void)setIdentificationFeature:(id)arg1;
- (void)setName:(id)arg1;
- (void)setWeight:(float)arg1;
- (float)weight;

@end
