//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCLensCreator;

@interface SCCommunityLensDataBuilder : NSObject
{
    SCLensCreator *_lensCreator;
    NSString *_attributionName;
    NSString *_scannedData;
}

+ (id)withCommunityLensData:(id)arg1;
- (void).cxx_destruct;
- (id)setScannedData:(id)arg1;
- (id)setAttributionName:(id)arg1;
- (id)setLensCreator:(id)arg1;
- (id)build;

@end
