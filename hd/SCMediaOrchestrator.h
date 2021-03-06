//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMediaDataIngesting.h"
#import "SCMediaOrchestrating.h"

@class NSMutableDictionary, NSString, SCQueuePerformer;

@interface SCMediaOrchestrator : NSObject <SCMediaOrchestrating, SCMediaDataIngesting>
{
    id <SCMediaDataPackageManaging> _mediaDataPackageManaging;
    id <SCUploadMediaDataManaging> _uploadMediaDataManaging;
    id <SCSendFlowLogging> _sendFlowLogger;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_callbacks;
    id <SCKeyValuePersisting> _sessionInfoStore;
}

- (void).cxx_destruct;
- (void)_executeCallbacksWithId:(id)arg1 orchestrationResult:(id)arg2;
- (void)_upload:(id)arg1 mediaData:(id)arg2 overlayData:(id)arg3 encryptionKey:(id)arg4 encryptionIv:(id)arg5;
- (void)setUploadableMediaWithId:(id)arg1 mediaData:(id)arg2 overlayData:(id)arg3 encryptionKey:(id)arg4 encryptionIv:(id)arg5;
- (void)_startUploadWithPackageHandle:(id)arg1 encryptionKey:(id)arg2 encryptionIv:(id)arg3;
- (void)_resumeWithId:(id)arg1 callbackPerformer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resumeWithId:(id)arg1 callbackPerformer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPerformer:(id)arg1 keyValueStore:(id)arg2 mediaDataPackageManaging:(id)arg3 uploadMediaDataManaging:(id)arg4 sendFlowLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

