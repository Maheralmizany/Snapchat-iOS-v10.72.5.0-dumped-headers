//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCTPresencePill.h"

@class SCTChatPresencePillState, SCTPresenceTypingBubbleView, UIView;

@interface SCTChatPresencePill : SCTPresencePill
{
    double _presenceUpdatedTimeInterval;
    SCTPresenceTypingBubbleView *_typingBubble;
    id <SCTChatPresencePillDelegate> _delegate;
    SCTChatPresencePillState *_state;
    UIView *_mediaView;
}

@property(readonly, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
@property(readonly, nonatomic) SCTChatPresencePillState *state; // @synthesize state=_state;
@property(nonatomic) __weak id <SCTChatPresencePillDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_animateBitmojiToTypingState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)_mediaStatusFromParticipantState:(id)arg1 connecting:(_Bool)arg2;
- (struct CGSize)_pillSizeForState:(id)arg1;
- (id)_colorForPresenceState:(_Bool)arg1;
- (double)bitmojiScale;
- (void)setExpansionBitmojiScale:(double)arg1 pillScale:(double)arg2;
- (void)setHorizontalStretch:(double)arg1;
- (void)reattachVideoView:(id)arg1;
- (void)_updateMediaView:(id)arg1;
- (void)_loadBitmojiView;
- (_Bool)_shouldLoadAvatarView;
- (struct SCTPresenceBitmojiState)_bitmojiStateForState:(id)arg1;
- (double)_pillHeightForState:(id)arg1;
- (double)_pillWidthForState:(id)arg1;
- (_Bool)_avatarNeededForState:(id)arg1;
- (void)_didLoadAvatarView;
- (void)_updateTypingIndicator;
- (void)_updateColors;
- (void)_animateToState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateUIForModeVideo;
- (void)_updateUIForModeAudio;
- (void)_updateUIForModeNoMedia;
- (void)_updateUIForModeRinging;
- (void)_updateUIForModeNoCall;
- (double)heightForState:(id)arg1;
- (double)widthForState:(id)arg1;
- (void)updateMediaViewWithLocalParticipantState:(id)arg1 remoteParticipantState:(id)arg2 fullscreen:(_Bool)arg3;
- (void)animateAvatarUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateToState:(id)arg1;
- (void)animateToState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateLabelText;
@property(readonly, nonatomic) double timeIntervalSincePresenceChange;
@property(readonly, nonatomic) _Bool needsAvatarUpdate;
- (id)init;
- (void)animateToMode:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
