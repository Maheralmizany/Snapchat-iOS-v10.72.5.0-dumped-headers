//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCLensLifecycleListener <NSObject>
- (void)didLoadResourcesForLensWithId:(NSString *)arg1;
- (void)didTurnOffLensWithId:(NSString *)arg1;
- (void)willTurnOffLensWithId:(NSString *)arg1;
- (void)didTurnOnLensWithId:(NSString *)arg1;
- (void)willTurnOnLensWithId:(NSString *)arg1;
@end

