//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

@class NSMutableSet, NSString, SCProfileChatMediaDataSource, SCStopwatch;

@interface SCOperaPlaylistProfileChatMediaLoggingPlugin : SCOperaPlaylistEventTrackerPlugin
{
    NSString *_profileSessionId;
    unsigned long long _openSource;
    SCProfileChatMediaDataSource *_dataSource;
    SCStopwatch *_currentPageViewingStopwatch;
    SCStopwatch *_currentPageLoadingStopwatch;
    SCStopwatch *_sessionViewingStopwatch;
    long long _chatMediaViewCount;
    long long _loadingScreenCount;
    NSMutableSet *_viewedChatMediaIds;
}

- (void).cxx_destruct;
- (void)_logChatMediaSessionWithContext:(id)arg1;
- (void)_logChatMediaViewWithContext:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)teardown;
- (void)setPlaylistItemController:(id)arg1;
- (id)initWithSessionId:(id)arg1 openSource:(unsigned long long)arg2 dataSource:(id)arg3;

@end

