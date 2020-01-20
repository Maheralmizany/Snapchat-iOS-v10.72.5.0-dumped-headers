//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMapChromeButtonControlling.h"
#import "SCMapStatusFetcherListener.h"
#import "SCMapStatusViewedStateListener.h"

@class NSString, NSTimer, SCMapChromeButtonControllerListenerAnnouncer, SCMapChromeTooltip, SCMapLoggerEventSender, SCMapStatusStore;

@interface SCMapExploreButtonController : NSObject <SCMapStatusFetcherListener, SCMapStatusViewedStateListener, SCMapChromeButtonControlling>
{
    SCMapLoggerEventSender *_mapLoggerEventSender;
    id <SCMapPersonLocationsProviding> _mapPersonLocationsProvider;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    SCMapStatusStore *_statusStore;
    long long _buttonState;
    SCMapChromeTooltip *_tooltip;
    NSString *_emoji;
    NSTimer *_tooltipTimer;
    _Bool _hasDisplayedTooltip;
    SCMapChromeButtonControllerListenerAnnouncer *_announcer;
}

+ (id)_firstUnviewedAnnouncementInStatusStore:(id)arg1 mapPersonLocationsProvider:(id)arg2;
+ (id)_tooltipForStatusStore:(id)arg1 mapPersonLocationsProvider:(id)arg2 mapPeopleFriendsProvider:(id)arg3;
+ (_Bool)_isViewedItem:(id)arg1 statusStore:(id)arg2;
- (void).cxx_destruct;
- (void)_update;
- (void)_showTooltip:(id)arg1;
- (void)mapStatusViewedStateProvider:(id)arg1 didUpdateStatusIds:(id)arg2;
- (void)mapStatusFetcherDidLoadStatuses:(id)arg1;
- (id)announcer;
- (id)emoji;
- (id)tooltip;
- (long long)buttonState;
- (void)hideTooltipIfNecessary;
- (void)showNoUpdatesTooltip;
- (void)showTooltipIfNecessary;
- (id)initWithMapLoggerEventSender:(id)arg1 mapPersonLocationsProvider:(id)arg2 mapPeopleFriendsProvider:(id)arg3 statusStore:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

