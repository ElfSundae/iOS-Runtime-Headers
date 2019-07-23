/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLModelWeights : NSObject <DictionarySerializableProtocol> {
    NSMutableData * _data;
    int  _length;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int length;
@property (readonly) Class superclass;

+ (id)fromDictionary:(id)arg1;
+ (id)modelWeightsFromDoubles:(id)arg1 ofLength:(int)arg2;
+ (id)modelWeightsOfLength:(int)arg1;

- (void).cxx_destruct;
- (id)initFromDictionary:(id)arg1;
- (id)initModelWeightsFromDoubles:(id)arg1 ofLength:(int)arg2;
- (id)initModelWeightsOfLength:(int)arg1;
- (int)length;
- (id)toDictionary;
- (double*)values;

@end
