/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSItemProviderTypeCoercion : NSObject {
    Class  _targetClass;
    id  _value;
}

@property (copy) Class targetClass;
@property (retain) id value;

+ (id)typeCoercionForValue:(id)arg1 targetClass:(Class)arg2;

- (id)_NSItemProviderTypeCoercion_coercedNSDataValueFromNSURLValue:(id)arg1 error:(id*)arg2;
- (id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSDataValue:(id)arg1 error:(id*)arg2;
- (id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSURLValue:(id)arg1 error:(id*)arg2;
- (id)coerceValueError:(id*)arg1;
- (void)dealloc;
- (void)setTargetClass:(Class)arg1;
- (void)setValue:(id)arg1;
- (bool)shouldCoerceForCoding;
- (Class)targetClass;
- (id)value;

@end
