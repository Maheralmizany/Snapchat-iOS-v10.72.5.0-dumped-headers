//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotificationCenter, NSString;

@interface SCHeadlessLaunchWorkflow : NSObject
{
    id <SCHeadlessLaunchDelegate> _delegate;
    NSNotificationCenter *_notificationCenter;
    NSString *_notification;
}

- (void).cxx_destruct;
- (void)_headlessLaunchEnded;
- (void)begin;
- (id)initWithDelegate:(id)arg1 notificationCenter:(id)arg2 notification:(id)arg3;

@end
