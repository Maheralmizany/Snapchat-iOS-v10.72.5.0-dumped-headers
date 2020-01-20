//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMapChromeButtonControlling.h"

@class NSTimer, SCMapChromeButtonControllerListenerAnnouncer, SCMapChromeTooltip, SCMapStatusStore, SCMapUserPreferences;

@interface SCMapStatusButtonController : NSObject <SCMapChromeButtonControlling>
{
    id <SCCheckInOptionFetcher> _checkInOptionFetcher;
    SCMapStatusStore *_mapStatusStore;
    SCMapUserPreferences *_mapUserPreferences;
    long long _buttonState;
    SCMapChromeTooltip *_tooltip;
    NSTimer *_tooltipTimer;
    SCMapChromeButtonControllerListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)_didShowTooltipText:(id)arg1;
- (void)_showTooltipText:(id)arg1 duration:(double)arg2;
- (_Bool)_canShowTooltipWithTitle:(id)arg1;
- (_Bool)_canShowAnyTooltip;
- (void)_maybeShowTooltipForOption:(id)arg1;
- (id)announcer;
- (id)emoji;
- (id)tooltip;
- (long long)buttonState;
- (void)showTooltipIfNecessary;
- (id)initWithCheckInOptionFetcher:(id)arg1 mapStatusStore:(id)arg2 mapUserPreferences:(id)arg3;

@end
