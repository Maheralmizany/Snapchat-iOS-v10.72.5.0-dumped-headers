//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView<SIGFooterItemView>, UIViewController;

@interface SIGFooterItem : NSObject
{
    UIView<SIGFooterItemView> *_itemView;
    id <SIGFooterItemTransitionContext> _transitionContext;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) id <SIGFooterItemTransitionContext> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(readonly, nonatomic) UIView<SIGFooterItemView> *itemView; // @synthesize itemView=_itemView;
- (void).cxx_destruct;
- (id)initWithItemView:(id)arg1 transitionContext:(id)arg2;

@end
