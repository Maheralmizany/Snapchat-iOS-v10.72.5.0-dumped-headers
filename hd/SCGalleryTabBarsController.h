//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCUserSession, SIGTabBarView, UIView;

@interface SCGalleryTabBarsController : NSObject
{
    SCUserSession *_userSession;
    NSArray *_tabControllers;
    SIGTabBarView *_tabBarView;
    NSArray *_tabBarViewItems;
    id <SCGalleryTabBarsControllerDelegate> _delegate;
    UIView *_containerView;
}

@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SCGalleryTabBarsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleTabBarViewItemTap:(id)arg1;
- (void)_updateTabBarViewWithTabControllers:(id)arg1 highlightedTabController:(id)arg2;
- (_Bool)_hasStoryTab:(id)arg1;
- (void)updateWithHighlightedIndex:(double)arg1 isTracking:(_Bool)arg2;
- (void)updateWithTabControllers:(id)arg1 highlightedTabController:(id)arg2;
- (id)initWithUserSession:(id)arg1;

@end

