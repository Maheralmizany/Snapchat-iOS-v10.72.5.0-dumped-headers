//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class SCLoadingIndicatorView, SCOnDemandGeofilterTableViewCellViewModel, UIImageView, UILabel, UIView;

@interface SCOnDemandGeofilterTableViewCell : UITableViewCell
{
    UILabel *_geofilterStatus;
    UILabel *_infoLabel;
    UIView *_separatorLine;
    UIImageView *_thumbnail;
    UIView *_dot;
    UIView *_contentContainer;
    SCOnDemandGeofilterTableViewCellViewModel *_vm;
    SCLoadingIndicatorView *_activityIndicator;
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
}

+ (id)mutableAttributedString:(id)arg1 font:(id)arg2 fontColor:(id)arg3;
@property(nonatomic) __weak id <SCOnDemandGeofilterSessionProtocol> geofilterSession; // @synthesize geofilterSession=_geofilterSession;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutMasonryViews;
- (void)setupWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

