//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class SCMapFloatingActionButton;

@interface SCMapPeopleVerticalScrollingViewFooterCell : UICollectionViewCell
{
    _Bool _groupExists;
    SCMapFloatingActionButton *_button;
}

@property(nonatomic) _Bool groupExists; // @synthesize groupExists=_groupExists;
@property(readonly, nonatomic) SCMapFloatingActionButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)_updateButtonProperties;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

