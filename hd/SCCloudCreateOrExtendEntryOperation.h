//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCCloudSyncOperation.h"

#import "SCCloudSyncStoryOperation.h"

@class NSArray, NSDate, NSDictionary, NSString, SCCloudSyncTriggerUserContext;

@interface SCCloudCreateOrExtendEntryOperation : SCCloudSyncOperation <SCCloudSyncStoryOperation>
{
    NSString *_requestID;
    id <SCGalleryProfile> _profile;
    id <SCGalleryEntry> _entryPlaceholder;
    NSArray *_snapPlaceholders;
    NSArray *_detailPlaceholders;
    NSArray *_miniThumbnailPlaceholders;
    NSDictionary *_dataVaultEncryption;
    NSDate *_autosaveTimeUtc;
    SCCloudSyncTriggerUserContext *_userContext;
}

- (void).cxx_destruct;
- (_Bool)isPrivateWithDataObjectContext:(id)arg1;
- (id)dataVaultEncryption;
- (unsigned long long)numberOfSnaps;
- (id)miniThumbnailPlaceholders;
- (id)detailPlaceholders;
- (id)snapPlaceholders;
- (id)cleanupContextForOutOfOrderDeletionWithDataObjectContext:(id)arg1;
- (id)processAndCleanupForOutOfOrderDeletions:(id)arg1 dataObjectContext:(id)arg2 dataSource:(id)arg3 logger:(id)arg4 queue:(id)arg5;
- (_Bool)needRunImmediately;
- (_Bool)requiresSyncStatusUpdate;
- (_Bool)allMediaUploadsCompleteWithDataObjectContext:(id)arg1;
- (_Bool)isOperationFromRetryEntry;
- (_Bool)doesNotRequireMediaUpload;
- (_Bool)eligibleForOutOfOrderExecution;
- (id)logParameters;
- (void)_updateEntryFromCloudFS:(id)arg1 networker:(id)arg2 dataObjectContext:(id)arg3 useProtobuf:(_Bool)arg4 logger:(id)arg5 queue:(id)arg6 snapsUploadInfo:(id)arg7 failureHandler:(CDUnknownBlockType)arg8 successHandler:(CDUnknownBlockType)arg9;
- (id)changedSnapContextsWithEntryUpdate:(id)arg1;
- (void)cleanupWithContext:(id)arg1 cloudFS:(id)arg2 dataSource:(id)arg3;
- (id)commitWithEntryUpdates:(id)arg1 dataObjectContext:(id)arg2;
- (void)remoteSyncFromCloudFS:(id)arg1 dataVault:(id)arg2 dataObjectContext:(id)arg3 networker:(id)arg4 useProtobuf:(_Bool)arg5 logger:(id)arg6 filterInvalidSnaps:(_Bool)arg7 queue:(id)arg8 progressHandler:(CDUnknownBlockType)arg9 failureHandler:(CDUnknownBlockType)arg10 successHandler:(CDUnknownBlockType)arg11;
- (_Bool)isOperationValidBeforeRemoteSync:(id)arg1 dataObjectContext:(id)arg2;
- (_Bool)executeOptimisticallyWithDataObjectContext:(id)arg1 logger:(id)arg2;
- (id)detectAndResolveConflictsWithCloudFS:(id)arg1 dataObjectContext:(id)arg2 logger:(id)arg3;
- (id)initWithSnapshot:(id)arg1 requestID:(id)arg2;
- (id)makeSnapshot;
- (id)entryIds;
- (id)requestID;
- (unsigned long long)type;
- (id)initWithEntryPlaceholder:(id)arg1 addSnapEntities:(id)arg2 autosaveTimeUtc:(id)arg3 dataVaultEncryption:(id)arg4 profile:(id)arg5 userContext:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
