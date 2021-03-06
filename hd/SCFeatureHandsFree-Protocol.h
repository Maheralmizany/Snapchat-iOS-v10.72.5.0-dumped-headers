//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class SCLongPressGestureRecognizer, SCVideoCaptureConfiguration;

@protocol SCFeatureHandsFree
@property(readonly, nonatomic) _Bool enabled;
@property(nonatomic) _Bool canEnable;
@property(readonly, nonatomic) SCLongPressGestureRecognizer *longPressGestureRecognizer;
@property(nonatomic) __weak id <SCPreviewPresenter> previewPresenter;
- (void)setCancelBlock:(void (^)(void))arg1;
- (_Bool)shouldDisplayMultiSnapTooltip;
- (void)prepareForRecordingWithCapturer:(id <SCCapturer>)arg1 videoCaptureConfiguration:(SCVideoCaptureConfiguration *)arg2;
@end

