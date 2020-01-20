//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCProfileChatMediaFolderPlayerDelegate.h"

@class NSString, SCEventListenerAnnouncer, SCProfileChatMediaFolderActionHandler, SCUnifiedProfileLoggingService, UIViewController<SCPageNameLogging>;

@interface SCProfileChatMediaFolderPageActionHandler : NSObject <SCProfileChatMediaFolderPlayerDelegate, SCActionHandling>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCProfileChatMediaFolderActionHandler *_chatMediaFolderActionHandler;
    id <SCProfileChatMediaFolderPagePlayerDelegate> _playerDelegate;
    UIViewController<SCPageNameLogging> *_presentingViewController;
    id <SCProfileChatMediaOperaBaseViewProviding> _baseViewProvider;
    SCUnifiedProfileLoggingService *_loggingService;
}

@property(nonatomic) __weak SCUnifiedProfileLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(nonatomic) __weak id <SCProfileChatMediaOperaBaseViewProviding> baseViewProvider; // @synthesize baseViewProvider=_baseViewProvider;
@property(nonatomic) __weak UIViewController<SCPageNameLogging> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <SCProfileChatMediaFolderPagePlayerDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
- (void).cxx_destruct;
- (void)profileChatMediaFolderActionHandler:(id)arg1 didBeginPlayingChatMediaWithDataModel:(id)arg2;
- (_Bool)isPresentingChatMedia;
- (_Bool)isChatMediaCellVisible;
- (_Bool)_handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithProfileChatMediaDataSource:(id)arg1 userSession:(id)arg2 snapchattersDataProvider:(id)arg3 sessionId:(id)arg4 openSource:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
