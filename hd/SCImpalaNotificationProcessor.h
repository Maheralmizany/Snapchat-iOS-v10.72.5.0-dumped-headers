//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNotificationProcessor.h"

@class SCUserSession;

@interface SCImpalaNotificationProcessor : NSObject <SCNotificationProcessor>
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)processNotification:(id)arg1;
- (long long)shouldFilterNotification:(id)arg1;
- (id)initWithUserSession:(id)arg1;

@end

