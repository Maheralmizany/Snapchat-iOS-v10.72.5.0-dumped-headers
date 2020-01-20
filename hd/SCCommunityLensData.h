//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCommunityLensData.h"

@class NSString, NSURL, SCLensCreator;

@interface SCCommunityLensData : NSObject <SCCommunityLensData>
{
    SCLensCreator *_lensCreator;
    NSString *_attributionName;
    NSString *_scannedData;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)communityLensDataWithGeofilterData:(id)arg1;
@property(readonly, copy, nonatomic) NSString *scannedData; // @synthesize scannedData=_scannedData;
@property(readonly, copy, nonatomic) NSString *attributionName; // @synthesize attributionName=_attributionName;
@property(readonly, copy, nonatomic) SCLensCreator *lensCreator; // @synthesize lensCreator=_lensCreator;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLensCreator:(id)arg1 attributionName:(id)arg2 scannedData:(id)arg3;
@property(readonly, nonatomic) NSURL *deepLinkURL;
- (id)snapScannedData;
- (id)displayUserName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
