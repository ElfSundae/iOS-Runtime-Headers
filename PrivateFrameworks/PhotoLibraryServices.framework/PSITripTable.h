/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSITripTable : PSITable {
    PSIStatement * _checkStatement;
    PSIStatement * _deleteStatement;
    PSIStatement * _getMomentsStatement;
    PSIStatement * _groupIdsWithTripIdsStatement;
    PSIStatement * _idsOfAllGroupsMatchedByTripsStatement;
    PSIStatement * _insertStatement;
    PSIStatement * _linkToGroupStatement;
    PSIStatement * _linkToMomentStatement;
    PSIStatement * _listStatement;
    PSIStatement * _numberOfTripsByGroupIdMatchingGroupsWithIdsStatement;
    PSIStatement * _numberOfTripsMatchingGroupWithIdStatement;
    PSIStatement * _selectByGroupIdStatement;
    PSIStatement * _selectByGroupIdWithEndDateStatement;
    PSIStatement * _selectByGroupIdWithSingleDateStatement;
    PSIStatement * _selectByGroupIdWithStartDateStatement;
    PSIStatement * _selectByGroupIdWithStartEndDatesStatement;
    PSIStatement * _selectWithEndDateStatement;
    PSIStatement * _selectWithSingleDateStatement;
    PSIStatement * _selectWithStartDateStatement;
    PSIStatement * _selectWithStartEndDatesStatement;
    PSIStatement * _tripIdsByGroupIdWithTripIdsStatement;
    PSIStatement * _tripResultByTripIdWithTripIdsStatement;
    PSIStatement * _tripResultsForTripIdsStatement;
    PSIStatement * _unlinkFromAllMomentsStatement;
    PSIStatement * _unlinkFromGroupsStatement;
}

- (void).cxx_destruct;
- (long long)addTrip:(id)arg1 usingTokenEnumeratingBlock:(id /* block */)arg2;
- (id)allTripUUIDs;
- (void)cacheOtherStatements;
- (void)cacheSearchableStatements;
- (void)cacheWritableStatements;
- (void)clear;
- (void)finalizze;
- (id)idsOfAllGroupsMatchedByTrips;
- (id)initWithDelegate:(id)arg1 searchable:(bool)arg2 writable:(bool)arg3;
- (void)linkTripWithId:(long long)arg1 toGroupWithId:(long long)arg2;
- (const struct __CFSet { }*)newGroupIdsWithTripIds:(struct __CFSet { }*)arg1;
- (const struct __CFArray { }*)newTripIdsWithDateFilter:(id)arg1;
- (const struct __CFArray { }*)newTripIdsWithGroupId:(long long)arg1 dateFilter:(id)arg2;
- (id)numberOfTripsByGroupIdMatchingGroupsWithIds:(id)arg1;
- (unsigned long long)numberOfTripsMatchingGroupWithId:(long long)arg1;
- (id)removeAllTrips;
- (void)removeTripForId:(long long)arg1;
- (long long)tripIdForUUID:(id)arg1;
- (id)tripIdsByGroupIdWithTripIds:(id)arg1;
- (id)tripResultByTripIdWithTripIds:(id)arg1;
- (id)tripResultsForTripIds:(struct __CFArray { }*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)unlinkTripForId:(long long)arg1;

@end
