//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCGallerySearchConceptMatchInfo : NSObject
{
    NSString *_snapId;
    NSString *_concept;
    long long _resultMatchType;
    double _confidence;
}

+ (id)intersectBySnapIdsWithMatchInfos:(id)arg1 andMatchInfos:(id)arg2;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) long long resultMatchType; // @synthesize resultMatchType=_resultMatchType;
@property(readonly, nonatomic) NSString *concept; // @synthesize concept=_concept;
@property(readonly, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSnapId:(id)arg1 concept:(id)arg2 resultMatchType:(long long)arg3 confidence:(double)arg4;

@end
