//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAppNotificationProcessor.h"

@class SCUserSession;

@interface SCSpectaclesNotificationProcessor : NSObject <SCAppNotificationProcessor>
{
    SCUserSession *_userSession;
    id <SCNotificationManager> _notificationManager;
}

- (void).cxx_destruct;
- (long long)shouldFilterNotification:(id)arg1;
- (void)processNotification:(id)arg1;
- (id)initWithUserSession:(id)arg1 notificationManager:(id)arg2;

@end

