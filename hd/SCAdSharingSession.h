//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDiscoverShareControllerDelegate.h"
#import "SCOperaSession.h"

@class NSDictionary, NSString, SCCompositeAdDataSource, SCDiscoverShareController, SCOperaPlaylistItem, SCOperaViewController, SCUserSession;

@interface SCAdSharingSession : NSObject <SCDiscoverShareControllerDelegate, SCOperaSession>
{
    SCOperaPlaylistItem *_currentAdItem;
    SCUserSession *_userSession;
    long long _entryEvent;
    SCDiscoverShareController *_shareControllerImpl;
    SCCompositeAdDataSource *_adDataSource;
    long long _viewLocation;
    NSDictionary *_currentItemContext;
    long long _videoBoxState;
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCOperaViewController *_operaViewController;
}

+ (id)_adResponseDataToJson:(id)arg1;
@property(nonatomic) __weak SCOperaViewController *operaViewController; // @synthesize operaViewController=_operaViewController;
@property(nonatomic) __weak id <SCOperaPlaylistItemController> playlistItemController; // @synthesize playlistItemController=_playlistItemController;
- (void).cxx_destruct;
- (long long)_sharedItemMediaType;
- (void)_shareWithShareableMedias:(id)arg1 context:(id)arg2 params:(id)arg3 adKey:(id)arg4 adResponse:(id)arg5;
- (void)_startSharingWithContext:(id)arg1 params:(id)arg2;
- (id)_logParamBuilderForCurrentSharedItem;
- (void)_logAdShareSentWithParams:(id)arg1;
- (void)_logAdShareCreate;
- (void)shareController:(id)arg1 didChangeState:(long long)arg2;
- (void)shareControllerDidExitPreview;
- (void)shareControllerDidSaveSnap:(id)arg1 parameters:(id)arg2;
- (void)shareController:(id)arg1 didCompleteSharing:(_Bool)arg2 withParameters:(id)arg3;
- (void)shareControllerDidBeginSharing:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (id)extraPropertiesForItem:(id)arg1;
- (id)initWithUserSession:(id)arg1 adDataSource:(id)arg2 viewLocation:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

