/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface CoreThemeDocument : TDPersistentDocument {
    <TDAssetManagementDelegate> * _assetManagementDelegate;
    TDCatalogGlobals * _catalogGlobals;
    <TDCustomAssetProvider> * _customAssetProvider;
    NSMutableArray * _deviceTraits;
    NSMutableDictionary * _explicitlyPackedContents;
    NSMutableDictionary * _explicitlyPackedIdentifiers;
    NSMutableDictionary * _explicitlyPackedPackings;
    struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; } * _keyFormat;
    int  _majorVersion;
    NSString * _minimumDeploymentVersion;
    int  _minorVersion;
    NSMutableDictionary * _packableRenditions;
    int  _patchVersion;
    NSString * _relativePathToProductionData;
    NSString * _targetPlatform;
    int  _updateVersionMetadataState;
    NSMutableDictionary * cachedConstantArrays;
    long long  cachedMaxIdentifierInUse;
    NSMutableDictionary * constantArrayControllers;
    bool  m_didMigrate;
    TDHistorian * m_historian;
    NSManagedObjectModel * m_managedObjectModel;
    TDThreadMOCOrganizer * m_mocOrganizer;
    NSString * pathToRepresentedDocument;
}

@property (nonatomic) <TDAssetManagementDelegate> *assetManagementDelegate;
@property (readonly) TDCatalogGlobals *catalogGlobals;
@property (nonatomic) <TDCustomAssetProvider> *customAssetProvider;
@property (nonatomic, readonly) int majorVersion;
@property (nonatomic, copy) NSString *minimumDeploymentVersion;
@property (nonatomic, readonly) int minorVersion;
@property (nonatomic, retain) TDDeviceTraits *optimizeForDeviceTraits;
@property (nonatomic, readonly) int patchVersion;
@property (copy) NSString *pathToRepresentedDocument;
@property (nonatomic, readonly) NSURL *themeBitSourceURL;
@property (nonatomic, copy) NSUUID *uuid;

+ (void)_addThemeDocument:(id)arg1;
+ (id)_imageAssetURLsByCopyingFileURLs:(id)arg1 toManagedLocationAtURL:(id)arg2 error:(id*)arg3;
+ (id)_sharedDocumentList;
+ (void)closeMigrationProgress;
+ (id)createConfiguredDocumentAtURL:(id)arg1 error:(id*)arg2;
+ (id)dataModelNameForVersion:(long long)arg1;
+ (long long)dataModelVersion;
+ (long long)dataModelVersionFromMetadata:(id)arg1;
+ (bool)defaultAllowsExtendedRangePixelFormats;
+ (long long)defaultTargetPlatform;
+ (id)defaultThemeBitSourceURLForDocumentURL:(id)arg1;
+ (void)doneWithColorConversion;
+ (void)initialize;
+ (int)maximumAreaOfPackableImageForScale:(unsigned long long)arg1;
+ (id)migrateDocumentAtURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
+ (id)persistentStringForPlatform:(long long)arg1;
+ (long long)platformForPersistentString:(id)arg1;
+ (void)presentMigrationProgress;
+ (int)shouldConvertColorsFromColorSpaceWithIdentifier:(unsigned long long)arg1 toIdentifier:(unsigned long long)arg2 error:(id*)arg3;
+ (unsigned long long)standardColorSpaceID;
+ (long long)targetPlatformForMOC:(id)arg1;

- (id)_addAssetsAtFileURLs:(id)arg1 createProductions:(bool)arg2 referenceFiles:(bool)arg3 bitSource:(id)arg4 customInfos:(id)arg5 sortedCustomInfos:(id*)arg6;
- (id)_addAssetsFromCustomAssetInfos:(id)arg1 bitSource:(id)arg2 error:(id*)arg3;
- (void)_addResolvedLayerReferenceToFlattenedImageRendition:(id)arg1 usingArtworkRendition:(id)arg2 andLayerReference:(id)arg3;
- (void)_automaticP3GenerationFromSRGB;
- (void)_automaticSRGBGenerationFromP3;
- (void)_backwardsCompatibilityPatchForLayoutDirection;
- (id)_cachedConstantsForEntity:(id)arg1;
- (bool)_canremoveKeyAttribte:(unsigned short)arg1;
- (bool)_clampMetrics;
- (long long)_compareFlattenedKeySpec1:(id)arg1 toKeySpec2:(id)arg2;
- (void)_configureAfterFirstSave;
- (id)_createNamedElementWithIdentifier:(long long)arg1;
- (id)_createNamedElementWithNextAvailableIdentifier;
- (id)_createPhotoshopElementProductionWithAsset:(id)arg1;
- (id)_customizedSchemaDefinitionsForEntity:(id)arg1;
- (void)_delete:(id)arg1 withRendition:(id)arg2;
- (id)_genericPartDefinition;
- (void)_getFilename:(id*)arg1 scaleFactor:(unsigned int*)arg2 category:(id*)arg3 bitSource:(id*)arg4 forFileURL:(id)arg5;
- (void)_groupPackableRenditions;
- (void)_insertRendition:(id)arg1 forKey:(id)arg2;
- (void)_makeRadiosityImages;
- (bool)_matchesAllExceptGamut:(id)arg1 andKeySpec:(id)arg2;
- (id)_namedImageEffectPartDefinition;
- (id)_namedImagePartDefinition;
- (id)_namedTextEffectPartDefinition;
- (void)_normalizeRenditionKeySpec:(id)arg1 forSchemaRendition:(id)arg2;
- (void)_optimizeForDeviceTraits;
- (id)_predicateForRenditionKeySpec:(id)arg1;
- (void)_processModelProductions;
- (void)_removeRedundantPDFBasedRenditions:(id)arg1;
- (void)_removeRedundantPDFBasedRenditionsForAssets:(id)arg1;
- (id)_sizeIndexesByNameFromNamedAssetImportInfos:(id)arg1;
- (void)_synchronousSave;
- (id)_themeBitSource:(id*)arg1;
- (id)_themeBitSourceForReferencedFilesAtURLs:(id)arg1 createIfNecessary:(bool)arg2;
- (void)_tidyUpLayerStacks;
- (void)_tidyUpRecognitionImages;
- (void)_updateKeyFormat;
- (bool)_updateRenditionPackings:(id)arg1 error:(id*)arg2;
- (id)addAssetsAtFileURLs:(id)arg1;
- (id)addAssetsAtFileURLs:(id)arg1 createProductions:(bool)arg2;
- (id)addAssetsAtFileURLs:(id)arg1 createProductions:(bool)arg2 referenceFiles:(bool)arg3 bitSource:(id)arg4 customInfos:(id)arg5;
- (void)addDeviceTraitForOptimization:(id)arg1;
- (void)addThemeBitSourceAtPath:(id)arg1;
- (void)addThemeBitSourceAtPath:(id)arg1 createProductions:(bool)arg2;
- (id)allObjectsForEntity:(id)arg1 withSortDescriptors:(id)arg2;
- (id)allObjectsForEntity:(id)arg1 withSortDescriptors:(id)arg2 error:(id*)arg3;
- (bool)allowMultipleInstancesOfElementID:(long long)arg1;
- (bool)allowsExtendedRangePixelFormats;
- (id)artworkDraftTypeWithIdentifier:(long long)arg1;
- (id)artworkFormat;
- (id)assetAtFileURL:(id)arg1;
- (id)assetAtPath:(id)arg1;
- (id)assetManagementDelegate;
- (void)buildModel;
- (bool)canImportNamedAssetImportInfo:(id)arg1;
- (id)catalogGlobals;
- (void)changedObjectsNotification:(id)arg1;
- (bool)checkCompatibilityOfDocumentAtURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (void)checkVersionsAndUpdateIfNecessary;
- (unsigned int)checksum;
- (unsigned long long)colorSpaceID;
- (id)compressionTypeWithIdentifier:(long long)arg1;
- (bool)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5;
- (id)constantWithName:(id)arg1 forIdentifier:(long long)arg2;
- (void)convertColorsFromColorSpaceWithIdentifier:(unsigned long long)arg1 toIdentifier:(unsigned long long)arg2;
- (unsigned long long)countForEntity:(id)arg1 withPredicate:(id)arg2;
- (unsigned long long)countOfRenditionsMatchingRenditionKeySpec:(id)arg1;
- (unsigned long long)countOfRenditionsMatchingRenditionKeySpecs:(id)arg1;
- (id)createAssetWithName:(id)arg1 fileType:(id)arg2 scaleFactor:(unsigned int)arg3 inCategory:(id)arg4 forThemeBitSource:(id)arg5;
- (id)createAssetWithName:(id)arg1 inCategory:(id)arg2 forThemeBitSource:(id)arg3;
- (id)createAssetWithName:(id)arg1 scaleFactor:(unsigned int)arg2 inCategory:(id)arg3 forThemeBitSource:(id)arg4;
- (bool)createCustomArtworkProductionsForCustomAssets:(id)arg1 withImportInfos:(id)arg2 error:(id*)arg3;
- (id)createEffectStyleProductionForPartDefinition:(id)arg1;
- (id)createEffectStyleProductionForPartDefinition:(id)arg1 withNameIdentifier:(id)arg2;
- (id)createElementProductionWithAsset:(id)arg1;
- (id)createNamedArtworkProductionsForAssets:(id)arg1 customInfos:(id)arg2 error:(id*)arg3;
- (id)createNamedColorProductionsForImportInfos:(id)arg1 error:(id*)arg2;
- (id)createNamedEffectProductionWithName:(id)arg1 isText:(bool)arg2;
- (void)createNamedModelsForCustomInfos:(id)arg1 referenceFiles:(bool)arg2 bitSource:(id)arg3 error:(id*)arg4;
- (void)createNamedRenditionGroupProductionsForImportInfos:(id)arg1 error:(id*)arg2;
- (void)createNamedTexturesForCustomInfos:(id)arg1 referenceFiles:(bool)arg2 bitSource:(id)arg3 error:(id*)arg4;
- (bool)createPSDReferenceArtworkForRenditionGroup:(id)arg1 atDestination:(id)arg2 error:(id*)arg3;
- (id)createProductionWithRenditionGroup:(id)arg1 forPartDefinition:(id)arg2 artworkFormat:(id)arg3 nameElement:(id)arg4 shouldReplaceExisting:(bool)arg5 error:(id*)arg6;
- (id)createProductionWithRenditionGroup:(id)arg1 forPartDefinition:(id)arg2 artworkFormat:(id)arg3 shouldReplaceExisting:(bool)arg4 error:(id*)arg5;
- (id)createReferencePNGForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2 atLocation:(id)arg3 error:(id*)arg4;
- (id)customAssetProvider;
- (bool)customizationExistsForSchemaDefinition:(id)arg1;
- (bool)customizeSchemaEffectDefinition:(id)arg1 shouldReplaceExisting:(bool)arg2 error:(id*)arg3;
- (bool)customizeSchemaElementDefinition:(id)arg1 usingArtworkFormat:(id)arg2 shouldReplaceExisting:(bool)arg3 error:(id*)arg4;
- (bool)customizeSchemaMaterialDefinition:(id)arg1 shouldReplaceExisting:(bool)arg2 error:(id*)arg3;
- (bool)customizeSchemaPartDefinition:(id)arg1 usingArtworkFormat:(id)arg2 nameElement:(id)arg3 shouldReplaceExisting:(bool)arg4 error:(id*)arg5;
- (id)customizedSchemaEffectDefinitions;
- (id)customizedSchemaElementDefinitions;
- (id)customizedSchemaMaterialDefinitions;
- (void)dealloc;
- (id)defaultBaseFileNameForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2;
- (id)defaultPNGFileNameForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2;
- (id)defaultPathComponentsForPartDefinition:(id)arg1;
- (void)deleteNamedAssets:(id)arg1 shouldDeleteAssetFiles:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteObject:(id)arg1;
- (void)deleteObjects:(id)arg1;
- (void)deleteProduction:(id)arg1 shouldDeleteAssetFiles:(bool)arg2;
- (void)deleteProductions:(id)arg1 shouldDeleteAssetFiles:(bool)arg2;
- (id)deploymentTargetWithIdentifier:(long long)arg1;
- (id)deviceTraitsUsedForOptimization;
- (bool)didMigrate;
- (id)directionWithIdentifier:(long long)arg1;
- (id)displayGamutWithIdentifier:(long long)arg1;
- (id)drawingLayerWithIdentifier:(long long)arg1;
- (id)effectComponentWithType:(unsigned int)arg1 inRendition:(id)arg2 createIfNeeded:(bool)arg3;
- (id)effectParameterTypeWithIdentifier:(unsigned int)arg1;
- (id)effectParameterValueWithType:(unsigned int)arg1 inComponent:(id)arg2 createIfNeeded:(bool)arg3;
- (id)effectTypeWithIdentifier:(unsigned int)arg1;
- (id)elementProductionsWithName:(id)arg1;
- (id)elementWithIdentifier:(long long)arg1;
- (void)exportColorsToURL:(id)arg1;
- (void)exportCursorsToURL:(id)arg1;
- (id)folderNameFromRenditionKey:(id)arg1 forPartDefinition:(id)arg2;
- (id)graphicsFeatureSetClassWithIdentifier:(long long)arg1;
- (id)historian;
- (id)idiomWithIdentifier:(long long)arg1;
- (void)importColorsFromURL:(id)arg1 valuesOnly:(bool)arg2 getUnusedColorNames:(id*)arg3;
- (void)importCursorsFromURL:(id)arg1 getUnusedImportedCursors:(id*)arg2 getUnupdatedCursors:(id*)arg3;
- (void)importCustomAssetsWithImportInfos:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)importNamedAssetsFromFileURLs:(id)arg1 referenceFiles:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)importNamedAssetsWithImportInfos:(id)arg1 referenceFiles:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)incrementallyPackRenditionsSinceDate:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (id)initWithType:(id)arg1 error:(id*)arg2;
- (id)initWithType:(id)arg1 targetPlatform:(long long)arg2 error:(id*)arg3;
- (bool)isCustomLook;
- (id)iterationTypeWithIdentifier:(int)arg1;
- (id)lookWithIdentifier:(long long)arg1;
- (int)majorVersion;
- (id)managedObjectModel;
- (id)mappingForPhotoshopLayerIndex:(long long)arg1 themeDrawingLayerIdentifier:(long long)arg2;
- (id)metadatumForKey:(id)arg1;
- (id)minimalDisplayNameForThemeConstant:(id)arg1;
- (id)minimumDeploymentVersion;
- (int)minorVersion;
- (id)mocOrganizer;
- (id)namedArtworkProductionWithName:(id)arg1;
- (id)namedArtworkProductions;
- (id)namedEffectProductionWithName:(id)arg1;
- (id)namedEffectProductions;
- (id)namedElementWithName:(id)arg1;
- (id)namedElementsForElementDefinition:(id)arg1;
- (id)newObjectForEntity:(id)arg1;
- (id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 error:(id*)arg4;
- (id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 withContext:(id)arg4 error:(id*)arg5;
- (id)optimizeForDeviceTraits;
- (void)packRenditionsError:(id*)arg1;
- (id)partWithIdentifier:(long long)arg1;
- (int)patchVersion;
- (id)pathToAsset:(id)arg1;
- (id)pathToRepresentedDocument;
- (id)persistentStoreTypeForFileType:(id)arg1;
- (id)pixelFormatWithIdentifier:(long long)arg1;
- (id)presentationStateWithIdentifier:(long long)arg1;
- (id)previousStateWithIdentifier:(long long)arg1;
- (id)previousValueWithIdentifier:(long long)arg1;
- (void)primeArrayControllers;
- (id)psdImageRefForAsset:(id)arg1;
- (bool)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (void)recacheThemeConstant:(id)arg1;
- (id)relativePathToProductionData;
- (void)removeCustomizationForSchemaDefinition:(id)arg1 shouldDeleteAssetFiles:(bool)arg2;
- (void)removeDeviceTraitsForOptimization;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)renditionKeyFormat;
- (int)renditionKeySemantics;
- (long long)renditionKeySpecAttributeCount;
- (id)renditionSubtypeWithIdentifier:(unsigned int)arg1;
- (id)renditionTypeWithIdentifier:(long long)arg1;
- (id)renditionsMatchingRenditionKeySpec:(id)arg1;
- (void)resetThemeConstants;
- (id)rootPathForProductionData;
- (id)schemaCategoryWithIdentifier:(long long)arg1;
- (id)schemaDefinitionWithElementID:(long long)arg1;
- (id)schemaPartDefinitionWithElementID:(long long)arg1 partID:(long long)arg2;
- (void)setAllowsExtendedRangePixelFormats:(bool)arg1;
- (void)setArtworkFormat:(id)arg1;
- (void)setAssetManagementDelegate:(id)arg1;
- (void)setCustomAssetProvider:(id)arg1;
- (void)setMetadatum:(id)arg1 forKey:(id)arg2;
- (void)setMinimumDeploymentVersion:(id)arg1;
- (void)setOptimizeForDeviceTraits:(id)arg1;
- (void)setPathToRepresentedDocument:(id)arg1;
- (void)setRelativePathToProductionData:(id)arg1;
- (void)setTargetPlatform:(long long)arg1;
- (void)setUuid:(id)arg1;
- (bool)shouldSupportCompactCompression;
- (id)sizeClassWithIdentifier:(long long)arg1;
- (id)sizeWithIdentifier:(long long)arg1;
- (id)slicesComputedForImageSize:(struct CGSize { double x1; double x2; })arg1 usingSliceInsets:(struct { double x1; double x2; double x3; double x4; })arg2 resizableSliceSize:(struct CGSize { double x1; double x2; })arg3 withRenditionType:(long long)arg4;
- (id)stateWithIdentifier:(long long)arg1;
- (long long)targetPlatform;
- (id)templateRenderingModeWithIdentifier:(long long)arg1;
- (id)textureFaceWithIdentifier:(long long)arg1;
- (id)textureInterpretaitionWithIdentifier:(unsigned int)arg1;
- (id)themeBitSourceURL;
- (id)themeConstant:(id)arg1 withIdentifier:(long long)arg2;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)untrimmedRenditionKeyFormat;
- (id)updateAutomaticTexturesForCustomInfos:(id)arg1 allTextureInfos:(id)arg2;
- (void)updateRenditionSpec:(id)arg1;
- (id)updateToEmbeddedSchemaVersion2AndReturnAlertString:(id*)arg1;
- (id)updatedVersionsMetadataFromMetadata:(id)arg1;
- (bool)usesCUISystemThemeRenditionKey;
- (id)uuid;
- (id)valueWithIdentifier:(long long)arg1;
- (id)zeroCodeArtworkInfoWithIdentifier:(long long)arg1;

@end
