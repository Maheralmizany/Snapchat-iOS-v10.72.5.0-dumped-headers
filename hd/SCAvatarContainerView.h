//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCImageViewOptimizable.h"

@class SCAvatarContainerViewModel, SCAvatarView, SCLazy;

@interface SCAvatarContainerView : UIView <SCImageViewOptimizable>
{
    SCAvatarView *_avatarView;
    SCLazy *_accessoryImageView;
    unsigned long long _optimizationOptions;
    SCAvatarContainerViewModel *_viewModel;
    id <SCImageDownloading> _imageDownloader;
    id <SCAvatarViewDelegate> _delegate;
    struct CGSize _preferredImageSize;
    struct UIEdgeInsets _avatarViewContentEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets avatarViewContentEdgeInsets; // @synthesize avatarViewContentEdgeInsets=_avatarViewContentEdgeInsets;
@property(nonatomic) __weak id <SCAvatarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) SCAvatarContainerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long optimizationOptions; // @synthesize optimizationOptions=_optimizationOptions;
@property(nonatomic) struct CGSize preferredImageSize; // @synthesize preferredImageSize=_preferredImageSize;
- (void).cxx_destruct;
- (struct CGRect)_avatarViewFrame;
- (id)bitmojiView;
- (id)operaBaseView;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

