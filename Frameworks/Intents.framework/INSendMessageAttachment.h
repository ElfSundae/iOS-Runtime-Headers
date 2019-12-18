/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSendMessageAttachment : NSObject <INEnumerable, INJSONSerializable> {
    bool  _currentLocation;
    INFile * _file;
    NSURL * _speechDataURL;
}

@property (nonatomic, readonly) bool currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INFile *file;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *speechDataURL;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (id)attachmentWithCurrentLocation;
+ (id)attachmentWithFile:(id)arg1;
+ (id)attachmentWithSpeechDataURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initWithCurrentLocation:(bool)arg1 file:(id)arg2 speechDataURL:(id)arg3;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)currentLocation;
- (void)encodeWithCoder:(id)arg1;
- (id)file;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)speechDataURL;

@end
