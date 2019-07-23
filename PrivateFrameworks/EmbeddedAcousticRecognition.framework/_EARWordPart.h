/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARWordPart : NSObject {
    unsigned int  _frequency;
    NSString * _orthography;
    NSSet * _pronunciations;
    int  _tag;
    NSString * _tagName;
}

@property (nonatomic, readonly) unsigned int frequency;
@property (nonatomic, readonly) NSString *orthography;
@property (nonatomic, readonly) NSSet *pronunciations;
@property (nonatomic, readonly) int tag;
@property (nonatomic, readonly) NSString *tagName;

- (void).cxx_destruct;
- (unsigned int)frequency;
- (id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tag:(int)arg3;
- (id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tagName:(id)arg3 frequency:(unsigned int)arg4;
- (id)orthography;
- (id)pronunciations;
- (int)tag;
- (id)tagName;

@end
