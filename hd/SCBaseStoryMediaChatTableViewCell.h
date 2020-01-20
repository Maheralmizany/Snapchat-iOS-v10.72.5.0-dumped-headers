//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSavableItemChatTableViewCell.h"

#import "SCActionMenuRenderableCell.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SCStoryMediaCardView, UIGestureRecognizer, UIViewController<SCChatCellGestureDelegate>;

@interface SCBaseStoryMediaChatTableViewCell : SCSavableItemChatTableViewCell <UIGestureRecognizerDelegate, SCActionMenuRenderableCell>
{
    UIGestureRecognizer *_tapGestureRecognizer;
    UIViewController<SCChatCellGestureDelegate> *_parentVC;
    id <SCChatFullscreenMediaChatTableCellDelegate> _delegate;
    SCStoryMediaCardView *_mediaCardView;
}

@property(readonly, nonatomic) SCStoryMediaCardView *mediaCardView; // @synthesize mediaCardView=_mediaCardView;
@property(readonly, nonatomic) __weak id <SCChatFullscreenMediaChatTableCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIViewController<SCChatCellGestureDelegate> *parentVC; // @synthesize parentVC=_parentVC;
- (void).cxx_destruct;
- (id)thumbnailViewForMediaId:(id)arg1;
- (void)resetWithOriginalContent;
- (id)actionMenuContentViewForIndex:(unsigned long long)arg1;
- (void)configureWithActionMenuVC:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)tap:(id)arg1;
- (void)renderPayload;
- (void)layoutSubviews;
- (id)baseStoryMediaViewModel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 delegate:(id)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

