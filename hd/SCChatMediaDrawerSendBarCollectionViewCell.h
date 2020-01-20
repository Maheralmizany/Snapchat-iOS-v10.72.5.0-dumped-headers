//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView;

@interface SCChatMediaDrawerSendBarCollectionViewCell : UICollectionViewCell
{
    UIImageView *_thumbnailView;
    id <SCMediaDrawerItem> _drawerItem;
    id <SCCachingMediaRequest> _galleryThumbnailRequest;
    id <SCCanceling> _miniThumbnailRequest;
}

+ (id)_sharedPerformer;
- (void).cxx_destruct;
- (void)_showThumbnailForGalleryEntry:(id)arg1 userSession:(id)arg2;
- (void)setDrawerItem:(id)arg1 userSession:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

