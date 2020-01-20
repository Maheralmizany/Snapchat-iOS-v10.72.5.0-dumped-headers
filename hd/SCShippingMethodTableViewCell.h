//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCPaymentsSettingsTableViewCell.h"

@class UIImageView, UILabel;

@interface SCShippingMethodTableViewCell : SCPaymentsSettingsTableViewCell
{
    UIImageView *_checkmarkImageView;
    UILabel *_shippingMethodLabel;
    UILabel *_priceLabel;
    _Bool _isCellSelected;
}

- (void).cxx_destruct;
- (void)setCellSelected:(_Bool)arg1;
- (_Bool)isCellSelected;
- (void)setDeselectedLayout;
- (void)setSelectedLayout;
- (void)setMode:(unsigned long long)arg1;
- (void)setItem:(id)arg1;
- (void)setShippingMethod:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

