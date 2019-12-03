/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPersonChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    NSMutableSet * _faceUUIDsRequiringFaceCropGeneration;
    PHRelationshipChangeRequestHelper * _facesHelper;
    NSMutableSet * _graphDedupePersonUUIDs;
    NSString * _identifier;
    PHRelationshipChangeRequestHelper * _invalidMergeCandidatesHelper;
    PHRelationshipChangeRequestHelper * _keyFaceHelper;
    PHRelationshipChangeRequestHelper * _mergeCandidatesHelper;
    NSString * _nominalMergeTargetUUID;
    NSMutableArray * _personUUIDsToMerge;
    PHRelationshipChangeRequestHelper * _rejectedFacesHelper;
    NSMutableSet * _rejectedMergeCandidatePersonUUIDs;
    PHPerson * _targetPerson;
}

@property (nonatomic) unsigned short ageType;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) id /* block */ concurrentWorkBlock;
@property (nonatomic, copy) NSDictionary *contactMatchingDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *facesHelper;
@property (nonatomic) unsigned short genderType;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isInPersonNamingModel, nonatomic) bool inPersonNamingModel;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *invalidMergeCandidatesHelper;
@property (readonly) bool isNewRequest;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *keyFaceHelper;
@property (nonatomic) short keyFacePickSource;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (nonatomic) unsigned long long manualOrder;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *mergeCandidatesHelper;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, copy) NSString *personUri;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedPerson;
@property (nonatomic) long long questionType;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *rejectedFacesHelper;
@property (readonly) Class superclass;
@property (nonatomic, retain) PHPerson *targetPerson;
@property (nonatomic) long long type;
@property (getter=isVerified, nonatomic) bool verified;
@property (nonatomic) long long verifiedType;

+ (bool)canGenerateUUIDWithoutEntitlements;
+ (id)changeRequestForDedupingGraphPersons:(id)arg1;
+ (id)changeRequestForMergingPersons:(id)arg1;
+ (id)changeRequestForMergingPersons:(id)arg1 nominalTargetIdentifier:(id)arg2;
+ (id)changeRequestForPerson:(id)arg1;
+ (id)changeRequestsForMergeCandidatePersons:(id)arg1;
+ (id)creationRequestForPerson;
+ (void)deletePersons:(id)arg1;

- (void).cxx_destruct;
- (bool)_containsUserMutations;
- (id)_existentFaceObjectIDs;
- (id)_existentInvalidMergeCandidateObjectIDs;
- (id)_existentMergeCandidateObjectIDs;
- (id)_existentRejectedFaceObjectIDs;
- (bool)_hasMutationForVerifiedType:(int*)arg1;
- (id)_mutableFaceObjectIDsAndUUIDs;
- (id)_mutableInvalidMergeCandidateObjectIDsAndUUIDs;
- (id)_mutableKeyFaceObjectIDsAndUUIDs;
- (id)_mutableMergeCandidateObjectIDsAndUUIDs;
- (id)_mutableRejectedFacesObjectIDsAndUUIDs;
- (id)_mutableRequiringFaceCropGenerationFacesUUIDs;
- (id)_noMinimumFaceCountPersonFetchOptions;
- (void)_prepareKeyFaceHelperIfNeeded;
- (void)_setGraphDedupePersons:(id)arg1;
- (void)_setKeyFace:(id)arg1 forCluster:(bool)arg2 pickSource:(short)arg3;
- (void)_setNominalMergeTargetUUID:(id)arg1;
- (bool)_shouldPromotePerson:(id)arg1 toVerifiedType:(int*)arg2;
- (void)addFaces:(id)arg1;
- (void)addInvalidMergeCandidatePersons:(id)arg1;
- (void)addMergeCandidatePersons:(id)arg1;
- (void)addRejectedFaces:(id)arg1;
- (void)addRejectedFaces:(id)arg1 forCluster:(bool)arg2;
- (unsigned short)ageType;
- (bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (id)contactMatchingDictionary;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)displayName;
- (void)encodeToXPCDict:(id)arg1;
- (id)facesHelper;
- (unsigned short)genderType;
- (id)identifier;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (id)invalidMergeCandidatesHelper;
- (bool)isInPersonNamingModel;
- (bool)isVerified;
- (id)keyFaceHelper;
- (short)keyFacePickSource;
- (id)managedEntityName;
- (unsigned long long)manualOrder;
- (id)mergeCandidatesHelper;
- (void)mergePersons:(id)arg1;
- (id)name;
- (id)personUUID;
- (id)personUri;
- (id)placeholderForCreatedPerson;
- (bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (long long)questionType;
- (void)rejectMergeCandidatePersons:(id)arg1;
- (id)rejectedFacesHelper;
- (void)removeFaces:(id)arg1;
- (void)removeMergeCandidatePersons:(id)arg1;
- (void)removeRejectedFaces:(id)arg1;
- (void)setAgeType:(unsigned short)arg1;
- (void)setContactMatchingDictionary:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setGenderType:(unsigned short)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInPersonNamingModel:(bool)arg1;
- (void)setKeyFace:(id)arg1;
- (void)setKeyFace:(id)arg1 forCluster:(bool)arg2;
- (void)setKeyFaceForUserPick:(id)arg1;
- (void)setKeyFaceForUserPick:(id)arg1 forCluster:(bool)arg2;
- (void)setKeyFacePickSource:(short)arg1;
- (void)setManualOrder:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setPersonUUID:(id)arg1;
- (void)setPersonUri:(id)arg1;
- (void)setQuestionType:(long long)arg1;
- (void)setTargetPerson:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setVerified:(bool)arg1;
- (void)setVerifiedType:(long long)arg1;
- (id)targetPerson;
- (long long)type;
- (bool)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (long long)verifiedType;

@end
