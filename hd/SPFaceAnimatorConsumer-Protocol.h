//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CVMatHolder, NSString;

@protocol SPFaceAnimatorConsumer <NSObject>
@property(nonatomic) __weak id <SPFaceAnimatorConsumerDelegate> delegate;
@property(readonly, nonatomic) NSString *errorDomain;
- (void)finish;
- (void)consume:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)isReadyToConsume;
- (id)postProcessFrame:(CVMatHolder *)arg1 atIndex:(unsigned long long)arg2;
- (void)frameProcessingStarted:(unsigned long long)arg1;
- (void)framePreloadingFinished;
- (void)framePreloadingStarted;
- (void)releaseBuffers;
- (void)initializeBuffers;
- (void)restart;
- (void)start:(struct CGSize)arg1;
@end

