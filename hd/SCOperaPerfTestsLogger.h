//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

@class NSString;

@interface SCOperaPerfTestsLogger : SCOperaPlaylistEventTrackerPlugin
{
    NSString *_currentDisplayingPageId;
    double _eventStartTime;
}

- (void).cxx_destruct;
- (void)_logEndEvent:(id)arg1 pageID:(id)arg2 mediaType:(id)arg3 pageType:(id)arg4;
- (void)_startTrackingEventWithPageID:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)setPlaylistItemController:(id)arg1;
- (id)registeredEventsForOperaSession;
- (id)init;

@end

