//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData;

@interface SCNFideliusKeyUnwrappingResult : NSObject
{
    _Bool _success;
    _Bool _wipeMystique;
    NSData *_key;
    NSArray *_metrics;
}

+ (id)KeyUnwrappingResultWithKey:(id)arg1 success:(_Bool)arg2 wipeMystique:(_Bool)arg3 metrics:(id)arg4;
@property(readonly, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) _Bool wipeMystique; // @synthesize wipeMystique=_wipeMystique;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) NSData *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;
- (id)initWithKey:(id)arg1 success:(_Bool)arg2 wipeMystique:(_Bool)arg3 metrics:(id)arg4;

@end

