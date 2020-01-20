//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class SCSearchBar, UILabel, UIView;

@interface SCSettingsStoryNotificationsSearchCell : UICollectionViewCell
{
    UIView *_bottomBorder;
    UILabel *_collectionViewHeaderLabel;
    UIView *_collectionViewHeaderLabelContainer;
    SCSearchBar *_searchBar;
    id <SCSearchBarDelegate> _delegate;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(nonatomic) __weak id <SCSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_configuredCollectionHeaderLabel;
- (id)_configuredSearchBar;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

