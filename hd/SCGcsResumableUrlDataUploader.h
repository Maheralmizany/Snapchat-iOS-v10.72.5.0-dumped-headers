//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDataUploading.h"

@class NSString, SCQueuePerformer, SCRefreshAheadBuffer;

@interface SCGcsResumableUrlDataUploader : NSObject <SCDataUploading>
{
    SCQueuePerformer *_performer;
    SCRefreshAheadBuffer *_urlBuffer;
    id <SCRequestManager> _requestManager;
    id <SCKeyValuePersisting> _uploadIdToSessionURI;
}

- (void).cxx_destruct;
- (void)_uploadFromByteWithSessionURI:(id)arg1 uniqueMediaId:(id)arg2 requestUploadUrl:(id)arg3 uploadStartByte:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_getUploadStartByte:(id)arg1 uniqueMediaId:(id)arg2 requestUploadUrl:(id)arg3 uploadStartByteBlock:(CDUnknownBlockType)arg4;
- (void)_getNewSessionUriForUniqueMediaId:(id)arg1 uniqueMediaId:(id)arg2 uriBlock:(CDUnknownBlockType)arg3;
- (void)uploadData:(id)arg1 uniqueMediaId:(id)arg2 callbackPerformer:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)initWithKeyValueStore:(id)arg1 urlBuffer:(id)arg2 requestManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

