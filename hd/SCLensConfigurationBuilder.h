//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCLens, SCLensSbSnappable;

@interface SCLensConfigurationBuilder : NSObject
{
    SCLens *_lens;
    NSString *_lensOptionId;
    long long _faceFrontCameraCount;
    long long _faceBackCameraCount;
    long long _lensIndexPos;
    long long _lensIndexCount;
    NSString *_lensApplicableContext;
    NSString *_sceneIntelligenceRequestId;
    SCLensSbSnappable *_snappableMetadata;
}

+ (id)withLensConfiguration:(id)arg1;
- (void).cxx_destruct;
- (id)setSnappableMetadata:(id)arg1;
- (id)setSceneIntelligenceRequestId:(id)arg1;
- (id)setLensApplicableContext:(id)arg1;
- (id)setLensIndexCount:(long long)arg1;
- (id)setLensIndexPos:(long long)arg1;
- (id)setFaceBackCameraCount:(long long)arg1;
- (id)setFaceFrontCameraCount:(long long)arg1;
- (id)setLensOptionId:(id)arg1;
- (id)setLens:(id)arg1;
- (id)build;

@end
