//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCSearchV2ProfilePresenter;

@protocol SCSearchV2ProfilePresenterDelegate <NSObject>
- (void)profilePresenter:(SCSearchV2ProfilePresenter *)arg1 wantsToOpenChatForGroupId:(NSString *)arg2;
- (void)profilePresenter:(SCSearchV2ProfilePresenter *)arg1 wantsToOpenChatForUsername:(NSString *)arg2;
@end

