//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCUnlockablesCommonCache, SCUserSession;

@protocol SCUnlockableCommonCacheDelegate <NSObject>
- (SCUserSession *)userSession;
- (void)unlockableCache:(SCUnlockablesCommonCache *)arg1 didUpdate:(NSArray *)arg2;
- (void)unlockableCache:(SCUnlockablesCommonCache *)arg1 readyForPreFetch:(NSArray *)arg2;
@end

