//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@protocol SCTNetworkServices <NSObject>
- (void)logNetworkActivityEndedAt:(NSDate *)arg1 startToken:(id)arg2;
- (id)logNetworkActivityStartedAt:(NSDate *)arg1;
- (void)resumeDownloads;
- (void)pauseDownloads;
@end

