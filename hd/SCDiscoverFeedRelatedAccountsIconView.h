//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCViewModelConfigurable.h"

@class NSString, SCNetworkImageView, SCSnapchatterAvatarContainerView;

@interface SCDiscoverFeedRelatedAccountsIconView : UIView <SCViewModelConfigurable>
{
    SCSnapchatterAvatarContainerView *_avatarView;
    SCNetworkImageView *_networkImageView;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
}

@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
