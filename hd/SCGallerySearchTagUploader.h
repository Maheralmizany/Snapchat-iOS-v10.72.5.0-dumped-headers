//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCService.h"
#import "SCUserSessionScoped.h"

@class EGODatabaseStatement, NSMutableArray, NSMutableSet, NSString, SCDataObjectContext, SCGalleryLogger, SCMemoriesSearchDatabase, SCQueuePerformer, SCSentinel;

@interface SCGallerySearchTagUploader : NSObject <SCService, SCUserSessionScoped>
{
    SCMemoriesSearchDatabase *_memoriesSearchDatabase;
    SCQueuePerformer *_performer;
    NSMutableArray *_waitForUploadSnapTagsList;
    NSMutableSet *_waitForUploadSnapIdSet;
    id <SCNetworker> _networker;
    SCGalleryLogger *_galleryLogger;
    EGODatabaseStatement *_markAsSynced;
    SCSentinel *_invalidateSentinel;
    SCDataObjectContext *_dataObjectContext;
}

- (void).cxx_destruct;
- (_Bool)_isInvalidated;
- (void)invalidate;
- (_Bool)_markAsSyncedWithSnapId:(id)arg1 database:(id)arg2;
- (void)_setupDatabase:(id)arg1;
- (void)_markSyncedSnapsWithTagsResponse:(id)arg1;
- (id)defaultNotifierWithLowPowerMode;
- (id)regularScheduleNotifier;
- (void)markSyncedSnapsWithSnapId:(id)arg1;
- (void)enqueueWithSnapId:(id)arg1 languageId:(id)arg2 tagsData:(id)arg3;
- (void)enqueueSnap:(id)arg1 locationTags:(id)arg2 timeTags:(id)arg3 metaTags:(id)arg4 visualTagToConfidenceMap:(id)arg5 tagVersion:(id)arg6 languageId:(id)arg7 tagClusterName:(id)arg8 locationClusterName:(id)arg9 caption:(id)arg10;
- (void)runWithServiceTerm:(id)arg1;
- (id)dedicatedQueue;
- (id)initWithMemoriesSearchDatabase:(id)arg1 networker:(id)arg2 galleryLogger:(id)arg3 dataObjectContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

