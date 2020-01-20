//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatViewLifeCycleListener.h"
#import "SCCognacAppActiveCardViewDelegate.h"
#import "SCCognacChatDockTransitionAnimatorDataSource.h"
#import "SCEventListener.h"
#import "SCTV3ActiveConversationsListener.h"
#import "SCTV3CallStateListener.h"

@class NSString, SCChatViewLifeCycleListenerAnnouncer, SCCognacAppActiveCardDataModel, SCCognacAppActiveCardEligibility, SCCognacAppActiveCardView, SCCognacDataStorage, SCCognacImageDownloader, SCCognacSnapchatterService, UITapGestureRecognizer, UIView;

@interface SCCognacAppActiveCardController : NSObject <SCChatViewLifeCycleListener, SCEventListener, SCTV3CallStateListener, SCTV3ActiveConversationsListener, SCCognacAppActiveCardViewDelegate, SCCognacChatDockTransitionAnimatorDataSource>
{
    SCChatViewLifeCycleListenerAnnouncer *_chatViewLifeCycleAnnouncer;
    UIView *_chatContainerView;
    UIView *_chatInputView;
    SCCognacImageDownloader *_imageDownloader;
    SCCognacAppActiveCardEligibility *_appActiveCardEligibility;
    id <SCTalkManager> _talkManager;
    SCCognacDataStorage *_cognacDataStorage;
    SCCognacSnapchatterService *_cognacSnapchatterService;
    _Bool _shouldSuppressKeyboardTemporarily;
    SCCognacAppActiveCardDataModel *_appActiveCardDataModel;
    UIView *_appActiveCardDimmingView;
    UITapGestureRecognizer *_appActiveCardDimmingViewTapGestureRecognizer;
    SCCognacAppActiveCardView *_appActiveCardView;
    long long _appActiveCardViewPresenceTextSequenceNumber;
    id <SCCognacAppActiveCardControllerDelegate> _delegate;
    NSString *_conversationId;
}

@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) __weak id <SCCognacAppActiveCardControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_presenceTextForSnapchatters:(id)arg1;
- (id)_displayNameForSnapchatter:(id)arg1;
- (id)_cognacParticipantsWithConversationId:(id)arg1;
- (void)_dismissAppActiveCardViewWithAnimationDuration:(double)arg1;
- (void)_updateAppActiveCardViewPresenceTextForAppActiveCardDataModel:(id)arg1;
- (void)_showAppActiveCardViewForAppActiveCardDataModel:(id)arg1 withAnimationDuration:(double)arg2 animationDelay:(double)arg3;
- (_Bool)_isShowingAppActiveCardView;
- (void)_handleAppActiveCardDimmingViewTapGestureRecognizer:(id)arg1;
- (void)_dismissAppActiveCardDimmingViewWithAnimationDuration:(double)arg1;
- (void)_showAppActiveCardDimmingViewWithAnimationDuration:(double)arg1 animationDelay:(double)arg2;
- (_Bool)_isShowingAppActiveCardDimmingView;
- (id)_generateAppActiveCardDataModelToDisplay;
- (void)_resetAppActiveCardAndKeyboardSuppressionForChatDockTransition;
- (void)_resetAppActiveCardAndKeyboardSuppression;
- (void)_resetAppActiveCardWithAppActiveCardDimmingViewAnimationDuration:(double)arg1 appActiveCardViewAnimationDuration:(double)arg2 shouldHideAppActiveCardBannerView:(_Bool)arg3;
- (void)_resetAppActiveCardDataModel;
- (void)cognacAppActiveCardViewDidPressJoinButton:(id)arg1;
- (void)cognacAppActiveCardViewDidPressNotNowButton:(id)arg1;
- (void)onActiveConversationsChanged;
- (void)onPublishedMediaOrMuteChanged:(id)arg1 media:(unsigned long long)arg2 muted:(_Bool)arg3;
- (void)onOutgoingCallStarted;
- (void)onOutgoingCallRequested;
- (void)onOutgoingCallRejected;
- (void)onOutgoingCallMissed;
- (void)onOutgoingCallCancelled;
- (void)onIncomingCallWatched;
- (void)onIncomingCallStarted;
- (void)onIncomingCallReceived;
- (void)onIncomingCallCancelled;
- (void)onCallWatched;
- (void)onCallEnded;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)viewDidSwipeOut;
- (void)viewDidFullyDisappear;
- (struct CGRect)cognacChatDockTransitionAnimator:(id)arg1 animationSourceViewFrameForContainerView:(id)arg2;
- (id)cognacChatDockTransitionAnimatorAnimationSourceView:(id)arg1;
- (id)baseViewForAppPresentation;
- (void)dismissAppActiveCardForChatDockTransition;
- (void)dismissAppActiveCard;
- (_Bool)isShowingAppActiveCard;
- (_Bool)shouldSuppressKeyboard;
- (void)chatViewWillBecomeVisible;
- (void)dealloc;
- (id)initWithChatViewLifeCycleAnnouncer:(id)arg1 chatContainerView:(id)arg2 chatInputView:(id)arg3 imageDownloader:(id)arg4 appActiveCardEligibility:(id)arg5 talkManager:(id)arg6 cognacDataStorage:(id)arg7 cognacSnapchatterService:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

