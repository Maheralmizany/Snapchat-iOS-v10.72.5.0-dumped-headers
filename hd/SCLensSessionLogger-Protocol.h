//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCLens, SCLensLaunchData;

@protocol SCLensSessionLogger <NSObject>
- (void)lensPresented:(SCLens *)arg1 inSessionWithId:(NSString *)arg2 lensLaunchData:(SCLensLaunchData *)arg3;
- (void)lensSessionStopped:(NSString *)arg1;
- (void)lensSessionStartedWithSessionId:(NSString *)arg1 sourceType:(long long)arg2;
@end

