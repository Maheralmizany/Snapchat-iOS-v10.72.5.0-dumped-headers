//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SCLens, SCLensLaunchData;

@interface SCLensesUIControllerStateBuilder : NSObject
{
    SCLens *_lens;
    NSString *_lensOptionId;
    SCLensLaunchData *_snappablesLaunchData;
    id <SCLensExternalImageItemProtocol> _externalImageItem;
    NSArray *_assetsToPrefetch;
}

+ (id)withLensesUIControllerState:(id)arg1;
- (void).cxx_destruct;
- (id)setAssetsToPrefetch:(id)arg1;
- (id)setExternalImageItem:(id)arg1;
- (id)setSnappablesLaunchData:(id)arg1;
- (id)setLensOptionId:(id)arg1;
- (id)setLens:(id)arg1;
- (id)build;
- (id)setLensId:(id)arg1;

@end
