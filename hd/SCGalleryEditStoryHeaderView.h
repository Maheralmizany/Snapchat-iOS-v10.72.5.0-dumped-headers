//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

#import "SCGalleryEntryThumbnailGeneratorDelegate.h"

@class NSString, SCGalleryEntryThumbnailGenerator, UIImageView, UILabel, UIView;

@interface SCGalleryEditStoryHeaderView : UICollectionReusableView <SCGalleryEntryThumbnailGeneratorDelegate>
{
    id <SCGalleryEntry> _entry;
    UIView *_storyContainer;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SCGalleryEntryThumbnailGenerator *_thumbnailGenerator;
    id <SCGalleryEditStoryHeaderViewDelegate> _delegate;
}

+ (struct CGSize)headerSize;
@property(nonatomic) __weak id <SCGalleryEditStoryHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)thumbnailGeneratorHasDelayedLoading:(id)arg1;
- (void)thumbnailGenerator:(id)arg1 didLoadMiniThumbnail:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)thumbnailGenerator:(id)arg1 didUpdateStoryThumbnailWithImage:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)thumbnailGenerator:(id)arg1 didUpdateSnapThumbnailWithImage:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)dealloc;
- (void)setEntry:(id)arg1 userSession:(id)arg2;
- (id)viewForTransition;
- (void)_animateTap:(_Bool)arg1;
- (void)_handleLongPressGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
