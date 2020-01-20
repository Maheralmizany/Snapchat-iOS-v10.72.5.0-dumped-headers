//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCustomStoriesDataMutating.h"

@class NSString, SCCustomStoriesNetworkRequester, SCLazy, SCUserSession;

@interface SCCustomStoriesDataMutator : NSObject <SCCustomStoriesDataMutating>
{
    SCCustomStoriesNetworkRequester *_customStoriesNetworkRequester;
    SCUserSession *_userSession;
    SCLazy *_docObjectContext;
    id <SCStoriesBlizzardLogging> _storiesBlizzardLogger;
    id <SCPerforming> _performer;
    id <SCLegacyCustomStoriesDataMutating> _legacyDataMutator;
}

@property(retain, nonatomic) id <SCLegacyCustomStoriesDataMutating> legacyDataMutator; // @synthesize legacyDataMutator=_legacyDataMutator;
- (void).cxx_destruct;
- (void)_removeOrLeaveCustomStoryDidFinishWithPublicationId:(id)arg1 leaveType:(long long)arg2 success:(_Bool)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_createCustomStoryInLegacyWithResponse:(id)arg1;
- (void)_logCreateCustomStoryWithMetadata:(id)arg1 creationSource:(long long)arg2;
- (void)_createCustomStoryDidSuccessWithResponse:(id)arg1 creationSource:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)_updateCustomStoryDidFailWithResponseCode:(long long)arg1 publicationId:(id)arg2 originalDisplayName:(id)arg3 originalAutosaveTurnOn:(_Bool)arg4 originalPosterIdsPermitted:(id)arg5 originalViewerIdsPermitted:(id)arg6 failureBlock:(CDUnknownBlockType)arg7 callbackQueue:(id)arg8;
- (void)_updateCustomStoryDidSucceedWithResponse:(id)arg1 completionQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)updateLocalMyMostRecentPostTimestampWithCustomStoriesMetadata:(id)arg1;
- (void)createCustomStoryWithMetadata:(id)arg1 creationSource:(long long)arg2 completionQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)_sendUpdateCustomStoryMetadataRequestWithMetadata:(id)arg1 originalDisplayName:(id)arg2 originalAutosaveTurnOn:(_Bool)arg3 originalPosterIdsPermitted:(id)arg4 originalViewerIdsPermitted:(id)arg5 completionQueue:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)updateCustomStoryWithMetadata:(id)arg1 completionQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)leaveCustomStoryWithPublicationId:(id)arg1 leaveByBlocking:(_Bool)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeCustomStoryWithPublicationId:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithCustomStoriesNetworkRequester:(id)arg1 userSession:(id)arg2 docObjectContext:(id)arg3 storiesBlizzardLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

