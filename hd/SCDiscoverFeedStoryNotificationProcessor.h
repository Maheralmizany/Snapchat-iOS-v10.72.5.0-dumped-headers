//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAppNotificationProcessor.h"

@class SCUserSession;

@interface SCDiscoverFeedStoryNotificationProcessor : NSObject <SCAppNotificationProcessor>
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_postNewNotification:(id)arg1 forStory:(id)arg2 isForegrounded:(_Bool)arg3;
- (void)_insertAndPrefetchStory:(id)arg1 andPostNewNotification:(id)arg2;
- (void)_checkStoryFullyViewedInsertAndNotify:(id)arg1 notification:(id)arg2;
- (void)_handleLookupStoryResponse:(id)arg1 notification:(id)arg2;
- (void)_processDiscoverFeedNotification:(id)arg1;
- (void)processNotification:(id)arg1;
- (long long)shouldFilterNotification:(id)arg1;
- (id)initWithUserSession:(id)arg1;

@end

