//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, SCLoginKitAppPermissionsViewController;

@protocol SCLoginKitAppPermissionsDelegate <NSObject>
- (void)appPermissionsVC:(SCLoginKitAppPermissionsViewController *)arg1 didUpdateAppWithAppId:(NSString *)arg2 updatedApprovedScopes:(NSMutableArray *)arg3;
- (void)appPermissionsVC:(SCLoginKitAppPermissionsViewController *)arg1 didRemoveAppWithAppId:(NSString *)arg2;
@end

