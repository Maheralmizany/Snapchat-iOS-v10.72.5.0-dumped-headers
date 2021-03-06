//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"

@class NSArray, NSString, SCFuture;

@interface SCImageProcessLensCommandSpectaclesMetadata : NSObject <SCTraceEnabled>
{
    _Bool _magicMomentEnabled;
    float _fieldOfView;
    unsigned long long _mediaType;
    SCFuture *_imuData;
    SCFuture *_depthData;
    SCFuture *_primaryCameraLookupTable;
    SCFuture *_secondaryCameraLookupTable;
    NSArray *_stabilizationFrames;
    NSString *_calibrationFilePath;
    NSString *_skyClassifierPath;
}

@property(readonly, nonatomic) _Bool magicMomentEnabled; // @synthesize magicMomentEnabled=_magicMomentEnabled;
@property(readonly, copy, nonatomic) NSString *skyClassifierPath; // @synthesize skyClassifierPath=_skyClassifierPath;
@property(readonly, copy, nonatomic) NSString *calibrationFilePath; // @synthesize calibrationFilePath=_calibrationFilePath;
@property(readonly, nonatomic) NSArray *stabilizationFrames; // @synthesize stabilizationFrames=_stabilizationFrames;
@property(readonly, nonatomic) SCFuture *secondaryCameraLookupTable; // @synthesize secondaryCameraLookupTable=_secondaryCameraLookupTable;
@property(readonly, nonatomic) SCFuture *primaryCameraLookupTable; // @synthesize primaryCameraLookupTable=_primaryCameraLookupTable;
@property(readonly, nonatomic) SCFuture *depthData; // @synthesize depthData=_depthData;
@property(readonly, nonatomic) SCFuture *imuData; // @synthesize imuData=_imuData;
@property(readonly, nonatomic) float fieldOfView; // @synthesize fieldOfView=_fieldOfView;
@property(readonly, nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (id)initWithMediaType:(unsigned long long)arg1 fieldOfView:(float)arg2 imuData:(id)arg3 depthData:(id)arg4 primaryCameraLookupTable:(id)arg5 secondaryCameraLookupTable:(id)arg6 stabilizationFrames:(id)arg7 calibrationFilePath:(id)arg8 skyClassifierPath:(id)arg9 magicMomentEnabled:(_Bool)arg10;
- (id)initWithMediaType:(unsigned long long)arg1 fieldOfView:(float)arg2 imuData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

