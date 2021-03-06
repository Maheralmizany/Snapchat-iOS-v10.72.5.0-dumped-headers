//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStoriesFSNNetworkRequesting.h"

@class NSString, SCSessionRequestManager;

@interface SCStoriesFSNNetworkRequester : NSObject <SCStoriesFSNNetworkRequesting>
{
    SCSessionRequestManager *_sessionRequestManager;
}

- (void).cxx_destruct;
- (void)fetchPublicStoriesWithSharedId:(id)arg1 successQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureQueue:(id)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)fetchStoryWithStoryId:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteStoryWithSharedStoryGroupId:(id)arg1 storyID:(id)arg2 successQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureQueue:(id)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)deleteStoryWithStoryId:(id)arg1 archiveOnly:(_Bool)arg2 additionalHttpHeaders:(id)arg3 successQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureQueue:(id)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (id)initWithSessionRequestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

