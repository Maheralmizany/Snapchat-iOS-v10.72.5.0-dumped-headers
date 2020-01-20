//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, SCImageCaptureConfiguration, SCPromise;

@protocol SCFeatureImageCapture
@property(readonly, nonatomic) SCImageCaptureConfiguration *captureConfiguration;
@property(readonly, nonatomic) SCPromise *depthPhotoDataPromise;
@property(readonly, nonatomic) SCPromise *imagePromise;
@property(nonatomic) __weak id <SCFeatureImageCaptureConfigurationDelegate> captureConfigurationDelegate;
@property(nonatomic) __weak id <SCFeatureImageCaptureDelegate> delegate;
- (void)prepareForImageCapturingWithSessionId:(NSString *)arg1 filterLensId:(NSString *)arg2;
- (void)captureImageWithConfiguration:(SCImageCaptureConfiguration *)arg1;
@end

