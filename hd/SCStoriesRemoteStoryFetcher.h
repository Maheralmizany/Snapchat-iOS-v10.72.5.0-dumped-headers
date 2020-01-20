//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCExperimentManager, SCLazy;

@interface SCStoriesRemoteStoryFetcher : NSObject
{
    SCLazy *_fsnNetworkRequester;
    SCLazy *_mixerNetworkRequester;
    SCExperimentManager *_experimentManager;
    SCLazy *_snapReadReceiptDataCoordinator;
}

- (void).cxx_destruct;
- (void)_fetchedStoryWithStoryLookupResponse:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchStoryFromMixerWithUserId:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchStoryFromFSNWithUsername:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchStoryWithUsername:(id)arg1 userId:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithMixerNetworkRequester:(id)arg1 fsnNetworkRequester:(id)arg2 experimentManager:(id)arg3 snapReadReceiptDataCoordinator:(id)arg4;

@end

