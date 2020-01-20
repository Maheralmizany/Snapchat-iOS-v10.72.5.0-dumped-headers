//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL, SCLensResource;

@interface SCLensCacheMetadataBuilder : NSObject
{
    NSURL *_sourceURL;
    NSString *_cacheKey;
    SCLensResource *_resource;
    NSString *_cacheDomain;
    NSString *_lensID;
    NSString *_requestTrackingType;
    NSDate *_expirationDate;
}

+ (id)withLensCacheMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)setExpirationDate:(id)arg1;
- (id)setRequestTrackingType:(id)arg1;
- (id)setLensID:(id)arg1;
- (id)setCacheDomain:(id)arg1;
- (id)setResource:(id)arg1;
- (id)setCacheKey:(id)arg1;
- (id)setSourceURL:(id)arg1;
- (id)build;

@end

