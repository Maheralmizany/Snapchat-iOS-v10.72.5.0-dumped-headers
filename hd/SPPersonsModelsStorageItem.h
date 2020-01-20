//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class FSTargetSegmentationResult, NSString, SPHairStyleModel, SPImage;

@interface SPPersonsModelsStorageItem : NSObject <NSCoding>
{
    NSString *_identifier;
    unsigned long long _gender;
    SPHairStyleModel *_hairStyle;
    SPImage *_spImage;
    FSTargetSegmentationResult *_segmentationResult;
    double _version;
}

@property(nonatomic) double version; // @synthesize version=_version;
@property(readonly, nonatomic) FSTargetSegmentationResult *segmentationResult; // @synthesize segmentationResult=_segmentationResult;
@property(readonly, nonatomic) SPImage *spImage; // @synthesize spImage=_spImage;
@property(readonly, nonatomic) SPHairStyleModel *hairStyle; // @synthesize hairStyle=_hairStyle;
@property(readonly, nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 gender:(unsigned long long)arg2 hairStyle:(id)arg3 spImage:(id)arg4 segmentationResult:(id)arg5;

@end

