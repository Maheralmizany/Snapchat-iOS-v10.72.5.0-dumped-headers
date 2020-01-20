//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"

@class NSArray, NSString, SCLoadingIndicatorView, SCPreviewTooltipBalloon, SCUserSession, UIButton, UICollectionView, UIImageView, UILabel;

@interface SCGalleryLagunaImportBar : UIView <UICollectionViewDataSource>
{
    UILabel *_label;
    UIView *_importButton;
    UIButton *_wifiCancelButton;
    UIImageView *_eyeIcon;
    SCLoadingIndicatorView *_loadingIndicator;
    UIImageView *_thumbnailView;
    UIView *_lineContainer;
    UICollectionView *_collectionView;
    NSArray *_untransferredHdContent;
    id <SCCachingMediaRequest> _thumbnailRequest;
    SCPreviewTooltipBalloon *_hdOnlyTooltip;
    _Bool _importButtonHidden;
    _Bool _hdSnapsHidden;
    _Bool _shouldAnimateSpinner;
    _Bool _shouldShowThumbnailView;
    id <SCGalleryLagunaImportBarDelegate> _delegate;
    NSString *_labelText;
    SCUserSession *_userSession;
}

@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool shouldShowThumbnailView; // @synthesize shouldShowThumbnailView=_shouldShowThumbnailView;
@property(nonatomic) _Bool shouldAnimateSpinner; // @synthesize shouldAnimateSpinner=_shouldAnimateSpinner;
@property(nonatomic) _Bool hdSnapsHidden; // @synthesize hdSnapsHidden=_hdSnapsHidden;
@property(nonatomic) _Bool importButtonHidden; // @synthesize importButtonHidden=_importButtonHidden;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(nonatomic) __weak id <SCGalleryLagunaImportBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)displayHdOnlyTooltip;
- (void)_fetchContents;
- (double)height:(_Bool)arg1;
@property(nonatomic) _Bool wifiCancelButtonHidden;
- (void)_updateTransferringContentThumbnail;
- (void)reload;
- (void)_handleWifiCancelButton;
- (void)hideHdOnlyTooltip;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
