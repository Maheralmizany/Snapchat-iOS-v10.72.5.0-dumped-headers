//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCAppNotification;

@interface SCStoryInviteStickerNotificationActionDataModel : NSObject <NSCopying>
{
    SCAppNotification *_notification;
}

@property(readonly, nonatomic) SCAppNotification *notification; // @synthesize notification=_notification;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNotification:(id)arg1;

@end

