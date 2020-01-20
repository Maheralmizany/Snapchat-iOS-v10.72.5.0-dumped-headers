//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSearchIntentHandler.h"
#import "SCSearchModalPresenterConfigurable.h"

@class NSString, SCEventListenerAnnouncer, SCGallerySearchActionHandler, SCSearchNavigationCoordinator, SCUserSession;

@interface SCGallerySearchIntentHandler : NSObject <SCSearchIntentHandler, SCSearchModalPresenterConfigurable>
{
    SCGallerySearchActionHandler *_gallerySearchActionHandler;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCUserSession *_userSession;
    SCSearchNavigationCoordinator *_searchNavigationCoordinator;
    id <SCSearchModalPresenting> _searchModalPresenter;
    id <SCStartChatDelegate> _startChatDelegate;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) __weak id <SCSearchModalPresenting> searchModalPresenter; // @synthesize searchModalPresenter=_searchModalPresenter;
@property(nonatomic) __weak SCSearchNavigationCoordinator *searchNavigationCoordinator; // @synthesize searchNavigationCoordinator=_searchNavigationCoordinator;
- (void).cxx_destruct;
- (void)_chatWithUsername:(id)arg1;
- (void)_chatWithGroupId:(id)arg1;
- (_Bool)handleIntent:(id)arg1 notification:(id)arg2 notificationDismissed:(_Bool)arg3;
- (_Bool)handleIntent:(id)arg1 notification:(id)arg2;
- (_Bool)handleIntent:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
