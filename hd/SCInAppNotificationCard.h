//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseInAppNotificationCard.h"

@class SCInAppNotificationItemView, SCLazy;

@interface SCInAppNotificationCard : SCBaseInAppNotificationCard
{
    SCInAppNotificationItemView *_itemView;
    SCLazy *_typingBubbleView;
}

- (void).cxx_destruct;
- (void)_showAndAnimateTypingBubbleIfNecessary;
- (void)layoutSubviews;
- (id)initWithNotification:(id)arg1 withHostView:(id)arg2;

@end
