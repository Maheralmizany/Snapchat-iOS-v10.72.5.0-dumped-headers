//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString;

@protocol SOJUAdClientRankingModelOutput <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *error;
@property(readonly, copy, nonatomic) NSNumber *loadingLatency;
@property(readonly, copy, nonatomic) NSNumber *inferenceLatency;
@property(readonly, copy, nonatomic) NSNumber *score;
@property(readonly, copy, nonatomic) NSString *modelId;
@end

