//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString, SCAdTargetingParameters;

@interface SCAdServeInventory : NSObject <NSCopying>
{
    NSArray *_adIdentifiers;
    SCAdTargetingParameters *_targetingParameters;
    NSString *_publisherSlotId;
}

@property(readonly, copy, nonatomic) NSString *publisherSlotId; // @synthesize publisherSlotId=_publisherSlotId;
@property(readonly, copy, nonatomic) SCAdTargetingParameters *targetingParameters; // @synthesize targetingParameters=_targetingParameters;
@property(readonly, copy, nonatomic) NSArray *adIdentifiers; // @synthesize adIdentifiers=_adIdentifiers;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdIdentifiers:(id)arg1 targetingParameters:(id)arg2 publisherSlotId:(id)arg3;

@end

