//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCSnapchatter, SCUnifiedProfileShowCameraActionHandler;

@protocol SCUnifiedProfileShowCameraActionHandlerDelegate <NSObject>
- (void)showCameraActionHandler:(SCUnifiedProfileShowCameraActionHandler *)arg1 showCameraForSnapchatter:(SCSnapchatter *)arg2;
- (_Bool)showCameraActionHandler:(SCUnifiedProfileShowCameraActionHandler *)arg1 canHandleShowCameraForSnapchatter:(SCSnapchatter *)arg2;
- (void)showCameraActionHandler:(SCUnifiedProfileShowCameraActionHandler *)arg1 showCameraForGroupId:(NSString *)arg2;
- (_Bool)showCameraActionHandler:(SCUnifiedProfileShowCameraActionHandler *)arg1 canHandleShowCameraForGroupId:(NSString *)arg2;
@end

