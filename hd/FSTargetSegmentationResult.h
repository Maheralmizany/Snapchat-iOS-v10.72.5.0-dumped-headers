//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface FSTargetSegmentationResult : NSObject <NSCoding>
{
    shared_ptr_2af1def1 _targetSegmentationResult;
}

+ (unsigned long long)getCurrentSerializationVersion;
+ (_Bool)isDataSupported:(id)arg1;
+ (_Bool)isSerializationVersionSupported:(unsigned long long)arg1;
@property(readonly, nonatomic) shared_ptr_2af1def1 targetSegmentationResult; // @synthesize targetSegmentationResult=_targetSegmentationResult;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateLandmarksBeforeNeutralization:(id)arg1;
- (void)updateLandmarks:(id)arg1;
- (void)updateSourceMat:(struct Mat)arg1;
- (void)updateSourceImage:(id)arg1;
- (void)calculateTargetForScenario:(unsigned long long)arg1 error:(id *)arg2;
- (id)getTargetSegmentationHolder;
- (id)getTargetForFeedback:(unsigned long long)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)encodeToNSData;
- (id)initWithCoder:(id)arg1;
- (id)initWithNSData:(id)arg1;
- (id)initWithTargetSegmentationResult:(shared_ptr_a2f25130)arg1;

@end

