//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCCreatorSettingsDataMutator, SCDiscoverFeedSubscriptionRequestsProcessor, SCUserSession;

@interface SCDiscoverFeedSubscribeRequestHandler : NSObject
{
    SCUserSession *_userSession;
    SCDiscoverFeedSubscriptionRequestsProcessor *_subscriptionRequestHandler;
    SCCreatorSettingsDataMutator *_creatorSettingsMutator;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_logSubscribeToStory:(id)arg1 withFinalSubscribeState:(unsigned long long)arg2 interactionContext:(long long)arg3;
- (void)subscribeToDiscoverFeedStory:(id)arg1 shouldSubscribe:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 interactionContext:(long long)arg5;
- (id)initWithUserSession:(id)arg1 snapchatterDataMutater:(id)arg2 snapchatterDataTracker:(id)arg3;

@end

