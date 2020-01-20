//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCCloudSyncOperation.h"

@class NSArray, NSDictionary, NSString, SCCloudSyncTriggerUserContext;

@interface SCCloudUpdatePrivateEntriesOperation : SCCloudSyncOperation
{
    NSString *_requestID;
    NSString *_entryId;
    id <SCGalleryProfile> _profile;
    NSArray *_addSnapEntities;
    _Bool _isPrivate;
    NSDictionary *_dataVaultEncryption;
    SCCloudSyncTriggerUserContext *_userContext;
}

- (void).cxx_destruct;
- (id)cleanupContextForOutOfOrderDeletionWithDataObjectContext:(id)arg1;
- (id)processAndCleanupForOutOfOrderDeletions:(id)arg1 dataObjectContext:(id)arg2 dataSource:(id)arg3 logger:(id)arg4 queue:(id)arg5;
- (_Bool)needRunImmediately;
- (_Bool)requiresSyncStatusUpdate;
- (_Bool)allMediaUploadsCompleteWithDataObjectContext:(id)arg1;
- (_Bool)doesNotRequireMediaUpload;
- (_Bool)eligibleForOutOfOrderExecution;
- (id)logParameters;
- (void)_updateEntriesFromNetworker:(id)arg1 dataObjectContext:(id)arg2 useProtobuf:(_Bool)arg3 logger:(id)arg4 queue:(id)arg5 snapsUploadInfo:(id)arg6 failureHandler:(CDUnknownBlockType)arg7 successHandler:(CDUnknownBlockType)arg8;
- (id)description;
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
- (id)initWithProfile:(id)arg1 entryId:(id)arg2 addSnapEntities:(id)arg3 isPrivate:(_Bool)arg4 dataVaultEncryption:(id)arg5 userContext:(id)arg6;

@end

