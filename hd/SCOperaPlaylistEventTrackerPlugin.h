//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaPlaylistPlugin.h"

#import "SCOperaSession.h"

@class NSString;

@interface SCOperaPlaylistEventTrackerPlugin : SCOperaPlaylistPlugin <SCOperaSession>
{
}

- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (_Bool)isHighPriorityEventListener;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

