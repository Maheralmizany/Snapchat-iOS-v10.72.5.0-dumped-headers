//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensesUIControllerState.h"

@class NSArray, NSString, SCLens, SCLensLaunchData;

@interface SCLensesUIControllerState : NSObject <SCLensesUIControllerState>
{
    SCLens *_lens;
    NSString *_lensOptionId;
    SCLensLaunchData *_snappablesLaunchData;
    id <SCLensExternalImageItemProtocol> _externalImageItem;
    NSArray *_assetsToPrefetch;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) NSArray *assetsToPrefetch; // @synthesize assetsToPrefetch=_assetsToPrefetch;
@property(readonly, copy, nonatomic) id <SCLensExternalImageItemProtocol> externalImageItem; // @synthesize externalImageItem=_externalImageItem;
@property(readonly, copy, nonatomic) SCLensLaunchData *snappablesLaunchData; // @synthesize snappablesLaunchData=_snappablesLaunchData;
@property(readonly, copy, nonatomic) NSString *lensOptionId; // @synthesize lensOptionId=_lensOptionId;
@property(readonly, copy, nonatomic) SCLens *lens; // @synthesize lens=_lens;
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
- (id)initWithLens:(id)arg1 lensOptionId:(id)arg2 snappablesLaunchData:(id)arg3 externalImageItem:(id)arg4 assetsToPrefetch:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
