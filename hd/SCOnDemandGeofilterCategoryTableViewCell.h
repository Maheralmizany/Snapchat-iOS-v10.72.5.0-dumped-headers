//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface SCOnDemandGeofilterCategoryTableViewCell : UITableViewCell
{
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
    UIView *_backgroundView;
    UIImageView *_categoryImageView;
    UILabel *_categoryLabel;
    UIImageView *_cellAccessoryImageView;
}

- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupWithCategoryName:(id)arg1 categoryImageUrl:(id)arg2 andGeofilterSession:(id)arg3;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

