//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SCABloopsFaceProcessingInternalMetrics, SCABloopsSetUserPhoto;

@interface SCBloopsChangeTargetLogger : NSObject
{
    SCABloopsSetUserPhoto *_bloopsSetUserPhotoEvent;
    unsigned long long _retryCount;
    NSMutableArray *_errors;
    SCABloopsFaceProcessingInternalMetrics *_faceProcessingMetrics;
}

- (void).cxx_destruct;
- (void)setupHairTechnicalMetadata:(id)arg1;
- (void)setupHairFeatures:(id)arg1;
- (void)addErrorType:(unsigned long long)arg1;
- (void)incrementOnboardingRetryCount;
- (void)setupHairStyleId:(id)arg1;
- (void)setupTwoPersonEnabled:(_Bool)arg1;
- (void)logWithResult:(_Bool)arg1;
- (id)initWithLoggerType:(unsigned long long)arg1 version:(id)arg2;

@end

