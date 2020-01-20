//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImage, UILabel, UIView;

@interface SCSpectaclesExportImageCollectionViewCell : UICollectionViewCell
{
    UIView *_borderView;
    UIView *_imageView;
    UILabel *_newportExportDescriptionLabel;
    UIImage *thumbImage;
    long long _exportType;
    UIView *_thumbnailLiveView;
}

@property(readonly, nonatomic) UIView *thumbnailLiveView; // @synthesize thumbnailLiveView=_thumbnailLiveView;
@property(readonly, nonatomic) long long exportType; // @synthesize exportType=_exportType;
@property(readonly, nonatomic) UIImage *thumbImage; // @synthesize thumbImage;
- (void).cxx_destruct;
- (void)_update;
- (void)_setupThumbnailViewWithImageViewSize:(struct CGSize)arg1 borderViewSize:(struct CGSize)arg2 backgroundColor:(id)arg3 cornerRadius:(double)arg4 thumbnailImage:(id)arg5;
- (void)updateWithExportType:(long long)arg1 thumbnailImage:(id)arg2 thumbnailLiveView:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

