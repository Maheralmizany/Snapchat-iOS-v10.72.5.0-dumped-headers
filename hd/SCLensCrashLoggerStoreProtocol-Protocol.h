//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLensEffectActivatorListener.h"

@class NSString;

@protocol SCLensCrashLoggerStoreProtocol <SCLensEffectActivatorListener>
- (void)storeSelectedLensId:(NSString *)arg1;
- (void)clearLastSelectedLensId;
- (NSString *)lastSelectedLensId;
@end

