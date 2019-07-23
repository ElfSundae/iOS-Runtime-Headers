/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoDerivativeUtilities : NSObject

+ (BOOL)_resizeImageUsingHWForUtiType:(id)arg1 inputFilePath:(id)arg2 outputFilePath:(id)arg3 derivedSize:(struct CGSize { float x1; float x2; })arg4;
+ (BOOL)_resizeImageUsingNewScalerForUtiType:(id)arg1 inputFilePath:(id)arg2 outputFilePath:(id)arg3 derivedSize:(struct CGSize { float x1; float x2; })arg4;
+ (BOOL)_resizeImageUsingSWForUtiType:(id)arg1 inputFilePath:(id)arg2 outputFilePath:(id)arg3 derivedSize:(struct CGSize { float x1; float x2; })arg4;
+ (id)generateDerivativeForMSAsset:(id)arg1 derivativeType:(int)arg2 withSpecificationInfo:(id)arg3 collectionGUID:(id)arg4;
+ (BOOL)resizeImageForUtiType:(id)arg1 masterFilePath:(id)arg2 derivedSize:(struct CGSize { float x1; float x2; })arg3 derivedAssetPath:(id)arg4;

@end
