//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMessageChatTableViewCell.h"

#import "SCActionMenuRenderableCell.h"
#import "SCActionable.h"

@class NSString, SCSnapMediaCardView, UILabel, UIView;

@interface SCSnapChatTableViewCellV2 : SCMessageChatTableViewCell <SCActionMenuRenderableCell, SCActionable>
{
    SCSnapMediaCardView *_mediaCardView;
    UILabel *_replayNotificationLabel;
    UILabel *_screenshotNotificationLabel;
    UILabel *_screenRecordingNotificationLabel;
    UIView *_animatingSnapView;
    id <SCActionHandling> _actionHandler;
    id <SCSnapReplayViewCellDelegate> _replayDelegate;
}

+ (id)notificationLabelFont;
@property(nonatomic) __weak id <SCSnapReplayViewCellDelegate> replayDelegate; // @synthesize replayDelegate=_replayDelegate;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)thumbnailViewForMediaId:(id)arg1;
- (void)resetWithOriginalContent;
- (id)actionMenuContentViewForIndex:(unsigned long long)arg1;
- (void)configureWithActionMenuVC:(id)arg1;
- (void)resetSnapCountdownTimer;
- (_Bool)_isViewModelGroupChat:(id)arg1;
- (void)_setupNotificationLabels;
- (void)setMediaCardViewOpacity:(double)arg1;
- (struct CGRect)getSnapIconViewRect;
- (double)senderLineHeight;
- (void)renderPayload;
- (void)layoutSubviews;
- (id)snapViewModel;
- (void)_adjustLabelsForViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 delegate:(id)arg4 userSession:(id)arg5;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

