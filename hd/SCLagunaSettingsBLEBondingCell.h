//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class SCLoadingIndicatorView, UILabel;

@interface SCLagunaSettingsBLEBondingCell : UITableViewCell
{
    UILabel *_statusLabel;
    SCLoadingIndicatorView *_loadingIndicator;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)stopAnimating;
- (void)startAnimating;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

