//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol SCScanCardDeepLinkProtocol <NSObject>
@property(nonatomic) __weak id <SCScanCardDeepLinkDelegate> deepLinkDelegate;
- (void)stopLoadingProgress;
- (UIView *)deepLinkIcon;
- (struct CGRect)deepLinkIconFrame;
@end

