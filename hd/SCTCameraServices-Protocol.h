//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCTCameraServices <NSObject>
- (unsigned long long)getCameraType;
- (void)setCameraType:(unsigned long long)arg1;
- (void)setVideoFrameReceiver:(id <SCTVideoFrameReceiver>)arg1;
- (void)relinquishPreview;
- (void)acquirePreviewWithCompletion:(void (^)(UIView *))arg1;
- (void)setAutofocusAndExposurePointOfInterest:(struct CGPoint)arg1 viewSize:(struct CGSize)arg2;
- (void)stopForConsumer:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)startForConsumer:(NSString *)arg1 completion:(void (^)(void))arg2;
@end

