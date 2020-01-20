//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "SCViewModelConfigurable.h"

@class NSString, SCCompositeNetworkImageView, UIImageView, UILabel;

@interface SCCommerceCatalogProductCell : UICollectionViewCell <SCViewModelConfigurable>
{
    id _viewModel;
    id <SCCompositeNetworkImageDownloading> _imageDownloader;
    UILabel *_productTitleLabel;
    UILabel *_productPriceLabel;
    UILabel *_strikeThroughPriceLabel;
    UILabel *_outOfStockLabel;
    UIImageView *_checkmarkView;
    SCCompositeNetworkImageView *_compositeNetworkImageView;
}

+ (_Bool)viewModelIsValid:(id)arg1;
+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) SCCompositeNetworkImageView *compositeNetworkImageView; // @synthesize compositeNetworkImageView=_compositeNetworkImageView;
@property(retain, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) UILabel *outOfStockLabel; // @synthesize outOfStockLabel=_outOfStockLabel;
@property(retain, nonatomic) UILabel *strikeThroughPriceLabel; // @synthesize strikeThroughPriceLabel=_strikeThroughPriceLabel;
@property(retain, nonatomic) UILabel *productPriceLabel; // @synthesize productPriceLabel=_productPriceLabel;
@property(retain, nonatomic) UILabel *productTitleLabel; // @synthesize productTitleLabel=_productTitleLabel;
@property(retain, nonatomic) id <SCCompositeNetworkImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_setupSelectedIconForViewModel:(id)arg1;
- (void)_setupPriceLabels:(id)arg1;
- (void)_setupOutOfStockLabel;
- (void)_setupLabelsForViewModel:(id)arg1;
- (void)_setupViewsForProductViewModel:(id)arg1;
- (void)_setupKeyViews;
- (void)_clearViews;
- (void)_layoutCheckmark;
- (void)_layoutPrice:(double)arg1;
- (void)_layoutStrikethrough:(double)arg1;
- (void)_layoutOutOfStock:(double)arg1;
- (void)_layoutTitle:(double)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
