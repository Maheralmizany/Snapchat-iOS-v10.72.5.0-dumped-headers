//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class SIGContainer, UIView;

@interface SIGCollectionViewCellBase : UICollectionViewCell
{
    SIGContainer *_container;
    UIView *_underlyingView;
}

@property(readonly, nonatomic) UIView *underlyingView; // @synthesize underlyingView=_underlyingView;
- (void).cxx_destruct;
@property(nonatomic) struct SIGContainerStyle style;
@property(nonatomic) struct UIEdgeInsets contentViewInsets;
- (id)contentView;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1 underlyingView:(id)arg2;

@end

