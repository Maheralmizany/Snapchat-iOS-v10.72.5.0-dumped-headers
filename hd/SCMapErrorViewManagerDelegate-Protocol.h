//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCMapErrorViewManager;

@protocol SCMapErrorViewManagerDelegate <NSObject>
- (void)errorViewManagerWantsToExitToCamera:(SCMapErrorViewManager *)arg1;
- (void)errorViewManagerDidStopShowingError:(SCMapErrorViewManager *)arg1;
- (void)errorViewManagerDidStartShowingError:(SCMapErrorViewManager *)arg1;
@end

