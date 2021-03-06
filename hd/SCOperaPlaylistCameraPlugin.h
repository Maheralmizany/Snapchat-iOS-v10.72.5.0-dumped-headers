//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaPlaylistFeaturePlugin.h"

#import "SCOperaEventListener.h"

@class NSString, SCUserSession;

@interface SCOperaPlaylistCameraPlugin : SCOperaPlaylistFeaturePlugin <SCOperaEventListener>
{
    SCUserSession *_userSession;
    long long _viewLocation;
}

- (void).cxx_destruct;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)updateOperaConfiguration:(id)arg1;
- (id)type;
- (void)addEventListenersWithEventAnnouncer:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (id)playlistDataSource;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

