//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCTV3ELMShrunkMeasurements, SCTV3ExpandedLocalMediaController, UIView;

@protocol SCTV3ExpandedLocalMediaControllerDelegate <NSObject>
- (SCTV3ELMShrunkMeasurements *)shrunkMeasurementsForELMController:(SCTV3ExpandedLocalMediaController *)arg1;
- (void)toggleAudioMuteForELMController:(SCTV3ExpandedLocalMediaController *)arg1;
- (_Bool)isAudioMutedForELMController:(SCTV3ExpandedLocalMediaController *)arg1;
- (void)flipCameraForELMController:(SCTV3ExpandedLocalMediaController *)arg1;
- (_Bool)isFrontCameraUsedForELMController:(SCTV3ExpandedLocalMediaController *)arg1;
- (UIView *)localVideoViewForELMController:(SCTV3ExpandedLocalMediaController *)arg1;
@end

