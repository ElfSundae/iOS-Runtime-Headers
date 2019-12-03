/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKProcedureRecord : HKMedicalRecord <HDCoding, HKConceptIndexable, NSCopying, NSSecureCoding> {
    NSArray * _bodySites;
    NSArray * _bodySitesCodings;
    HKConcept * _category;
    NSArray * _categoryCodings;
    NSArray * _complications;
    NSArray * _complicationsCodings;
    HKMedicalDate * _executionEndDate;
    HKMedicalDate * _executionStartDate;
    NSArray * _followUps;
    NSArray * _followUpsCodings;
    bool  _notPerformed;
    HKConcept * _outcome;
    NSArray * _outcomeCodings;
    NSArray * _performers;
    HKConcept * _procedure;
    NSArray * _procedureCodings;
    HKConcept * _reason;
    NSArray * _reasonCodings;
    NSArray * _reasonsNotPerformed;
    NSArray * _reasonsNotPerformedCodings;
    HKConcept * _status;
    HKMedicalCoding * _statusCoding;
}

@property (readonly) NSUUID *UUID;
@property (readonly, copy) NSArray *bodySites;
@property (readonly, copy) NSArray *bodySitesCodings;
@property (readonly, copy) HKConcept *category;
@property (readonly, copy) NSArray *categoryCodings;
@property (readonly, copy) NSArray *complications;
@property (readonly, copy) NSArray *complicationsCodings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKMedicalDate *executionEndDate;
@property (readonly, copy) HKMedicalDate *executionStartDate;
@property (readonly, copy) NSArray *followUps;
@property (readonly, copy) NSArray *followUpsCodings;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly) bool notPerformed;
@property (readonly, copy) HKConcept *outcome;
@property (readonly, copy) NSArray *outcomeCodings;
@property (readonly, copy) NSArray *performers;
@property (readonly, copy) HKConcept *procedure;
@property (readonly, copy) NSArray *procedureCodings;
@property (readonly, copy) HKProcedureRecordType *procedureRecordType;
@property (readonly, copy) HKConcept *reason;
@property (readonly, copy) NSArray *reasonCodings;
@property (readonly, copy) NSArray *reasonsNotPerformed;
@property (readonly, copy) NSArray *reasonsNotPerformedCodings;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newProcedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 procedureCodings:(id)arg11 performers:(id)arg12 executionStartDate:(id)arg13 executionEndDate:(id)arg14 notPerformed:(bool)arg15 statusCoding:(id)arg16 categoryCodings:(id)arg17 reasonCodings:(id)arg18 reasonsNotPerformedCodings:(id)arg19 outcomeCodings:(id)arg20 complicationsCodings:(id)arg21 followUpsCodings:(id)arg22 bodySitesCodings:(id)arg23 config:(id /* block */)arg24;
+ (id)bodySitesCodingsPreferredSystems;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)categoryCodingsPreferredSystems;
+ (id)complicationsCodingsPreferredSystems;
+ (id)defaultDisplayString;
+ (id)followUpsCodingsPreferredSystems;
+ (id)indexableConceptKeyPaths;
+ (id)outcomeCodingsPreferredSystems;
+ (id)procedureCodingsPreferredSystems;
+ (id)procedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 procedureCodings:(id)arg10 performers:(id)arg11 executionStartDate:(id)arg12 executionEndDate:(id)arg13 notPerformed:(bool)arg14 statusCoding:(id)arg15 categoryCodings:(id)arg16 reasonCodings:(id)arg17 reasonsNotPerformedCodings:(id)arg18 outcomeCodings:(id)arg19 complicationsCodings:(id)arg20 followUpsCodings:(id)arg21 bodySitesCodings:(id)arg22;
+ (id)procedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 procedureCodings:(id)arg11 performers:(id)arg12 executionStartDate:(id)arg13 executionEndDate:(id)arg14 notPerformed:(bool)arg15 statusCoding:(id)arg16 categoryCodings:(id)arg17 reasonCodings:(id)arg18 reasonsNotPerformedCodings:(id)arg19 outcomeCodings:(id)arg20 complicationsCodings:(id)arg21 followUpsCodings:(id)arg22 bodySitesCodings:(id)arg23;
+ (id)reasonCodingsPreferredSystems;
+ (id)reasonsNotPerformedCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setBodySites:(id)arg1;
- (void)_setBodySitesCodings:(id)arg1;
- (void)_setCategory:(id)arg1;
- (void)_setCategoryCodings:(id)arg1;
- (void)_setComplications:(id)arg1;
- (void)_setComplicationsCodings:(id)arg1;
- (void)_setExecutionEndDate:(id)arg1;
- (void)_setExecutionStartDate:(id)arg1;
- (void)_setFollowUps:(id)arg1;
- (void)_setFollowUpsCodings:(id)arg1;
- (void)_setNotPerformed:(bool)arg1;
- (void)_setOutcome:(id)arg1;
- (void)_setOutcomeCodings:(id)arg1;
- (void)_setPerformers:(id)arg1;
- (void)_setProcedure:(id)arg1;
- (void)_setProcedureCodings:(id)arg1;
- (void)_setReason:(id)arg1;
- (void)_setReasonCodings:(id)arg1;
- (void)_setReasonsNotPerformed:(id)arg1;
- (void)_setReasonsNotPerformedCodings:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)bodySites;
- (id)bodySitesCodings;
- (id)bodySitesCodingsCollection;
- (id)bodySitesCodingsContexts;
- (id)bodySitesCodingsTasks;
- (id)category;
- (id)categoryCodings;
- (id)categoryCodingsCollection;
- (id)categoryCodingsContext;
- (id)categoryCodingsTasks;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)complications;
- (id)complicationsCodings;
- (id)complicationsCodingsCollection;
- (id)complicationsCodingsContexts;
- (id)complicationsCodingsTasks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)executionEndDate;
- (id)executionStartDate;
- (id)followUps;
- (id)followUpsCodings;
- (id)followUpsCodingsCollection;
- (id)followUpsCodingsContexts;
- (id)followUpsCodingsTasks;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (bool)notPerformed;
- (id)outcome;
- (id)outcomeCodings;
- (id)outcomeCodingsCollection;
- (id)outcomeCodingsContext;
- (id)outcomeCodingsTasks;
- (id)performers;
- (id)procedure;
- (id)procedureCodings;
- (id)procedureCodingsCollection;
- (id)procedureCodingsContext;
- (id)procedureCodingsTasks;
- (id)procedureRecordType;
- (id)reason;
- (id)reasonCodings;
- (id)reasonCodingsCollection;
- (id)reasonCodingsContext;
- (id)reasonCodingsTasks;
- (id)reasonsNotPerformed;
- (id)reasonsNotPerformedCodings;
- (id)reasonsNotPerformedCodingsCollection;
- (id)reasonsNotPerformedCodingsContexts;
- (id)reasonsNotPerformedCodingsTasks;
- (id)status;
- (id)statusCoding;
- (id)statusCodingCollection;
- (id)statusCodingContext;
- (id)statusCodingTasks;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (id)codings;
- (id)meaningfulDateTitle;
- (long long)recordCategoryType;
- (id)title;
- (id)titleDisplayStringForDetailViewController;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
