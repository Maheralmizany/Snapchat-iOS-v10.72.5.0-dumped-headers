//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCApplicationLifecycleNavigationHandler.h"

@interface SCStubApplicationLifecycleNavigationHandler : NSObject <SCApplicationLifecycleNavigationHandler>
{
}

- (void)handleApplicationDidEnterBackground;
- (void)handleApplicationWillEnterForegroundFromCallIntent:(id)arg1 isVideo:(_Bool)arg2;
- (void)handleApplicationWillEnterForegroundFromNotification:(id)arg1;
- (void)handleOpenURL:(id)arg1;
- (void)handleActionedAppNotification:(id)arg1;
- (void)handleActionedShortcutItem:(id)arg1;

@end
