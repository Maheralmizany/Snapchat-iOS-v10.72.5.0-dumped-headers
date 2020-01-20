//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCSearchCardContainerContentViewControllerContext, UIView;

@protocol SCSearchCardContainerContentViewControlling <NSObject>
@property(retain, nonatomic) SCSearchCardContainerContentViewControllerContext *cardContainerContext;

@optional
- (UIView *)tabBarActionButon;
- (_Bool)shouldDisableTopGradientViewAlpha;
- (void)cardContainerTabDidSwitchFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 gesture:(long long)arg3;
- (void)cardContainerTabDidUpdateInteractiveChangeProgress:(double)arg1;
- (void)cardContainerTabDidCancelInteractiveChange;
- (void)cardContainerTabDidFinishInteractiveChange;
- (void)cardContainerTabWillStartInteractiveChangeFromSelectedIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)refreshByPullToRefresh;
@end

