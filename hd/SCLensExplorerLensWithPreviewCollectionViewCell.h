//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLensExplorerBaseLensCollectionViewCell.h"

@class UIImageView;

@interface SCLensExplorerLensWithPreviewCollectionViewCell : SCLensExplorerBaseLensCollectionViewCell
{
    UIImageView *_previewImageView;
    UIImageView *_animatedImageView;
}

- (void).cxx_destruct;
- (struct CGRect)iconViewFrame;
- (void)prepareForReuse;
- (void)_stopAnimation;
- (void)_playAnimation;
- (void)_prepareAnimatedImageView;
- (void)_preparePreviewImageView;
- (void)setViewModel:(id)arg1;

@end

