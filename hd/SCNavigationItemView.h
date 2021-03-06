//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCNavigationItem_DEPRECATEDDelegate.h"
#import "SCTraceEnabled.h"

@class NSString, SCNavigationItem_DEPRECATED, UILabel;

@interface SCNavigationItemView : UIView <SCNavigationItem_DEPRECATEDDelegate, SCTraceEnabled>
{
    SCNavigationItem_DEPRECATED *_item;
    unsigned long long _itemVisibility;
    long long _visibleItemCount;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long visibleItemCount; // @synthesize visibleItemCount=_visibleItemCount;
@property(nonatomic) unsigned long long itemVisibility; // @synthesize itemVisibility=_itemVisibility;
@property(retain, nonatomic) SCNavigationItem_DEPRECATED *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)navigationItemItemsDidChange:(id)arg1;
- (double)widthForVisibility:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

