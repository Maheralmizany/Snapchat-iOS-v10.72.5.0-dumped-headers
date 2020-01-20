//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCTChatPresenceController.h"

#import "SCTGroupChatPresencePillDelegate.h"
#import "SCTraceEnabled.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SCTGroupChatPresenceController : SCTChatPresenceController <SCTGroupChatPresencePillDelegate, SCTraceEnabled>
{
    NSMutableArray *_participants;
    NSMutableDictionary *_participantsPills;
}

+ (id)_pillLabelsForParticipantStates:(id)arg1;
- (void).cxx_destruct;
- (void)didReceiveCognacChatDockEvent:(id)arg1;
- (void)_updateContentInsetWithCognacChatDockEvent:(id)arg1;
- (void)_setMaskViewVisible:(_Bool)arg1;
- (unsigned long long)_pillModeForParticipantState:(id)arg1 callingState:(long long)arg2 callingMedia:(long long)arg3 fullscreen:(_Bool)arg4;
- (void)_updateBottomConstraintOfPill:(id)arg1;
- (void)_updateScrollViewContentSize;
- (void)_reorderPills;
- (void)_updateLeftConstraintOfPills;
- (void)_updateBottomConstraintOfPills;
- (void)_updateParticipantsWithStateOfTheWorld:(id)arg1;
- (id)_userForUsername:(id)arg1;
- (id)_createParticipantWithState:(id)arg1 labelText:(id)arg2;
- (double)_tallestPillHeightForState:(id)arg1;
- (void)_processDragEndWithCompletion:(CDUnknownBlockType)arg1;
- (void)_processDragMove;
- (id)_createDragContextWithPoint:(struct CGPoint)arg1;
- (void)_animatePresenceChangeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateAvatarUpdateForParticipants:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFullscreenPillPositionAnimation:(id)arg1 pill:(id)arg2 fullscreen:(_Bool)arg3;
- (_Bool)presenceBar:(id)arg1 pointInside:(struct CGPoint)arg2;
- (id)_orderedParticipants;
- (id)_pillForUsername:(id)arg1;
- (void)_performExitFullscreenAnimationForState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performEnterFullscreenAnimationForState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performChangePresenceOrderAnimationForState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performChangeMediaAnimationForState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_createPillView;
- (void)_initView;
- (id)initWithParticipants:(id)arg1 avatarServices:(id)arg2 chatServices:(id)arg3 talkUIController:(id)arg4 speechActivityAnnouncer:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

