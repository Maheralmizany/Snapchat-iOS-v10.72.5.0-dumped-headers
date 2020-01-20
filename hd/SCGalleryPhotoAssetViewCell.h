//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "SCGalleryPhotoAssetViewCellProtocol.h"

@class CAShapeLayer, NSString, PHAsset, PHImageManager, SCGradientView, SCUserSession, UIImageView, UILabel, UIView;

@interface SCGalleryPhotoAssetViewCell : UICollectionViewCell <SCGalleryPhotoAssetViewCellProtocol>
{
    id <SCGalleryPhotoAssetViewCellDelegate> _delegate;
    SCUserSession *_userSession;
    UIView *_contentWrapperView;
    UIImageView *_imageView;
    SCGradientView *_durationGradientView;
    UILabel *_durationLabel;
    UIImageView *_selectedOverlayView;
    PHImageManager *_imageManager;
    PHAsset *_photoAsset;
    struct CGSize _thumbnailSize;
    _Bool _contentsUnloaded;
    _Bool _selectMode;
    _Bool _requestingImage;
    int _imageRequestID;
    CAShapeLayer *_roundCornerMaskLayer;
}

- (void).cxx_destruct;
- (void)setImageManager:(id)arg1 photoAsset:(id)arg2 thumbnailSize:(struct CGSize)arg3 contentsUnloaded:(_Bool)arg4 selectMode:(_Bool)arg5 userSession:(id)arg6 delegate:(id)arg7;
- (void)prepareForReuse;
- (void)stopGeneratingUpdates;
- (void)startGeneratingUpdates;
- (void)setSelectMode:(_Bool)arg1;
- (void)animateLongTapForTouchLocation:(struct CGPoint)arg1 reverse:(_Bool)arg2;
- (unsigned long long)interactionMode;
- (void)setSelected:(_Bool)arg1 selectOverlayImage:(id)arg2 snapIds:(id)arg3;
- (void)setTransitioningInitialImage:(id)arg1;
- (id)transitioningExpandingView;
- (id)transitioningImage;
- (id)transitioningPosterFrame;
- (void)roundCorner:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

