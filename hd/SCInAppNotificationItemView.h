//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCItemView.h"

@class SCAppNotification;

@interface SCInAppNotificationItemView : SCItemView
{
    SCAppNotification *_notification;
}

- (void).cxx_destruct;
- (_Bool)accessoryViewHasContent;
- (struct CGSize)accessorySizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 notification:(id)arg2;

@end

