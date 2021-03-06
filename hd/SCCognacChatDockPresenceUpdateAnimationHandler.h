//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"

@class NSMutableSet, NSString, SCCognacAvatarService;

@interface SCCognacChatDockPresenceUpdateAnimationHandler : NSObject <SCActionHandling>
{
    SCCognacAvatarService *_avatarService;
    id <SCCognacChatDockPresenceUpdateAnimationHandlerDelegate> _delegate;
    NSMutableSet *_runningAvatarAnimations;
    NSMutableSet *_avatarAnimationPool;
}

- (void).cxx_destruct;
- (void)_performAppPositionUpAnimationWithSourceView:(id)arg1;
- (void)_performAvatarAnimationWithAnimationModel:(id)arg1 sourceView:(id)arg2;
- (void)_recycleAvatarAnimation:(id)arg1;
- (id)_fetchAvatarAnimationWithAnimationModel:(id)arg1 sourceView:(id)arg2;
- (void)clear;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithAvatarService:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

