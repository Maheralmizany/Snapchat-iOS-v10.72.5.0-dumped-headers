//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSavableItemChatTableViewCell.h"

#import "SCActionMenuRenderableCell.h"

@class SCStoryReplyMediaCardView;

@interface SCReplyMessageCompositeViewCell : SCSavableItemChatTableViewCell <SCActionMenuRenderableCell>
{
    SCStoryReplyMediaCardView *_storyReplyMediaCardView;
}

- (void).cxx_destruct;
- (void)resetWithOriginalContent;
- (id)actionMenuContentViewForIndex:(unsigned long long)arg1;
- (void)configureWithActionMenuVC:(id)arg1;
- (id)replyMediaThumbnailViewModel;
- (id)replyMessagePayloadViewCell;
- (id)replyMessagePayloadViewModel;
- (id)thumbnailViewForMediaId:(id)arg1;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 delegate:(id)arg4 userSession:(id)arg5;

@end

