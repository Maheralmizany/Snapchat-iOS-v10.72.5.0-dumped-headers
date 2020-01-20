//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableDictionary, NSString, UIView<SCSearchTabBar>;

@interface SCSearchTabBarContainerView : UIView <UIScrollViewDelegate>
{
    NSMutableDictionary *_viewsByIndex;
    id <SCSearchTabBarContainerViewDelegate> _delegate;
    UIView<SCSearchTabBar> *_tabBarView;
    long long _tabBarPosition;
    double _topLayoutGuideLength;
    double _bottomLayoutGuideLength;
    struct CGPoint _customizedTabBarOrigin;
    struct CGPoint _contentOffset;
}

@property(nonatomic) double bottomLayoutGuideLength; // @synthesize bottomLayoutGuideLength=_bottomLayoutGuideLength;
@property(nonatomic) double topLayoutGuideLength; // @synthesize topLayoutGuideLength=_topLayoutGuideLength;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) struct CGPoint customizedTabBarOrigin; // @synthesize customizedTabBarOrigin=_customizedTabBarOrigin;
@property(nonatomic) long long tabBarPosition; // @synthesize tabBarPosition=_tabBarPosition;
@property(retain, nonatomic) UIView<SCSearchTabBar> *tabBarView; // @synthesize tabBarView=_tabBarView;
@property(nonatomic) __weak id <SCSearchTabBarContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setContentView:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
