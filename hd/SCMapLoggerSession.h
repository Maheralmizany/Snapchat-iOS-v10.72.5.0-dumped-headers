//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCMapLoggerEventSender;

@interface SCMapLoggerSession : NSObject
{
    id <SCMapPersonLocationsProviding> _mapPersonLocationsProvider;
    id <SCMapLoggerSessionUserLocationProviding> _userLocationProvider;
    id <SCXGameStateProvider> _gameStateProvider;
    unsigned long long _sessionId;
    SCMapLoggerEventSender *_eventSender;
}

@property(readonly, nonatomic) SCMapLoggerEventSender *eventSender; // @synthesize eventSender=_eventSender;
@property(readonly, nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) id <SCXGameStateProvider> gameStateProvider; // @synthesize gameStateProvider=_gameStateProvider;
@property(readonly, nonatomic) id <SCMapLoggerSessionUserLocationProviding> userLocationProvider; // @synthesize userLocationProvider=_userLocationProvider;
@property(readonly, nonatomic) id <SCMapPersonLocationsProviding> mapPersonLocationsProvider; // @synthesize mapPersonLocationsProvider=_mapPersonLocationsProvider;
- (void).cxx_destruct;
- (id)initWithGameStateProvider:(id)arg1 mapPersonLocationsProvider:(id)arg2 userLocationProvider:(id)arg3;

@end
