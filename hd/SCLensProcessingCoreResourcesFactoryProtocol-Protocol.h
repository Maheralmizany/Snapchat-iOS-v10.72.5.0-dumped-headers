//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCLensProcessingCoreResourcesFactoryProtocol <NSObject>
- (id <SCLensTraceLoggerProtocol>)traceLoger;
- (id <SCLensSDKLogLevelProviderProtocol>)lensSDKLogLevelProvider;
- (id <LSAExperimentProviderProtocol>)lensExperimentProvider;
- (id <SCLensCrashLoggerStoreProtocol>)lensCrashLoggerStore;
- (id <SCLensCrashLoggerProtocol>)lensCrashLoggerWithCrashedLensIdProvider:(id <SCCrashedLensIdProvider>)arg1;
@end

