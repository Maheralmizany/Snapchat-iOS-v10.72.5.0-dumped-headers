//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, SCShareFriendViewController;

@protocol SCShareFriendViewControllerDelegate <NSObject>

@optional
- (void)shareFriendViewControllerDidCompleteExport:(SCShareFriendViewController *)arg1 activityType:(NSString *)arg2 completed:(_Bool)arg3 activityError:(NSError *)arg4;
- (void)shareFriendViewControllerTappedExportURL:(SCShareFriendViewController *)arg1;
- (void)shareFriendViewControllerDidSendUsername:(SCShareFriendViewController *)arg1;
- (void)shareFriendViewControllerTappedSendUsername:(SCShareFriendViewController *)arg1;
@end

