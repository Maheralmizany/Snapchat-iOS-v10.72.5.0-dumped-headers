//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLogout, SCUserSession;

@protocol SCLegacyUserLifecycle <NSObject>
- (void)logout:(SCLogout *)arg1;
- (void)authenticatedWithActiveUserSession:(SCUserSession *)arg1 isNewRegistration:(_Bool)arg2;
@end

