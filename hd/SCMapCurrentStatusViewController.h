//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCComposerViewOwner.h"
#import "SCMapCurrentStatusContext.h"
#import "SCMapModalViewControllerSubclass.h"
#import "SCMapPeopleFriendsListener.h"
#import "SCMapStatusFetcherListener.h"

@class NSString, SCMapCurrentStatusDetailView, SCMapLoggerEventSender, SCMapModalViewController, SCMapMyStatus, SCMapStatusStore;

@interface SCMapCurrentStatusViewController : UIViewController <SCComposerViewOwner, SCMapCurrentStatusContext, SCMapPeopleFriendsListener, SCMapStatusFetcherListener, SCMapModalViewControllerSubclass>
{
    id <SCMapCurrentStatusViewControllerDelegate> _delegate;
    SCMapLoggerEventSender *_eventSender;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    SCMapStatusStore *_mapStatusStore;
    SCMapMyStatus *_myStatus;
    unsigned long long _statusSessionId;
    id <SCMapStatusCreationViewProvider> _viewProvider;
    SCMapCurrentStatusDetailView *_currentStatusDetailView;
    _Bool _isDeletingStatus;
    _Bool _isMostRecentStatus;
}

- (void).cxx_destruct;
- (id)defaultProjectNameV2;
- (id)_viewerViewModelsForViewerUserIds:(id)arg1;
- (void)_reloadViewers;
- (void)_updateIsMostRecentStatus;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)peopleFriendsProvider:(id)arg1 didUpdateStoryForUserIds:(id)arg2;
- (void)peopleFriendsProviderDidUpdate:(id)arg1;
- (void)mapStatusFetcherDidLoadMyStatus:(id)arg1;
- (void)didTapDeleteButton;
- (void)didTapDismissButton;
- (void)didLongPressViewerWithUserId:(id)arg1;
- (void)didTapAvatarOfViewerWithUserId:(id)arg1 avatarView:(id)arg2;
- (_Bool)modalViewController:(id)arg1 panGestureRecognizer:(id)arg2 shouldBeginInView:(id)arg3;
- (id)composerWillCreateViewForClass:(Class)arg1 nodeId:(id)arg2;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1 eventSender:(id)arg2 mapPeopleFriendsProvider:(id)arg3 mapStatusStore:(id)arg4 myStatus:(id)arg5 statusSessionId:(unsigned long long)arg6 viewProvider:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak SCMapModalViewController *parentModalViewController;
@property(readonly) Class superclass;

@end

