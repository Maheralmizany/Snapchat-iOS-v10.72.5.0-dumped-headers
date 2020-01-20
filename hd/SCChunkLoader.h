//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSSet, NSString, SCExperimentManager, SCScopedAccess;

@interface SCChunkLoader : NSObject
{
    NSMutableDictionary *_pendingUnarchiveRecords;
    id <SCPerforming> _successResponsePerformer;
    long long _sequenceNumber;
    SCExperimentManager *_experimentManager;
    SCScopedAccess *_scopedCircumstanceEngine;
    _Bool _shouldCheckExtensionFile;
    NSString *_userId;
    NSSet *_notifMediaIds;
    id <SCPerforming> _requestPerformer;
    id <SCPerforming> _mainQueuePerformer;
}

+ (void)cancelQueuedRequestForChunk:(id)arg1;
+ (id)requestKeyForChunk:(id)arg1;
+ (void)boostLoadingChunkToCurrentConnectivity:(id)arg1;
+ (long long)currentConnectivity;
+ (id)shared;
@property(retain, nonatomic) id <SCPerforming> mainQueuePerformer; // @synthesize mainQueuePerformer=_mainQueuePerformer;
@property(retain, nonatomic) id <SCPerforming> requestPerformer; // @synthesize requestPerformer=_requestPerformer;
- (void).cxx_destruct;
- (id)_encodeWithRulefileForDsnapURL:(id)arg1 requestKey:(id)arg2;
- (id)unarchiveRecordsForEndpoint:(id)arg1;
- (void)saveUnarchiveBlockForEndpoint:(id)arg1 snapId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)didFinishUnarchivingForEndpoint:(id)arg1;
- (_Bool)hasBegunUnarchivingForEndpoint:(id)arg1;
- (void)willBeginUnarchivingForEndpoint:(id)arg1;
- (id)sectionsFromChunk:(id)arg1 error:(id *)arg2 mediaId:(id)arg3 chunkHash:(id)arg4;
- (void)prepareForLogout;
- (id)copySections:(id)arg1 withIdModifier:(id)arg2;
- (CDUnknownBlockType)_unarchiveBlockWithendpoint:(id)arg1 chunkHash:(id)arg2 mediaId:(id)arg3 sequenceNumber:(long long)arg4 uniqueID:(id)arg5 downloadStartTime:(double)arg6 userInitiated:(_Bool)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (void)_loadChunkWithEndpoint:(id)arg1 chunkHash:(id)arg2 uniqueID:(id)arg3 mediaID:(id)arg4 requestKey:(id)arg5 userInitiated:(_Bool)arg6 contexts:(id)arg7 priority:(long long)arg8 fallbackPriority:(long long)arg9 connectivity:(long long)arg10 trackingId:(id)arg11 trackingType:(id)arg12 trackingMediaType:(id)arg13 trackingExpirationInDays:(long long)arg14 index:(long long)arg15 successBlock:(CDUnknownBlockType)arg16 failureBlock:(CDUnknownBlockType)arg17;
- (id)_newDownloadRequestForEndpoint:(id)arg1 requestKey:(id)arg2 userInitiated:(_Bool)arg3 contexts:(id)arg4 priority:(long long)arg5 fallbackPriority:(long long)arg6 connectivity:(long long)arg7 trackingId:(id)arg8 mediaId:(id)arg9 trackingType:(id)arg10 trackingMediaType:(id)arg11 trackingExpirationInDays:(long long)arg12 index:(long long)arg13;
- (void)loadDiscoverChunk:(id)arg1 userInitiated:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)setNotifMediaIds:(id)arg1;
- (id)init;

@end

