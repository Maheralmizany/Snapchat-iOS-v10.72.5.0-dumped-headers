//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSendToShareSnapAppearanceExperimentContext : SCExperimentContext
{
    _Bool _enableWatermarkImageForSharedSnap;
    _Bool _enableWatermarkImageForSavedSnap;
}

@property(readonly, nonatomic) _Bool enableWatermarkImageForSavedSnap; // @synthesize enableWatermarkImageForSavedSnap=_enableWatermarkImageForSavedSnap;
@property(readonly, nonatomic) _Bool enableWatermarkImageForSharedSnap; // @synthesize enableWatermarkImageForSharedSnap=_enableWatermarkImageForSharedSnap;
- (void)setupParameters;
- (id)experimentName;

@end
