//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSMutableDictionary;

@interface SVAssetFetcher : NSObject
{
    NSCache *_cache;
    NSMutableDictionary *_completionsByURL;
}

@property(retain, nonatomic) NSMutableDictionary *completionsByURL; // @synthesize completionsByURL=_completionsByURL;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)removeAssetForURL:(id)arg1;
- (void)fetchAssetWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
