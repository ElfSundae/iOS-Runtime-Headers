/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISCacheImage : ISConcreteImage {
    NSUUID * _uuid;
    struct NSData { Class x1; } * _validationToken;
}

@property bool placeholder;
@property (retain) NSUUID *uuid;
@property (readonly) NSData *validationToken;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (bool)placeholder;
- (void)setPlaceholder:(bool)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (struct NSData { Class x1; }*)validationToken;

@end
