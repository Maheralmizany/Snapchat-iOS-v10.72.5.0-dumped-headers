//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCNetworkImage, SCNetworkImageView, SCRoundedCornerContainerView;

@interface SCDiscoverFeedManagementThumbnailImageView : UIView
{
    SCNetworkImageView *_thumbnailImageView;
    SCRoundedCornerContainerView *_cornerViewContainer;
    SCNetworkImage *_thumbnailImage;
    id <SCImageDownloading> _imageDownloader;
}

@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(copy, nonatomic) SCNetworkImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

